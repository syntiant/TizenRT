/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TEST2RPCBASEDS_H_RPCGEN
#define _TEST2RPCBASEDS_H_RPCGEN

#include "rpc_struct.h"

#include "Test2RPCBaseDS_data.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <RPCBaseDS.h>

/* the xdr functions */
extern  bool_t xdr_TEST2_RPC_INSTANCE(XDR *, TEST2_RPC_INSTANCE *);
extern  bool_t xdr_TEST2_RPCRES_INIT(XDR *, TEST2_RPCRES_INIT *);
extern  bool_t xdr_TEST2_RPC_MIC_DATA(XDR *, TEST2_RPC_MIC_DATA *);
extern  bool_t xdr_TEST2_RPC_STREAMING_RESULT(XDR *, TEST2_RPC_STREAMING_RESULT *);
extern  bool_t xdr_TEST2_RPCRES_STREAMING_PROCESS(XDR *, TEST2_RPCRES_STREAMING_PROCESS *);
extern  bool_t xdr_TEST2_RPC_RECOGNIZER_INSTANCE(XDR *, TEST2_RPC_RECOGNIZER_INSTANCE *);
extern  bool_t xdr_TEST2_RPC_RECOGNIZER_RESULT(XDR *, TEST2_RPC_RECOGNIZER_RESULT *);
extern  bool_t xdr_TEST2_RPCRES_RECOGNIZER_PROCESS(XDR *, TEST2_RPCRES_RECOGNIZER_PROCESS *);
extern  bool_t xdr_TEST2_RPC_ERROR_STATE(XDR *, TEST2_RPC_ERROR_STATE *);

#ifdef __cplusplus
}
#endif

#endif /* !_TEST2RPCBASEDS_H_RPCGEN */