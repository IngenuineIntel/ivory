// leave_no_trace.c
// Copyright (c) 2024 Roan Rothrock

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include "leave_no_trace.h"

void leave_no_trace()
{
  // TODO:
  
  FILE *fd = fopen(PROGFILE, "w");

  int ret;

  for(int i = 0; i < SHRED_NR_PASSES; i++)
  {
    for(int j = 0; (unsigned long)j < SHRED_SPACE; j++)
    {
      ret = rand();
      fwrite(&ret, 1, sizeof(int), fd);
    }
  }

  unlink(PROGFILE);
  exit(0);
}
