# cpp03

A C++ module focused on inheritance, polymorphism, and canonical class behavior across class hierarchies.

## Overview

This repository contains exercises that extend object-oriented programming skills by introducing relationships between classes and runtime behavior. Typical topics in this module include:

- Inheritance (base and derived classes)
- Method overriding
- Dynamic polymorphism with virtual functions
- Proper use of constructors/destructors in hierarchies
- Canonical class form in inherited classes

## Repository Structure

Exercises are usually organized by folders such as:

- `ex00/`
- `ex01/`
- `ex02/`
- `ex03/`
- `...`

Each exercise generally contains:

- `*.hpp` header files
- `*.cpp` implementation files
- `Makefile`

## Build

Build each exercise independently from its folder:

```bash
cd ex00
make
```

Common Makefile targets:

- `make` or `make all` — build the executable
- `make clean` — remove object files
- `make fclean` — remove object files and executable
- `make re` — rebuild from scratch

## Run

After compilation, run the produced executable (name depends on the exercise):

```bash
./<executable_name>
```

## Learning Goals

- Model relationships between classes correctly
- Use virtual methods for polymorphic behavior
- Understand object slicing and dynamic dispatch
- Manage resources safely in inheritance trees
- Write clear, extensible C++ class designs

## Requirements

- C++ compiler (`c++`, `g++`, or `clang++`)
- `make`

## Notes

- Follow exercise subject rules and expected output exactly.
- Mark destructors `virtual` in polymorphic base classes when needed.
- Keep interfaces simple and behavior predictable across derived types.
