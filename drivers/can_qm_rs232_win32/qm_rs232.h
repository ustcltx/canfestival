#ifndef __QM_RS232__
#define __QM_RS232__

#include "applicfg.h"

typedef struct {
	UNS8 len;
	UNS8 data[16];
} QM_Message;

#endif
