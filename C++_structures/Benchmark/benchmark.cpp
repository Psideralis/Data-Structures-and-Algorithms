#include "PsideralisDataStructures.hpp"

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

#ifndef STDCPP
#define STDCPP
	#include <chrono>
    #include <fstream>
    #include <iostream>
    #include <string>
    using namespace chrono;
    using namespace std;
#endif

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
