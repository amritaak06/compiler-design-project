# Mini C Compiler

This project is a **Mini Compiler for a subset of the C language**, built as part of the Compiler Design course at PES University. The compiler is designed to **validate the syntax of a C program** through multiple phases, including Lexical Analysis, Syntax Analysis, and Semantic Analysis.

## 📌 Features
- **Lexical Analysis** using `lex`/`flex`:
  - Tokenizes the input source code
  - Handles integer, float, and boolean literals
  - Ignores comments and whitespace
  - Reports lexical errors (e.g., unterminated strings, invalid characters)
- **Symbol Table** to manage scope and bindings
- **Syntax Analysis** using `yacc`/`bison`:
  - Constructs a **Parse Tree**
  - Validates the syntax structure of the C program
  - Supports constructs like variable declarations, loops, functions, and expressions
- **Semantic Analysis**:
  - Checks variable declarations and type compatibility
  - Ensures correct scoping and symbol table management
  - Reports semantic errors

## 🚀 Getting Started
### Prerequisites
Ensure you have the following installed:
- `flex` (Lexical Analyzer)
- `bison` (Parser Generator)
- `gcc` (C Compiler)

To install them on Ubuntu:
```sh
sudo apt-get install flex bison gcc
```

### 🛠️ Compilation & Execution
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/mini-c-compiler.git
   cd mini-c-compiler
   ```
2. Compile the lexical analyzer:
   ```sh
   flex lexer.l
   gcc lex.yy.c -o lexer -ll
   ```
3. Compile the syntax analyzer:
   ```sh
   bison -d parser.y
   gcc parser.tab.c -o parser -ll
   ```
4. Run the compiler:
   ```sh
   ./parser < input.c
   ```

## 📂 Project Structure
```
📦 mini-c-compiler
├── lexer.l                # Lexical Analyzer (Flex)
├── lex.yy                 # Generated Lexical Analyzer
├── parser.y               # Syntax Analyzer (YACC/Bison)
├── parser.tab.c           # Generated Parser Source
├── parser.tab.h           # Parser Header File
├── y.tab                  # YACC/Bison Parsing Table
├── sym_tab.c              # Symbol Table Implementation
├── sym_tab.h              # Symbol Table Header
├── assign-1_test-*.c      # Test Cases (Invalid Inputs)
├── assignment-1_*         # Test Cases (Valid Inputs)
├── a.out                  # Compiled Output File
├── output1                # Test Run Output
├── README.md              # Documentation

```

## ✅ Supported Language Features
- Variable Declarations (`int a; double b;`)
- Arithmetic & Boolean Expressions
- Loops (`for`, `while`, `do-while`)
- Conditionals (`if-else`, `switch-case`)
- Arrays (single & multi-dimensional)
- Function declarations and calls

## 📌 Error Handling
- **Lexical Errors**: Unrecognized tokens, unterminated comments
- **Syntax Errors**: Misplaced tokens, missing semicolons, unmatched braces
- **Semantic Errors**: Undeclared variables, type mismatches

## 📜 References
- PES University Compiler Design Course 

---
