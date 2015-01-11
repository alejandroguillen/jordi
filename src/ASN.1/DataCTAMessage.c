/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "VSNTestBed"
 * 	found in "Messages.asn1"
 */

#include "DataCTAMessage.h"

static asn_TYPE_member_t asn_MBR_DataCTAMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, frameID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"frameID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, sliceNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sliceNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, topLeft),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Coordinate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"topLeft"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, dataSize),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dataSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, encTime),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, txTime),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"txTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DataCTAMessage, data),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"data"
		},
};
static ber_tlv_tag_t asn_DEF_DataCTAMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DataCTAMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frameID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sliceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* topLeft */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dataSize */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* encTime */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* txTime */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* data */
};
static asn_SEQUENCE_specifics_t asn_SPC_DataCTAMessage_specs_1 = {
	sizeof(struct DataCTAMessage),
	offsetof(struct DataCTAMessage, _asn_ctx),
	asn_MAP_DataCTAMessage_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DataCTAMessage = {
	"DataCTAMessage",
	"DataCTAMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DataCTAMessage_tags_1,
	sizeof(asn_DEF_DataCTAMessage_tags_1)
		/sizeof(asn_DEF_DataCTAMessage_tags_1[0]), /* 1 */
	asn_DEF_DataCTAMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_DataCTAMessage_tags_1)
		/sizeof(asn_DEF_DataCTAMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DataCTAMessage_1,
	7,	/* Elements count */
	&asn_SPC_DataCTAMessage_specs_1	/* Additional specs */
};

