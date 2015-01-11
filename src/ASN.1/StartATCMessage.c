/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "VSNTestBed"
 * 	found in "Messages.asn1"
 * 	`asn1c -fnative-types`
 */

#include "StartATCMessage.h"

static asn_TYPE_member_t asn_MBR_StartATCMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, framesPerSecond),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"framesPerSecond"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, detectorType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectorTypes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"detectorType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, detectorThreshold),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"detectorThreshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, descriptorType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DescriptorTypes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"descriptorType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, descriptorLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"descriptorLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, maxNumberOfFeatures),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxNumberOfFeatures"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, rotationInvariant),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rotationInvariant"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, coding),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CodingChoices,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"coding"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, transferCoordinates),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transferCoordinates"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, transferScale),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transferScale"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, transferOrientation),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transferOrientation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StartATCMessage, numFeaturesPerBlock),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numFeaturesPerBlock"
		},
};
static ber_tlv_tag_t asn_DEF_StartATCMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_StartATCMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* framesPerSecond */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* detectorType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* detectorThreshold */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* descriptorType */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* descriptorLength */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxNumberOfFeatures */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rotationInvariant */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* coding */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* transferCoordinates */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* transferScale */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* transferOrientation */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* numFeaturesPerBlock */
};
static asn_SEQUENCE_specifics_t asn_SPC_StartATCMessage_specs_1 = {
	sizeof(struct StartATCMessage),
	offsetof(struct StartATCMessage, _asn_ctx),
	asn_MAP_StartATCMessage_tag2el_1,
	12,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_StartATCMessage = {
	"StartATCMessage",
	"StartATCMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_StartATCMessage_tags_1,
	sizeof(asn_DEF_StartATCMessage_tags_1)
		/sizeof(asn_DEF_StartATCMessage_tags_1[0]), /* 1 */
	asn_DEF_StartATCMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_StartATCMessage_tags_1)
		/sizeof(asn_DEF_StartATCMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_StartATCMessage_1,
	12,	/* Elements count */
	&asn_SPC_StartATCMessage_specs_1	/* Additional specs */
};

