
ALL: BUILD RUN CLEAN

LINUX:
	g++ test.cpp -o test -I ../
	./test

BUILD:
	cl test.cpp /Fe test /Zi -I ../

LINUX_BUILD:
	g++ test.cpp -o test -I ../

RUN:
	test.exe

LINUX_RUN:
	./test

CLEAN:
	del test.obj

LINUX_CLEAN:
	rm test