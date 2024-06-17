# 0x00. C - Hello, World

## Overview

This project is part of the SE Foundations curriculum, focusing on the basics of C programming. It covers essential concepts and skills needed to start programming in C, from compiling code to understanding the compilation process, and follows the Betty coding style.

### Concepts Covered
- **C Programming**
- **Using Docker & WSL on Local Host**

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without external help:

### General
- The significance of C programming.
- The inventors of C: Dennis Ritchie and Brian Kernighan.
- Linus Torvalds' perspective on C vs. C++.
- The gcc compiler and its operations.
- The structure and purpose of the `main` function.
- Various methods of printing text (`printf`, `puts`, `putchar`).
- Using the `sizeof` operator to determine data type sizes.
- Compiling C programs using gcc.
- The official C coding style and how to use the Betty linter.
- Identifying the correct headers for standard library functions.
- The role of the `main` function in determining the program's return value.

## Requirements
### C
- Allowed editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line.
- Include a `README.md` file at the root of the repository and project folder.
- No compilation errors or warnings.
- Prohibited use of `system` function.
- Adhere to Betty coding style.

### Shell Scripts
- Allowed editors: vi, vim, emacs
- Scripts will be tested on Ubuntu 20.04 LTS.
- Scripts should be exactly two lines long.
- Files should end with a new line.
- The first line of all scripts should be `#!/bin/bash`.

## Betty Linter
To use the Betty linter:

1. Clone the Betty repository.
2. Navigate to the Betty directory.
3. Install the linter with `sudo ./install.sh`.
4. Create a new file called `betty` with the following content:

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

5. Save, exit, and change permissions with `chmod a+x betty`.
6. Move the file to `/bin/` or another directory in your `$PATH` with `sudo mv betty /bin/`.

You can now run the Betty linter with `betty <filename>`.

## Tasks

### 0. Preprocessor
Write a script that runs a C file through the preprocessor and saves the result into another file.
- **File:** `0-preprocessor`

### 1. Compiler
Write a script that compiles a C file but does not link.
- **File:** `1-compiler`

### 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.
- **File:** `2-assembler`

### 3. Name
Write a script that compiles a C file and creates an executable named `cisfun`.
- **File:** `3-name`

### 4. Hello, puts
Write a C program that prints exactly `"Programming is like building a multilingual puzzle"`, followed by a new line.
- **File:** `4-puts.c`

### 5. Hello, printf
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
- **File:** `5-printf.c`

### 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
- **File:** `6-size.c`

### 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.
- **File:** `100-intel`

## Resources
Read or watch:
- [Everything you need to know to start with C Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240617%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240617T052605Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=7bdda86b939a1e23cd2c27710ed934540d425ce80edc0f34d6b0f2e536b45ad9)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
- [Hash-bang under the hood (view after other resources)](https://x.com/unix_byte/status/1024147947393495040?s=21)
- [Linus Torvalds on C vs. C++ (view after other resources)](https://harmful.cat-v.org/software/c++/linus)

Man pages:
- `gcc`
- `printf(3)`
- `puts`
- `putchar`