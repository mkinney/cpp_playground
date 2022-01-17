CPP_FLAGS = -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs -Woverloaded-virtual -Wredundant-decls -Wshadow -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused -Wignored-qualifiers

main: main.cpp messages.o
	g++ $(CPP_FLAGS) -o main messages.o main.cpp

messages.o: messages.cpp messages.hpp
	g++ $(CPP_FLAGS) -c messages.cpp

test: test_messages.cpp messages.o
	g++ $(CPP_FLAGS) test_messages.cpp -o test_messages messages.o
	./test_messages

clean:
	rm *.o test_messages main
