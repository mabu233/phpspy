#ifndef __php_structs_70_h
#define __php_structs_70_h

#include <stdint.h>

typedef struct _zend_executor_globals_70 zend_executor_globals_70;
typedef struct _zend_execute_data_70     zend_execute_data_70;
typedef struct _zend_op_array_70         zend_op_array_70;
typedef union  _zend_function_70         zend_function_70;
typedef struct _zend_class_entry_70      zend_class_entry_70;
typedef struct _zend_string_70           zend_string_70;
typedef struct _zend_op_70               zend_op_70;
typedef struct _sapi_request_info_70     sapi_request_info_70;
typedef struct _sapi_globals_struct_70   sapi_globals_struct_70;
typedef union  _zend_value_70            zend_value_70;
typedef struct _zval_70                  zval_70;
typedef struct _Bucket_70                Bucket_70;
typedef struct _zend_array_70            zend_array_70;
typedef struct _zend_alloc_globals_70    zend_alloc_globals_70;
typedef struct _zend_mm_heap_70          zend_mm_heap_70;

#ifdef PHPSPY_WIN32
#pragma pack(push, 1)
#endif

/* Assumes 8-byte pointers */
                                                    /* offset   length */
struct PHPSPY_PACK _zend_array_70 {
    uint8_t                 pad0[12];               /* 0        +12 */
    uint32_t                nTableMask;             /* 12       +4 */
    Bucket_70               *arData;                /* 16       +8 */
    uint32_t                nNumUsed;               /* 24       +4 */
    uint32_t                nNumOfElements;         /* 28       +4 */
    uint32_t                nTableSize;             /* 32       +4 */
};

struct PHPSPY_PACK _zend_executor_globals_70 {
    uint8_t                 pad0[304];              /* 0        +304 */
    zend_array_70           symbol_table;           /* 304      +36 */
    uint8_t                 pad1[140];              /* 340      +140 */
    zend_execute_data_70    *current_execute_data;  /* 480      +8 */
};

struct PHPSPY_PACK _zend_execute_data_70 {
    zend_op_70              *opline;                /* 0        +8 */
    uint8_t                 pad0[16];               /* 8        +16 */
    zend_function_70        *func;                  /* 24       +8 */
    uint8_t                 pad1[24];               /* 32       +24 */
    zend_execute_data_70    *prev_execute_data;     /* 56       +8 */
    zend_array_70           *symbol_table;          /* 64       +8 */
};

struct PHPSPY_PACK _zend_op_array_70 {
    uint8_t                 pad0[72];               /* 0        +72 */
    int                     last_var;               /* 72       +4 */
    uint8_t                 pad1[4];                /* 76       +4 */
    zend_string_70          **vars;                 /* 80       +8 */
    uint8_t                 pad2[32];               /* 88       +32 */
    zend_string_70          *filename;              /* 120      +8 */
    uint32_t                line_start;             /* 128      +4 */
};

union PHPSPY_PACK _zend_function_70 {
    uint8_t                 type;                   /* 0        +1 */
    struct {
        uint8_t             pad0[8];                /* 0        +8 */
        zend_string_70      *function_name;         /* 8        +8 */
        zend_class_entry_70 *scope;                 /* 16       +8 */
    } common;
    zend_op_array_70        op_array;               /* 0        +208 */
};

struct PHPSPY_PACK _zend_class_entry_70 {
    uint8_t                 pad0[8];                /* 0        +8 */
    zend_string_70          *name;                  /* 8        +8 */
};

struct PHPSPY_PACK _zend_string_70 {
    uint8_t                 pad0[16];               /* 0        +16 */
    size_t                  len;                    /* 16       +8 */
    char                    val[1];                 /* 24       +1 */
};

struct PHPSPY_PACK _zend_op_70 {
    uint8_t                 pad0[24];               /* 0        +24 */
    uint32_t                lineno;                 /* 24       +4 */
};

struct PHPSPY_PACK _sapi_request_info_70 {
    uint8_t                 pad0[8];                /* 0        +8 */
    char                    *query_string;          /* 8        +8 */
    char                    *cookie_data;           /* 16       +8 */
    uint8_t                 pad1[8];                /* 24       +8 */
    char                    *path_translated;       /* 32       +8 */
    char                    *request_uri;           /* 40       +8 */
};

struct PHPSPY_PACK _sapi_globals_struct_70 {
    uint8_t                 pad0[8];                /* 0        +8 */
    sapi_request_info_70    request_info;           /* 8        +48 */
    uint8_t                 pad1[384];              /* 56       +384 */
    double                  global_request_time;    /* 440      +8 */
};

union PHPSPY_PACK _zend_value_70 {
    long                    lval;                   /* 0        +8 */
    double                  dval;                   /* 0        +8 */
    zend_string_70          *str;                   /* 0        +8 */
    zend_array_70           *arr;                   /* 0        +8 */
};

struct PHPSPY_PACK _zval_70 {
    zend_value_70           value;                  /* 0        +8 */
    union {
        struct {
            uint8_t         type;                   /* 8        +1 */
            uint8_t         pad0[3];                /* 9        +3 */
        } v;
    } u1;
    union {
        uint32_t next;                              /* 12       +4 */
    } u2;
};

struct PHPSPY_PACK _Bucket_70 {
    zval_70                 val;                    /* 0        +16 */
    uint64_t                h;                      /* 16       +8 */
    zend_string_70          *key;                   /* 24       +8 */
};

struct PHPSPY_PACK _zend_alloc_globals_70 {
    zend_mm_heap_70         *mm_heap;               /* 0        +8 */
};

struct PHPSPY_PACK _zend_mm_heap_70 {
    uint8_t                 pad0[16];               /* 0        +16 */
    size_t                  size;                   /* 16       +8 */
    size_t                  peak;                   /* 24       +8 */
};

#ifdef PHPSPY_WIN32
#pragma pack(pop)
#endif

#endif
