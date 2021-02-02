#include "PsideralisDataStructures.h"

#if LINUX
    #include <linux/module.h>
    #include <linux/kernel.h>
    #include <linux/init.h>
    #include <linux/sched.h>
    #include <sys/syscall.h>
#elif WINDOWS
    #include "windows.h"
#elif MACOS
    #import "mach.h"
    #import "Foundation/Foundation.h"
    #import "Cocoa/Cocoa.h"
#endif

#ifndef STDC
#define STDC
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "time.h"
#endif

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
