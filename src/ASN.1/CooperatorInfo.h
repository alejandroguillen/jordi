/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "VSNTestBed"
 * 	found in "Messages.asn1"
 */

#ifndef	_CooperatorInfo_H_
#define	_CooperatorInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include "CoopStatus.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CooperatorInfo */
typedef struct CooperatorInfo {
	long	 coopId;
	OCTET_STRING_t	 ipAddress;
	long	 port;
	CoopStatus_t	 status;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CooperatorInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CooperatorInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _CooperatorInfo_H_ */
#include <asn_internal.h>
