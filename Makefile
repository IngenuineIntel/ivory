#!/usr/bin/make

# config
strip_executable = false
force_static     = false

# config for 'production'
#strip_executable = true
#force_static     = true

all: ivory

ivory: objects
	gcc  src/main.c -o objects/main.o
# TODO add all others

ifeq ($(force_static), true)
	gcc objects/* -o ivory -static
else
	gcc objects/* -o ivory
endif

ifeq ($(strip_executable), true)
	strip ivory

objects:
	mkdir objects

