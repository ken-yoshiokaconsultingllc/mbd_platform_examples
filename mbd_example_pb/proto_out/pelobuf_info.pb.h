/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PELOBUF_INFO_PB_H_INCLUDED
#define PB_PELOBUF_INFO_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _SerialNumberID { 
    SerialNumberID_PELOTON_SERIAL_NUM = 1, 
    SerialNumberID_CHASSIS_SERIAL_NUM = 2, 
    SerialNumberID_SENSOR_BOARD_SERIAL_NUM = 3, 
    SerialNumberID_LOAD_SENSOR_SERIAL_NUM = 4 
} SerialNumberID;

typedef enum _PlatformResponse_PlatformID { 
    PlatformResponse_PlatformID_PRISM = 40964, 
    PlatformResponse_PlatformID_TITAN = 40965, 
    PlatformResponse_PlatformID_CAESAR = 40966, 
    PlatformResponse_PlatformID_RHEA = 40967 
} PlatformResponse_PlatformID;

typedef enum _VersionInfoRequest_VersionID { 
    VersionInfoRequest_VersionID_APP = 1, 
    VersionInfoRequest_VersionID_BOOTLOADER = 2 
} VersionInfoRequest_VersionID;

/* Struct definitions */
typedef struct _PlatformRequest { 
    char dummy_field;
} PlatformRequest;

/* These correspond to the USB PID values defined here:
 https://pelotoncycle.atlassian.net/wiki/spaces/PLAT/pages/40658174388/Peloton+USB+VID+PID+values */
typedef struct _PlatformResponse { 
    PlatformResponse_PlatformID id; 
} PlatformResponse;

typedef struct _SerialNumberListRequest { 
    bool has_id;
    SerialNumberID id; 
} SerialNumberListRequest;

typedef PB_BYTES_ARRAY_T(20) SerialNumberListResponse_SerialNumber_value_t;
typedef struct _SerialNumberListResponse_SerialNumber { 
    SerialNumberID id; 
    SerialNumberListResponse_SerialNumber_value_t value; 
} SerialNumberListResponse_SerialNumber;

typedef struct _VersionInfoRequest { 
    bool has_id;
    VersionInfoRequest_VersionID id; 
} VersionInfoRequest;

typedef struct _VersionInfoResponse_VersionItem { 
    VersionInfoRequest_VersionID id; 
    uint32_t version_major; 
    uint32_t version_minor; 
    uint32_t version_patch; 
    bool has_metadata;
    char metadata[20]; 
} VersionInfoResponse_VersionItem;

typedef struct _SerialNumberListResponse { 
    pb_size_t item_count;
    SerialNumberListResponse_SerialNumber item[4]; 
} SerialNumberListResponse;

typedef struct _VersionInfoResponse { 
    pb_size_t item_count;
    VersionInfoResponse_VersionItem item[4]; 
} VersionInfoResponse;

/* ////////////////////////////////
 PelobufInfo Message Container
//////////////////////////////// */
typedef struct _PelobufInfo { 
    pb_size_t which_id;
    union {
        PlatformRequest platform_req;
        PlatformResponse platform_resp;
        VersionInfoRequest version_req;
        VersionInfoResponse version_resp;
        SerialNumberListRequest serial_num_req;
        SerialNumberListResponse serial_num_resp;
    } id; 
} PelobufInfo;


/* Helper constants for enums */
#define _SerialNumberID_MIN SerialNumberID_PELOTON_SERIAL_NUM
#define _SerialNumberID_MAX SerialNumberID_LOAD_SENSOR_SERIAL_NUM
#define _SerialNumberID_ARRAYSIZE ((SerialNumberID)(SerialNumberID_LOAD_SENSOR_SERIAL_NUM+1))

#define _PlatformResponse_PlatformID_MIN PlatformResponse_PlatformID_PRISM
#define _PlatformResponse_PlatformID_MAX PlatformResponse_PlatformID_RHEA
#define _PlatformResponse_PlatformID_ARRAYSIZE ((PlatformResponse_PlatformID)(PlatformResponse_PlatformID_RHEA+1))

