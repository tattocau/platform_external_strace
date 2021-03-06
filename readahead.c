#include "defs.h"

int
sys_readahead(struct tcb *tcp)
{
	if (entering(tcp)) {
		int argn;
		printfd(tcp, tcp->u_arg[0]);
		argn = printllval(tcp, ", %lld", 1);
		tprintf(", %ld", tcp->u_arg[argn]);
	}
	return 0;
}
