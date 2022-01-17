messages.o:
	g++ -c messages.cpp

main: main.cpp messages.o
	g++ -o main messages.o main.cpp

test:
	g++ test_messages.cpp -o test_messages

clean:
	rm *.o test_messages main
