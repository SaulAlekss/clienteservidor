/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calcular.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static int *
_sumar_1 (sumar_1_argument *argp, struct svc_req *rqstp)
{
	return (sumar_1_svc(argp->a, argp->b, rqstp));
}

static int *
_restar_1 (restar_1_argument *argp, struct svc_req *rqstp)
{
	return (restar_1_svc(argp->a, argp->b, rqstp));
}

static int *
_multiplicar_1 (multiplicar_1_argument *argp, struct svc_req *rqstp)
{
	return (multiplicar_1_svc(argp->a, argp->b, rqstp));
}

static float *
_dividir_1 (dividir_1_argument *argp, struct svc_req *rqstp)
{
	return (dividir_1_svc(argp->a, argp->b, rqstp));
}

static float *
_areacircunferencia_1 (float  *argp, struct svc_req *rqstp)
{
	return (areacircunferencia_1_svc(*argp, rqstp));
}

static void
calcular_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		sumar_1_argument sumar_1_arg;
		restar_1_argument restar_1_arg;
		multiplicar_1_argument multiplicar_1_arg;
		dividir_1_argument dividir_1_arg;
		float areacircunferencia_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case sumar:
		_xdr_argument = (xdrproc_t) xdr_sumar_1_argument;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) _sumar_1;
		break;

	case restar:
		_xdr_argument = (xdrproc_t) xdr_restar_1_argument;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) _restar_1;
		break;

	case multiplicar:
		_xdr_argument = (xdrproc_t) xdr_multiplicar_1_argument;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) _multiplicar_1;
		break;

	case dividir:
		_xdr_argument = (xdrproc_t) xdr_dividir_1_argument;
		_xdr_result = (xdrproc_t) xdr_float;
		local = (char *(*)(char *, struct svc_req *)) _dividir_1;
		break;

	case areacircunferencia:
		_xdr_argument = (xdrproc_t) xdr_float;
		_xdr_result = (xdrproc_t) xdr_float;
		local = (char *(*)(char *, struct svc_req *)) _areacircunferencia_1;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (CALCULAR, UNO);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, CALCULAR, UNO, calcular_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (CALCULAR, UNO, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, CALCULAR, UNO, calcular_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (CALCULAR, UNO, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}
