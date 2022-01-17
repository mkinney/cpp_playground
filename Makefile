main: main.cpp messages.o
	g++ -o main messages.o main.cpp

messages.o: messages.cpp messages.hpp
	g++ -c messages.cpp

test: test_messages.cpp messages.o
	g++ test_messages.cpp -o test_messages messages.o
	./test_messages

clean:
	rm *.o test_messages main
