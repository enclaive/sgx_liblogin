#ifndef ENCLAVE_U_H__
#define ENCLAVE_U_H__

#include <stdint.h>
#include <wchar.h>
#include <stddef.h>
#include <string.h>
#include "sgx_edger8r.h" /* for sgx_status_t etc. */


#define SGX_CAST(type, item) ((type)(item))

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _user
#define _user
typedef struct user {
	char* username;
	char* password;
} user;
#endif


sgx_status_t ecall_add_user(sgx_enclave_id_t eid, struct user* t);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif