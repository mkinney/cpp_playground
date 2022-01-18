CPP_FLAGS = -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs -Woverloaded-virtual -Wredundant-decls -Wshadow -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused -Wignored-qualifiers

HPP_FILES=messages.hpp
CPP_FILES=messages.cpp main.cpp

.PHONY: main test doc cppclean lizard check lint metrix clean all

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
	rm *.o test_messages main || true

all: clean check cppclean lint lizard metrix main test
