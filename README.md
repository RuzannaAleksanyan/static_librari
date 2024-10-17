# Static Library Example: Math Library
## This project demonstrates how to create and use a static library in C++ that performs basic mathematical operations like addition, subtraction, divide and multiply. The library can be built and used on both Linux/macOS and Windows platforms.

## Project Structure

```
.
├── include
│   └── math.hpp        # Header file containing function declarations
├── src
│   └── math.cpp      # Source file containing function definitions
├── lib
│   └── libmath.a     # Static library (generated after building)
└── main.cpp          # Example program to use the static library
```

### Files:

- **`include/math.hpp`**: Contains function declarations for `add` and `subtract`.
- **`src/math.cpp`**: Implements the functions declared in `math.h`.
- **`lib/libmath.a`**: The static library that will be created from `math.o` (object file).
- **`main.cpp`**: A sample program that demonstrates how to link and use the static library.

## How to Build the Project

### On Linux/macOS

1. **Compile the library source file** (`math.cpp`) to an object file:
   ```bash
   g++ -c src/math.cpp -o src/math.o
   ```

2. **Create the static library** (`libmath.a`):
   ```bash
   ar rcs lib/libmath.a src/math.o
   ```

3. **Compile the main program** and link it with the static library:
   ```bash
   g++ main.cpp -I./include -L./lib -lmath -o main
   ```

   Explanation:
   - `-I./include`: Tells the compiler where to find the `math.h` header file.
   - `-L./lib`: Tells the linker where to find the `libmath.a` library.
   - `-lmath`: Links the program to the `libmath.a` static library (without the `lib` prefix and `.a` suffix).

4. **Run the program**:
   ```bash
   ./main
   ```### On Windows (Using Visual Studio)

1. **Create the Static Library**:
   - Open Visual Studio.
   - Create a new **Static Library** project.
   - Add the `math.cpp` and `math.h` files to the project.
   - Build the project to generate the `.lib` file (e.g., `math.lib`).

2. **Create a Console Application**:
   - Create a new **Console Application** project.
   - Add `main.cpp` to the project.
   - Link the project with the `math.lib` file.
   - To do this:
     1. Right-click the Console Application project in Solution Explorer and go to **Properties**.
     2. Under **Configuration Properties > VC++ Directories**, add the path to the static library in **Library Directories**.
     3. Under **Linker > Input**, add `math.lib` to the **Additional Dependencies**.
   - Build and run the project.

## How Static Libraries Work

A **static library** is a collection of pre-compiled object files that can be linked into other programs. Unlike dynamic libraries (such as `.dll` or `.so`), static libraries are linked at compile time, and their code becomes part of the final executable.

- **Advantages**:
  - Faster execution because no dynamic linking happens at runtime.
  - No need to distribute separate library files (like `.dll` or `.so`).

- **Disadvantages**:
  - The final executable size is larger because the library code is included in it.
  - Updating the library requires recompiling programs that use it.

# static_librari
