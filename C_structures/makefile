
ALL: BUILD RUN CLEAN

LINUX_TEST:
	gcc ./Test/test.c -o test -I ./
	./test

LINUX_BENCHMARK:
	gcc ./Benchmark/benchmark.c -o benchmark -I ./
	./benchmark

WIN_TEST:
	cl ./Test/test.c /Fe test /Zi -I ../
	test.exe

WIN_BENCHMARK:
	cl ./Benchmark/benchmark.c/Fe benchmark /Zi -I ../
	benchmark.exe
	
BUILD:
	cl main.c /Fe main /Zi -I ../

LINUX_BUILD:
	gcc main.c -o main -I ./

RUN:
	./main
	
WIN_CLEAN:
	del test.obj
	del benchmark.obj
	del test.exe
	del benchmark.exe

LINUX_CLEAN:
	rm test
	rm benchmark

install:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."


uninstall:
	ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
