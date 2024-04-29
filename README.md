# Compiler Design Project using LALR Parser

## Overview

This project develops a simple compiler using an LALR parser for a custom mini-language. The language supports various data types, control structures, and allows basic operations

## Features

- **Data Types:** The language supports integers (`INTEGER`), real numbers (`REAL`),float numbers (`FLOAT`) and strings (`STRING`).
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



