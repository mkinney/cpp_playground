# cpp compiler flags
CPP_FLAGS = -std=c++11 -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs -Woverloaded-virtual -Wredundant-decls -Wshadow -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused -Wignored-qualifiers

HPP_FILES=messages.hpp util.hpp melody.hpp
CPP_FILES=messages.cpp util.cpp melody.cpp main.cpp

.PHONY: main test doc cppclean lizard check lint metrix clean all

main: main.cpp messages.o util.o melody.o
	g++ $(CPP_FLAGS) -o main messages.o util.o melody.o main.cpp

messages.o: messages.cpp messages.hpp
	g++ $(CPP_FLAGS) -c messages.cpp

util.o: util.cpp util.hpp
	g++ $(CPP_FLAGS) -c util.cpp

melody.o: melody.cpp melody.hpp
	g++ $(CPP_FLAGS) -c melody.cpp

test: test_messages.cpp test_util.cpp test_melody.cpp messages.o util.o melody.o
	g++ $(CPP_FLAGS) test_messages.cpp -o test_messages messages.o
	g++ $(CPP_FLAGS) test_util.cpp -o test_util util.o
	g++ $(CPP_FLAGS) test_melody.cpp -o test_melody util.o melody.o
	@echo "Running unit tests"
	./test_messages
	./test_util
	./test_melody

doc:
	doxygen
	open html/index.html

cppclean:
	@echo "Running cppclean"
	cppclean $(CPP_FILES) $(HPP_FILES)

lizard:
	@echo "Running lizard"
	lizard $(CPP_FILES)

check:
	@echo "Running cppcheck"
	cppcheck --enable=all --suppress=missingIncludeSystem $(CPP_FILES) $(HPP_FILES)

lint:
	@echo "Running cpplint"
	cpplint *.cpp *.hpp

metrix:
	@echo "Running metrix++"
	metrix++ collect --std.code.lines.code --std.code.complexity.cyclomatic -- messages.cpp
	metrix++ view --db-file=metrixpp.db
	metrix++ limit --db-file=metrixpp.db --max-limit=std.code.complexity:cyclomatic:15 --hotspots=3

clean:
	rm *.o test_messages test_melody main || true

all: clean check cppclean lint lizard metrix main test
