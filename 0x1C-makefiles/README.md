A Makefile is a simple way to organize code compilation. It consists of rules that describe how the source code files depend on each other and how they should be compiled. Below is a basic example of a Makefile for a C++ program. You can customize it based on your project structure and requirements.

```make
# Makefile for a C++ program

# Compiler
CXX := g++
# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra -pedantic

# Source files
SRCS := main.cpp file1.cpp file2.cpp
# Object files
OBJS := $(SRCS:.cpp=.o)
# Executable name
TARGET := myprogram

# Default target
all: $(TARGET)

# Linking the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compiling source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)
```

In this example:
- `CXX` is the compiler.
- `CXXFLAGS` are the compiler flags.
- `SRCS` is a list of source files.
- `OBJS` is a list of object files derived from source files.
- `TARGET` is the name of the executable.

The default target is set to build the executable (`$(TARGET)`) by linking the object files (`$(OBJS)`). The rule to build each object file from the corresponding source file is also defined.

To use this Makefile, create a file named `Makefile` in your project directory and copy the content into it. Replace `main.cpp`, `file1.cpp`, and `file2.cpp` with your actual source files. To build the program, run the `make` command in the terminal.

You can customize this Makefile based on your project structure, language, and compiler options.