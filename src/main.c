// main.c
// Copyright (c) 2024 Roan Rothrock

#include "environment.h"
#include "leave_no_trace.h"

int main(int argc, char **argv)
{

  PROGFILE = argv[0];
  leave_no_trace();
}
