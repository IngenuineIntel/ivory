// environment.c
// Copyright (c) 2024 Roan Rothrock

#include "environment.h"

#include<unistd.h>

#include "leave_no_trace.h"

void assert_euid(void)
{
  if(geteuid() != 0)
  {
    leave_no_trace();
  }
}

void assert_freedesktokp_install(void)
{
  // TODO
}

void assert_keyrings(void)
{
  // TODO
}

**char get_keyrings(void)
{
  // TODO
}
