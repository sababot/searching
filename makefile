searching: build/main.o build/linear.o build/binary.o
	g++ build/main.o build/linear.o build/binary.o -o searching

build/main.o: main.cpp
	g++ -c main.cpp -o build/main.o

build/binary.o: binary/binary.cpp binary/binary.h
	g++ -c binary/binary.cpp -o build/binary.o

build/linear.o: linear/linear.cpp linear/linear.h
	g++ -c linear/linear.cpp -o build/linear.o

clean:
	rm searching build/*.o