#define _VersionInfoRequest_VersionID_MIN VersionInfoRequest_VersionID_APP
#define _VersionInfoRequest_VersionID_MAX VersionInfoRequest_VersionID_BOOTLOADER
#define _VersionInfoRequest_VersionID_ARRAYSIZE ((VersionInfoRequest_VersionID)(VersionInfoRequest_VersionID_BOOTLOADER+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PelobufInfo_init_default                 {0, {PlatformRequest_init_default}}
#define PlatformRequest_init_default             {0}
#define PlatformResponse_init_default            {_PlatformResponse_PlatformID_MIN}
#define VersionInfoRequest_init_default          {false, _VersionInfoRequest_VersionID_MIN}
#define VersionInfoResponse_init_default         {0, {VersionInfoResponse_VersionItem_init_default, VersionInfoResponse_VersionItem_init_default, VersionInfoResponse_VersionItem_init_default, VersionInfoResponse_VersionItem_init_default}}
#define VersionInfoResponse_VersionItem_init_default {_VersionInfoRequest_VersionID_MIN, 0, 0, 0, false, ""}
#define SerialNumberListRequest_init_default     {false, _SerialNumberID_MIN}
#define SerialNumberListResponse_init_default    {0, {SerialNumberListResponse_SerialNumber_init_default, SerialNumberListResponse_SerialNumber_init_default, SerialNumberListResponse_SerialNumber_init_default, SerialNumberListResponse_SerialNumber_init_default}}
#define SerialNumberListResponse_SerialNumber_init_default {_SerialNumberID_MIN, {0, {0}}}
#define PelobufInfo_init_zero                    {0, {PlatformRequest_init_zero}}
#define PlatformRequest_init_zero                {0}
#define PlatformResponse_init_zero               {_PlatformResponse_PlatformID_MIN}
#define VersionInfoRequest_init_zero             {false, _VersionInfoRequest_VersionID_MIN}
#define VersionInfoResponse_init_zero            {0, {VersionInfoResponse_VersionItem_init_zero, VersionInfoResponse_VersionItem_init_zero, VersionInfoResponse_VersionItem_init_zero, VersionInfoResponse_VersionItem_init_zero}}
#define VersionInfoResponse_VersionItem_init_zero {_VersionInfoRequest_VersionID_MIN, 0, 0, 0, false, ""}
#define SerialNumberListRequest_init_zero        {false, _SerialNumberID_MIN}
#define SerialNumberListResponse_init_zero       {0, {SerialNumberListResponse_SerialNumber_init_zero, SerialNumberListResponse_SerialNumber_init_zero, SerialNumberListResponse_SerialNumber_init_zero, SerialNumberListResponse_SerialNumber_init_zero}}
#define SerialNumberListResponse_SerialNumber_init_zero {_SerialNumberID_MIN, {0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define PlatformResponse_id_tag                  1
#define SerialNumberListRequest_id_tag           1
#define SerialNumberListResponse_SerialNumber_id_tag 1
#define SerialNumberListResponse_SerialNumber_value_tag 2
#define VersionInfoRequest_id_tag                1
#define VersionInfoResponse_VersionItem_id_tag   1
#define VersionInfoResponse_VersionItem_version_major_tag 2
#define VersionInfoResponse_VersionItem_version_minor_tag 3
#define VersionInfoResponse_VersionItem_version_patch_tag 4
#define VersionInfoResponse_VersionItem_metadata_tag 5
#define SerialNumberListResponse_item_tag        1
#define VersionInfoResponse_item_tag             1
#define PelobufInfo_platform_req_tag             2
#define PelobufInfo_platform_resp_tag            3
#define PelobufInfo_version_req_tag              4
#define PelobufInfo_version_resp_tag             5
#define PelobufInfo_serial_num_req_tag           6
#define PelobufInfo_serial_num_resp_tag          7

/* Struct field encoding specification for nanopb */
#define PelobufInfo_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,platform_req,id.platform_req),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,platform_resp,id.platform_resp),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,version_req,id.version_req),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,version_resp,id.version_resp),   5) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,serial_num_req,id.serial_num_req),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,serial_num_resp,id.serial_num_resp),   7)
#define PelobufInfo_CALLBACK NULL
#define PelobufInfo_DEFAULT NULL
#define PelobufInfo_id_platform_req_MSGTYPE PlatformRequest
#define PelobufInfo_id_platform_resp_MSGTYPE PlatformResponse
#define PelobufInfo_id_version_req_MSGTYPE VersionInfoRequest
#define PelobufInfo_id_version_resp_MSGTYPE VersionInfoResponse
#define PelobufInfo_id_serial_num_req_MSGTYPE SerialNumberListRequest
#define PelobufInfo_id_serial_num_resp_MSGTYPE SerialNumberListResponse

