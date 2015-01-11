/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "VSNTestBed"
 * 	found in "Messages.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_DataCTAMessage_H_
#define	_DataCTAMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Coordinate.h"
#include <NativeReal.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DataCTAMessage */
typedef struct DataCTAMessage {
	long	 frameID;
	long	 sliceNumber;
	Coordinate_t	 topLeft;
	long	 dataSize;
	double	 encTime;
	double	 txTime;
	OCTET_STRING_t	 data;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataCTAMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataCTAMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _DataCTAMessage_H_ */
#include <asn_internal.h>
