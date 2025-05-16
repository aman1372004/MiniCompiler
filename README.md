# Mini Compiler Project

## Overview

This is a Mini Compiler project implemented in C/C++ as part of my coursework. The compiler includes lexical analysis, parsing, abstract syntax tree (AST) construction, and code optimization phases. The goal is to build a basic compiler that can read a subset of C-like language, parse it, and generate intermediate code.

---

## Project Structure

- `lex_parse` — Contains the lexical analyzer and parser implementation using Flex and Bison.
- `ast/` — Implements the Abstract Syntax Tree creation and traversal.
- `code_opt/` — Code optimization phase to improve generated code.
- `code_gen/` — Code generation modules (if implemented).
- Other folders and files are organized for modular development.

---

## Features

- Lexical analysis with Flex.
- Syntax analysis with Bison parser.
- AST generation for parsed code.
- Basic code optimization techniques.
- Modular and extensible design for further phases.

---

## Getting Started

### Prerequisites

- GNU Flex
- Bison
- GCC or compatible C compiler
- Make (optional but recommended)

### Building the Compiler

1. Navigate to the `lex_parse` directory:
   ```bash
   cd lex_parse
