#include <stdint.h>




/* Public interface for coredump mgmt */
typedef enum {
    COREDUMP_STATUS_SUCCESS,
    COREDUMP_STATUS_FAIL
} coredump_status_t;

typedef enum {
    COREDUMP_APPTYPE_UNKNOWN,
    COREDUMP_APPTYPE_PRIMARY,
    COREDUMP_APPTYPE_MAINTENANCE
} coredump_apptype_t;

typedef struct coredump_info {
    uint16_t id;
    uint16_t size;
    coredump_apptype_t appType;
} coredump_info_t;

typedef struct coredump_mgmt {
    uint16_t lastId;
    uint16_t avil;
    coredump_info_t idList[];
} coredump_mgmt_t;

typedef struct coredump_mgmt_file {
    uint16_t dumpCnt;
    uint16_t nxtWrIdx;
    uint16_t dumpArrSize;
    uint16_t idList[];
} coredump_mgmt_file_t;


/* Allocate and initialize resources needed for coredump mgmt.
 * Must be called before using coredump_mgmt functions. */
coredump_status_t coredump_initialize(); 

/* Deallocate coredump */ 
coredump_status_t coredump_terminate();



