A simple C Preprocessor project developed in C. The project demonstrates the basic preprocessing steps that take place before a C program is passed to the compiler.
The project is organized into separate source files so that each preprocessing operation can be developed and maintained independently.

The program reads a C source file and processes it through separate functions for header-file inclusion, comment removal, and macro replacement.

The project is divided into three main preprocessing operations:

**1. Header File Inclusion**
- Identifies header-file inclusion directives such as #include.
- Reads the specified header file.
- Includes the header-file content in the source being preprocessed.

**2. Comment Removal**
- Removes single-line comments (//).
- Removes multi-line comments (/* ... */).
- Preserves the remaining source code and its required line structure.

**3. Macro Replacement**
- Identifies macro definitions using #define.
- Stores macro names and their replacement values.
- Replaces occurrences of defined macros in the source code.
- The project is designed to handle object-like macros and function-like macros as implemented in the macro-replacement module.
