/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PELOBUF_SETTINGS_PB_H_INCLUDED
#define PB_PELOBUF_SETTINGS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _EnterDFUModeRequest { /* #TODO need to send response and reset the system? */
    char dummy_field;
} EnterDFUModeRequest;

typedef struct _EnterDFUModeResponse { 
    char dummy_field;
} EnterDFUModeResponse;

typedef struct _TimeRequest_TimeData { 
    uint32_t year; 
    uint32_t month; 
    uint32_t day; 
    uint32_t hour; 
    uint32_t minute; 
    uint32_t second; 
    uint32_t millis; 
} TimeRequest_TimeData;

typedef struct _TimeRequest { 
    /* If this field is omitted, the current time will be returned */
    bool has_time_val;
    TimeRequest_TimeData time_val; 
} TimeRequest;

/* /////////////////////////
 CMD to enter in to DFU Mode
///////////////////////// */
typedef struct _TimeResponse { 
    TimeRequest_TimeData time_val; 
} TimeResponse;

/* /////////////////////////////////////
 PelobufSettings Message Container
///////////////////////////////////// */
typedef struct _PelobufSettings { 
    pb_size_t which_id;
    union {
        TimeRequest time_req;
        TimeResponse time_resp;
        EnterDFUModeRequest dfumode_req;
        EnterDFUModeResponse dfumode_resp;
    } id; 
} PelobufSettings;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PelobufSettings_init_default             {0, {TimeRequest_init_default}}
#define TimeRequest_init_default                 {false, TimeRequest_TimeData_init_default}
#define TimeRequest_TimeData_init_default        {0, 0, 0, 0, 0, 0, 0}
#define TimeResponse_init_default                {TimeRequest_TimeData_init_default}
#define EnterDFUModeRequest_init_default         {0}
#define EnterDFUModeResponse_init_default        {0}
#define PelobufSettings_init_zero                {0, {TimeRequest_init_zero}}
#define TimeRequest_init_zero                    {false, TimeRequest_TimeData_init_zero}
#define TimeRequest_TimeData_init_zero           {0, 0, 0, 0, 0, 0, 0}
#define TimeResponse_init_zero                   {TimeRequest_TimeData_init_zero}
#define EnterDFUModeRequest_init_zero            {0}
#define EnterDFUModeResponse_init_zero           {0}

/* Field tags (for use in manual encoding/decoding) */
#define TimeRequest_TimeData_year_tag            1
#define TimeRequest_TimeData_month_tag           2
#define TimeRequest_TimeData_day_tag             3
#define TimeRequest_TimeData_hour_tag            4
#define TimeRequest_TimeData_minute_tag          5
#define TimeRequest_TimeData_second_tag          6
#define TimeRequest_TimeData_millis_tag          7
#define TimeRequest_time_val_tag                 1
#define TimeResponse_time_val_tag                1
#define PelobufSettings_time_req_tag             2
#define PelobufSettings_time_resp_tag            3
#define PelobufSettings_dfumode_req_tag          4
#define PelobufSettings_dfumode_resp_tag         5

/* Struct field encoding specification for nanopb */
#define PelobufSettings_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,time_req,id.time_req),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,time_resp,id.time_resp),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,dfumode_req,id.dfumode_req),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (id,dfumode_resp,id.dfumode_resp),   5)
#define PelobufSettings_CALLBACK NULL
#define PelobufSettings_DEFAULT NULL
#define PelobufSettings_id_time_req_MSGTYPE TimeRequest
#define PelobufSettings_id_time_resp_MSGTYPE TimeResponse
#define PelobufSettings_id_dfumode_req_MSGTYPE EnterDFUModeRequest
#define PelobufSettings_id_dfumode_resp_MSGTYPE EnterDFUModeResponse

#define TimeRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  time_val,          1)
#define TimeRequest_CALLBACK NULL
#define TimeRequest_DEFAULT NULL
#define TimeRequest_time_val_MSGTYPE TimeRequest_TimeData

#define TimeRequest_TimeData_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   year,              1) \
X(a, STATIC,   REQUIRED, UINT32,   month,             2) \
X(a, STATIC,   REQUIRED, UINT32,   day,               3) \
X(a, STATIC,   REQUIRED, UINT32,   hour,              4) \
X(a, STATIC,   REQUIRED, UINT32,   minute,            5) \
X(a, STATIC,   REQUIRED, UINT32,   second,            6) \
X(a, STATIC,   REQUIRED, UINT32,   millis,            7)
#define TimeRequest_TimeData_CALLBACK NULL
#define TimeRequest_TimeData_DEFAULT NULL

#define TimeResponse_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, MESSAGE,  time_val,          1)
#define TimeResponse_CALLBACK NULL
#define TimeResponse_DEFAULT NULL
#define TimeResponse_time_val_MSGTYPE TimeRequest_TimeData

#define EnterDFUModeRequest_FIELDLIST(X, a) \

#define EnterDFUModeRequest_CALLBACK NULL
#define EnterDFUModeRequest_DEFAULT NULL

#define EnterDFUModeResponse_FIELDLIST(X, a) \

#define EnterDFUModeResponse_CALLBACK NULL
#define EnterDFUModeResponse_DEFAULT NULL

extern const pb_msgdesc_t PelobufSettings_msg;
extern const pb_msgdesc_t TimeRequest_msg;
extern const pb_msgdesc_t TimeRequest_TimeData_msg;
extern const pb_msgdesc_t TimeResponse_msg;
extern const pb_msgdesc_t EnterDFUModeRequest_msg;
extern const pb_msgdesc_t EnterDFUModeResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PelobufSettings_fields &PelobufSettings_msg
#define TimeRequest_fields &TimeRequest_msg
#define TimeRequest_TimeData_fields &TimeRequest_TimeData_msg
#define TimeResponse_fields &TimeResponse_msg
#define EnterDFUModeRequest_fields &EnterDFUModeRequest_msg
#define EnterDFUModeResponse_fields &EnterDFUModeResponse_msg

/* Maximum encoded size of messages (where known) */
#define EnterDFUModeRequest_size                 0
#define EnterDFUModeResponse_size                0
#define PelobufSettings_size                     46
#define TimeRequest_TimeData_size                42
#define TimeRequest_size                         44
#define TimeResponse_size                        44

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
