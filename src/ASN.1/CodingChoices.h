/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "VSNTestBed"
 * 	found in "Messages.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_CodingChoices_H_
#define	_CodingChoices_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CodingChoices {
	CodingChoices_none	= 0,
	CodingChoices_entropyCoding	= 1
} e_CodingChoices;

/* CodingChoices */
typedef long	 CodingChoices_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CodingChoices;
asn_struct_free_f CodingChoices_free;
asn_struct_print_f CodingChoices_print;
asn_constr_check_f CodingChoices_constraint;
ber_type_decoder_f CodingChoices_decode_ber;
der_type_encoder_f CodingChoices_encode_der;
xer_type_decoder_f CodingChoices_decode_xer;
xer_type_encoder_f CodingChoices_encode_xer;
per_type_decoder_f CodingChoices_decode_uper;
per_type_encoder_f CodingChoices_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CodingChoices_H_ */
#include <asn_internal.h>
