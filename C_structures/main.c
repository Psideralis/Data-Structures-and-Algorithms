#if PSIDERALIS_C    
    #include "PsideralisDataStructures.h"
#endif

#if LINUX
    #include <linux/module.h>
    #include <linux/kernel.h>
    #include <linux/init.h>
    #include <linux/sched.h>
    #include <sys/syscall.h>
#elif WINDOWS
    #include "windows.h"
#elif MACOS
    #include "mach.h"
    #include "Foundation/Foundation.h"
    #include "Cocoa/Cocoa.h"
#endif

#include "Static/Set.h"

int main(int argc, char const *argv[])
{
    set_t mySet;
    set_t_zeroalloc(&mySet);
    return 0;
}
