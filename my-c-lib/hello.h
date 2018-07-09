#pragma once

#include <stdio.h>

#ifdef SAY_HELLO_TO_WORLD
static inline void sayHello() { printf("Hello, world!\n"); }
#else
static inline void sayHello() { printf("Hello, there!\n"); }
#endif
