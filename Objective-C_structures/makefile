
ALL: BUILD CLEAN

OBJPP: BUILDPP CLEAN

BUILD:
	gcc `gnustep-config --objc-flags` -L/usr/include/GNUstep $(file).m -o $(file)

BUILDPP:
	gcc `gnustep-config --objc-flags` -L/usr/include/GNUstep $(file).mm -o $(file)

RUN:
	./$(file)

CLEAN:
	rm $(file).d