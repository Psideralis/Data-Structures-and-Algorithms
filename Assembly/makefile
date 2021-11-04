
ALL: BUILD 

BUILD:	
ifeq ($(assembler),AS)
	 gcc -I $(include) -o $(object) $(architecture) $(file) $()
else ifeq ($(assembler),NASM)
	nasm -i $(include) -o $(object) $(architecture) -felf64 $(file) 
    nasm -i $(include) -o $(object) $(architecture) -fmacho64 $(file)
    nasm -i $(include) -o $(object) $(architecture) -fwin64 $(file)
    nasm -i $(include) -o $(object) $(architecture) -bin $(file)
else ifeq ($(assembler),MASM)
	ML /I $(include) /Fo $(object) $(architecture) $(file)
    ML64 /I $(include) /Fo $(object) $(architecture) $(file)
else
	echo "NO ASSEMBLER."
endif

default:	