#define PlatformRequest_FIELDLIST(X, a) \

#define PlatformRequest_CALLBACK NULL
#define PlatformRequest_DEFAULT NULL

#define PlatformResponse_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    id,                1)
#define PlatformResponse_CALLBACK NULL
#define PlatformResponse_DEFAULT (const pb_byte_t*)"\x08\x84\xc0\x02\x00"

#define VersionInfoRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UENUM,    id,                1)
#define VersionInfoRequest_CALLBACK NULL
#define VersionInfoRequest_DEFAULT (const pb_byte_t*)"\x08\x01\x00"

#define VersionInfoResponse_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, MESSAGE,  item,              1)
#define VersionInfoResponse_CALLBACK NULL
#define VersionInfoResponse_DEFAULT NULL
#define VersionInfoResponse_item_MSGTYPE VersionInfoResponse_VersionItem

#define VersionInfoResponse_VersionItem_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    id,                1) \
X(a, STATIC,   REQUIRED, UINT32,   version_major,     2) \
X(a, STATIC,   REQUIRED, UINT32,   version_minor,     3) \
X(a, STATIC,   REQUIRED, UINT32,   version_patch,     4) \
X(a, STATIC,   OPTIONAL, STRING,   metadata,          5)
#define VersionInfoResponse_VersionItem_CALLBACK NULL
#define VersionInfoResponse_VersionItem_DEFAULT (const pb_byte_t*)"\x08\x01\x00"

#define SerialNumberListRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UENUM,    id,                1)
#define SerialNumberListRequest_CALLBACK NULL
#define SerialNumberListRequest_DEFAULT (const pb_byte_t*)"\x08\x01\x00"

#define SerialNumberListResponse_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, MESSAGE,  item,              1)
#define SerialNumberListResponse_CALLBACK NULL
#define SerialNumberListResponse_DEFAULT NULL
#define SerialNumberListResponse_item_MSGTYPE SerialNumberListResponse_SerialNumber

#define SerialNumberListResponse_SerialNumber_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UENUM,    id,                1) \
X(a, STATIC,   REQUIRED, BYTES,    value,             2)
#define SerialNumberListResponse_SerialNumber_CALLBACK NULL
#define SerialNumberListResponse_SerialNumber_DEFAULT (const pb_byte_t*)"\x08\x01\x00"

extern const pb_msgdesc_t PelobufInfo_msg;
extern const pb_msgdesc_t PlatformRequest_msg;
extern const pb_msgdesc_t PlatformResponse_msg;
extern const pb_msgdesc_t VersionInfoRequest_msg;
extern const pb_msgdesc_t VersionInfoResponse_msg;
extern const pb_msgdesc_t VersionInfoResponse_VersionItem_msg;
extern const pb_msgdesc_t SerialNumberListRequest_msg;
extern const pb_msgdesc_t SerialNumberListResponse_msg;
extern const pb_msgdesc_t SerialNumberListResponse_SerialNumber_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PelobufInfo_fields &PelobufInfo_msg
#define PlatformRequest_fields &PlatformRequest_msg
#define PlatformResponse_fields &PlatformResponse_msg
#define VersionInfoRequest_fields &VersionInfoRequest_msg
#define VersionInfoResponse_fields &VersionInfoResponse_msg
#define VersionInfoResponse_VersionItem_fields &VersionInfoResponse_VersionItem_msg
#define SerialNumberListRequest_fields &SerialNumberListRequest_msg
#define SerialNumberListResponse_fields &SerialNumberListResponse_msg
#define SerialNumberListResponse_SerialNumber_fields &SerialNumberListResponse_SerialNumber_msg

/* Maximum encoded size of messages (where known) */
#define PelobufInfo_size                         175
#define PlatformRequest_size                     0
#define PlatformResponse_size                    4
#define SerialNumberListRequest_size             2
#define SerialNumberListResponse_SerialNumber_size 24
#define SerialNumberListResponse_size            104
#define VersionInfoRequest_size                  2
#define VersionInfoResponse_VersionItem_size     41
#define VersionInfoResponse_size                 172

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
