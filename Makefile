CPP_FLAGS = -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs -Woverloaded-virtual -Wredundant-decls -Wshadow -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused -Wignored-qualifiers

SRC_FILES=messages.cpp messages.hpp main.cpp

.PHONY: main test doc cppclean check lint clean all

main: main.cpp messages.o
	g++ $(CPP_FLAGS) -o main messages.o main.cpp

messages.o: messages.cpp messages.hpp
	g++ $(CPP_FLAGS) -c messages.cpp

test: test_messages.cpp messages.o
	g++ $(CPP_FLAGS) test_messages.cpp -o test_messages messages.o
	@echo "Running unit tests"
	./test_messages

doc:
	doxygen
	open html/index.html

cppclean:
	@echo "Running cppclean"
	cppclean $(SRC_FILES)

check:
	@echo "Running cppcheck"
	cppcheck --enable=all --suppress=missingIncludeSystem $(SRC_FILES)

lint:
	@echo "Running cpplint"
	cpplint *.cpp *.hpp

clean:
	rm *.o test_messages main || true

all: clean check cppclean lint main test
