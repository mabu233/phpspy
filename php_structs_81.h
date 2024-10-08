#ifndef __php_structs_81_h
#define __php_structs_81_h

#include <stdint.h>

typedef struct _zend_executor_globals_81 zend_executor_globals_81;
typedef struct _zend_execute_data_81     zend_execute_data_81;
typedef struct _zend_op_array_81         zend_op_array_81;
typedef union  _zend_function_81         zend_function_81;
typedef struct _zend_class_entry_81      zend_class_entry_81;
typedef struct _zend_string_81           zend_string_81;
typedef struct _zend_op_81               zend_op_81;
typedef struct _sapi_request_info_81     sapi_request_info_81;
typedef struct _sapi_globals_struct_81   sapi_globals_struct_81;
typedef union  _zend_value_81            zend_value_81;
typedef struct _zval_81                  zval_81;
typedef struct _Bucket_81                Bucket_81;
typedef struct _zend_array_81            zend_array_81;
typedef struct _zend_alloc_globals_81    zend_alloc_globals_81;
typedef struct _zend_mm_heap_81          zend_mm_heap_81;

#ifdef PHPSPY_WIN32
#pragma pack(push, 1)
#endif

/* Assumes 8-byte pointers */
                                                    /* offset   length */
struct PHPSPY_PACK _zend_array_81 {
    uint8_t                 pad0[12];               /* 0        +12 */
    uint32_t                nTableMask;             /* 12       +4 */
    Bucket_81               *arData;                /* 16       +8 */
    uint32_t                nNumUsed;               /* 24       +4 */
    uint32_t                nNumOfElements;         /* 28       +4 */
    uint32_t                nTableSize;             /* 32       +4 */
};

struct PHPSPY_PACK _zend_executor_globals_81 {
    uint8_t                 pad0[304];              /* 0        +304 */
    zend_array_81           symbol_table;           /* 304      +36 */
    uint8_t                 pad1[148];              /* 340      +148 */
    zend_execute_data_81    *current_execute_data;  /* 488      +8 */
};

struct PHPSPY_PACK _zend_execute_data_81 {
    zend_op_81              *opline;                /* 0        +8 */
    uint8_t                 pad0[16];               /* 8        +16 */
    zend_function_81        *func;                  /* 24       +8 */
    uint8_t                 pad1[16];               /* 32       +16 */
    zend_execute_data_81    *prev_execute_data;     /* 48       +8 */
    zend_array_81           *symbol_table;          /* 56       +8 */
};

struct PHPSPY_PACK _zend_op_array_81 {
    uint8_t                 pad0[60];               /* 0        +60 */
    int                     last_var;               /* 60       +4 */
    uint8_t                 pad1[40];               /* 64       +40 */
    zend_string_81          **vars;                 /* 104      +8 */
    uint8_t                 pad2[32];               /* 112      +32 */
    zend_string_81          *filename;              /* 144      +8 */
    uint32_t                line_start;             /* 152      +4 */
};

union PHPSPY_PACK _zend_function_81 {
    uint8_t                 type;                   /* 0        +1 */
    struct {
        uint8_t             pad0[8];                /* 0        +8 */
        zend_string_81      *function_name;         /* 8        +8 */
        zend_class_entry_81 *scope;                 /* 16       +8 */
    } common;
    zend_op_array_81        op_array;               /* 0        +240 */
};

struct PHPSPY_PACK _zend_class_entry_81 {
    uint8_t                 pad0[8];                /* 0        +8 */
    zend_string_81          *name;                  /* 8        +8 */
};

struct PHPSPY_PACK _zend_string_81 {
    uint8_t                 pad0[16];               /* 0        +16 */
    size_t                  len;                    /* 16       +8 */
    char                    val[1];                 /* 24       +1 */
};

struct PHPSPY_PACK _zend_op_81 {
    uint8_t                 pad0[24];               /* 0        +24 */
    uint32_t                lineno;                 /* 24       +4 */
};

struct PHPSPY_PACK _sapi_request_info_81 {
    uint8_t                 pad0[8];                /* 0        +8 */
    char                    *query_string;          /* 8        +8 */
    char                    *cookie_data;           /* 16       +8 */
    uint8_t                 pad1[8];                /* 24       +8 */
    char                    *path_translated;       /* 32       +8 */
    char                    *request_uri;           /* 40       +8 */
};

struct PHPSPY_PACK _sapi_globals_struct_81 {
    uint8_t                 pad0[8];                /* 0        +8 */
    sapi_request_info_81    request_info;           /* 8        +48 */
    uint8_t                 pad1[384];              /* 56       +384 */
    double                  global_request_time;    /* 440      +8 */
};

union PHPSPY_PACK _zend_value_81 {
    long                    lval;                   /* 0        +8 */
    double                  dval;                   /* 0        +8 */
    zend_string_81          *str;                   /* 0        +8 */
    zend_array_81           *arr;                   /* 0        +8 */
};

struct PHPSPY_PACK _zval_81 {
    zend_value_81           value;                  /* 0        +8 */
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

struct PHPSPY_PACK _Bucket_81 {
    zval_81                 val;                    /* 0        +16 */
    uint64_t                h;                      /* 16       +8 */
    zend_string_81          *key;                   /* 24       +8 */
};

struct PHPSPY_PACK _zend_alloc_globals_81 {
    zend_mm_heap_81         *mm_heap;               /* 0        +8 */
};

struct PHPSPY_PACK _zend_mm_heap_81 {
    uint8_t                 pad0[16];               /* 0        +16 */
    size_t                  size;                   /* 16       +8 */
    size_t                  peak;                   /* 24       +8 */
};

#ifdef PHPSPY_WIN32
#pragma pack(pop)
#endif

#endif
