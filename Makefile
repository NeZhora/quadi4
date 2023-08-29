CC = g++
CFLAGS = -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE

all: main

main: main.o solver.o test.o compares.o output.o 
	$(CC) main.o solver.o test.o compares.o output.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

solver.o: solver.cpp
	$(CC) $(CFLAGS) solver.cpp

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp

compares.o: compares.cpp
	$(CC) $(CFLAGS) compares.cpp

output.o: output.cpp
	$(CC) $(CFLAGS) output.cpp

clean:
	rm -rf *.o main