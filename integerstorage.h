/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INTEGERSTORAGE_H_RPCGEN
#define _INTEGERSTORAGE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct IntegerArray {
	int arr[8];
};
typedef struct IntegerArray IntegerArray;

#define INTEGER_STORAGE 0x56473856
#define INT_STORAGE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define APPEND 1
extern  void * append_1(IntegerArray *, CLIENT *);
extern  void * append_1_svc(IntegerArray *, struct svc_req *);
#define QUERY 2
extern  int * query_1(int *, CLIENT *);
extern  int * query_1_svc(int *, struct svc_req *);
#define REMOVE 3
extern  void * remove_1(int *, CLIENT *);
extern  void * remove_1_svc(int *, struct svc_req *);
extern int integer_storage_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define APPEND 1
extern  void * append_1();
extern  void * append_1_svc();
#define QUERY 2
extern  int * query_1();
extern  int * query_1_svc();
#define REMOVE 3
extern  void * remove_1();
extern  void * remove_1_svc();
extern int integer_storage_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_IntegerArray (XDR *, IntegerArray*);

#else /* K&R C */
extern bool_t xdr_IntegerArray ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTEGERSTORAGE_H_RPCGEN */
