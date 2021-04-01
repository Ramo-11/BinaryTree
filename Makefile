main: main.o BinaryTree.o Node.o
	g++ -g main.o BinaryTree.o Node.o -o main

main.o: main.cpp 
	g++ -g -c main.cpp

BinaryTree.o: BinaryTree.h BinaryTree.cpp
	g++ -g -c BinaryTree.cpp	

Node.o: Node.h Node.cpp
	g++ -g -c Node.cpp	

run:
	./main

clean:
	rm *.o
	rm main