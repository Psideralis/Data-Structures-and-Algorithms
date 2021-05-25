
ALL: build 

test:	
ifeq ($(platform),LINUX)
	gcc ./Test/test.c -o test -I ./
else ifeq ($(platform),WINDOWS)
	cl ./Test/test.c /Fe test /Zi -I ../
else ifeq ($(platform),MAC)
	gcc ./Test/test.c -o test -I ./
else
	echo "NO PLATFORM."
endif

benchmark:
ifeq ($(platform),LINUX)
	gcc ./Benchmark/benchmark.c -o benchmark -I ./
else ifeq ($(platform),WINDOWS)
	cl ./Benchmark/benchmark.c/Fe benchmark /Zi -I ../
else ifeq ($(platform),MAC)
	gcc ./Benchmark/benchmark.c -o benchmark -I ./
else
	echo "NO PLATFORM."	
endif

build:
ifeq ($(platform),LINUX)
	gcc main.c -o main -I ./
else ifeq ($(platform),WINDOWS)
	cl main.c /Fe main /Zi -I ../
else ifeq ($(platform),MAC)
	gcc main.c -o main -I ./
else
	echo "NO PLATFORM."	
endif

install:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
endif


uninstall:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
endif
