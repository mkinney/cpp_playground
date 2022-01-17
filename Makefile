messages.o:
	g++ -c messages.cpp

main: main.cpp messages.o
	g++ -o main messages.o main.cpp

test: test_messages.cpp
	g++ test_messages.cpp -o test_messages
	./test_messages

clean:
	rm *.o test_messages main
