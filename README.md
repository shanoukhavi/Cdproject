# Compiler Design Project using LALR Parser

## Overview

This project develops a simple compiler using an LALR parser for a custom mini-language. The language supports various data types, control structures, and allows basic operations.

## Features

- **Data Types:** The language supports integers (`INTEGER`), real numbers (`REAL`), and strings (`STRING`).
- **Operations:** Allows arithmetic operations and variable assignments.
- **Control Structures:** Features a FOR loop for repetitive execution of statements.

## Sample Program

```plaintext
BEGIN
PRINT "HELLO"
INTEGER A, B, C
REAL D, E
STRING X, Y
A := 2
B := 4
C := 6
D := -3.65E-8
E := 4.567
X := "text1"
Y := "hello there"
FOR I:=1 TO 5
PRINT "Strings are [X] and [Y]"
END

## Building the Compiler

To build the compiler for this language, follow these steps:

1. **Define the Grammar:** Write a context-free grammar (CFG) suitable for an LALR parser.
2. **Generate Parser:** Use a parser generator that supports LALR, like Bison or ANTLR, to create the parser.
3. **Implement Actions:** Define actions for each grammar rule to handle the semantics of the language.

## Running the Compiler

- Compile the compiler code using a suitable C/C++ compiler.
- Run the compiler executable with the path to the source code written in the mini-language.

## Dependencies

- Bison (for parser generation)
- GCC (for compiling the compiler)

## Contributing

Feel free to fork the repository and submit pull requests with improvements or bug fixes.

## License

Specify the license under which the project is released.

