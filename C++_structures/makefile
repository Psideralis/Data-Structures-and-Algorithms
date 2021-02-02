
ALL: BUILD RUN CLEAN

LINUX:
	g++ ./Test/test.c -o test -I ./
	g++ ./Benchmark/benchmark.c -o benchmark -I ./
	./test
	./benchmark

WIN:
	cl ./Test/test.c /Fe test /Zi -I ../
	cl ./Benchmark/benchmark.c/Fe benchmark /Zi -I ../
	test.exe
	benchmark.exe
	
BUILD:
	cl ./Test/test.c /Fe test /Zi -I ../
	cl ./Benchmark/benchmark.c/Fe benchmark /Zi -I ../

LINUX_BUILD:
	g++ ./Test/test.c -o test -I ./
	g++ ./Benchmark/benchmark.c -o benchmark -I ./

RUN:
	test.exe
	benchmark.exe

LINUX_RUN:
	./test
	./benchmark

CLEAN:
	del test.obj
	del benchmark.obj

LINUX_CLEAN:
	rm test
	rm benchmark