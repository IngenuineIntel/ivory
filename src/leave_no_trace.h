//leave_no_trace.h
// Copyright (c) Roan Rothrock

// For this program, being malware and all, has a slight obligation
// to exude an idea of stealth. For that reason, upon exit (due to
// error or completetion, depending) this program will shred it's
// executable file and then unlink it. It won't do too much shreding
// (I'll be testing on an SSD and that'd be quite unhealthy for it)
// but just enough to make the true data difficult/impossible to
// recover in its entirety.

#ifndef __LEAVE_NO_TRACE_H
#define __LEAVE_NO_TRACE_H

// number of passes while shredding
#define SHRED_NR_PASSES 2

// amount of space to shred (better than actually calculating IMO)
// 512 KB
#define SHRED_SPACE 1024 * 512 / sizeof(int)

static char *PROGFILE;

void leave_no_trace();

#endif /* __LEAVE_NO_TRACE_H */