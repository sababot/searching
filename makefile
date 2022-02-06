searching: build/main.o build/linear.o build/binary.o build/jump.o
	g++ build/main.o build/linear.o build/binary.o build/jump.o -o searching

build/main.o: main.cpp
	g++ -c main.cpp -o build/main.o

build/binary.o: binary/binary.cpp binary/binary.h
	g++ -c binary/binary.cpp -o build/binary.o

build/linear.o: linear/linear.cpp linear/linear.h
	g++ -c linear/linear.cpp -o build/linear.o

build/jump.o: jump/jump.cpp jump/jump.h
	g++ -c jump/jump.cpp -o build/jump.o

clean:
	rm searching build/*.o
