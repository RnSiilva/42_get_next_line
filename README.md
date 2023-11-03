<h1 align="center">
	📖 get_next_line
</h1>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/RnSiilva/42_get_next_line?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/RnSiilva/42_get_next_line?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/RnSiilva/42_get_next_line?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/RnSiilva/42_get_next_line?color=green" />
</p>

<h3 align="center">
	<a href="#-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-bonus">Bonus</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

	🚀 TLDR: this project consists of coding a function that returns one line at a time from a text file.


## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` or `cc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

## 📋 Testing

You only have to edit the get_next_line.c file and uncomment the main function and headers inside it.
You can edit foo's.txt files([**texts**](https://github.com/RnSiilva/42_get_next_line/tree/main/texts)) to put another text if you wish to test othe cases.
Then simply run this command (change "xx" with desired buffer size) :

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
```

## 🌟 Bonus

The project includes a bonus version of get_next_line, which can read from multiple file descriptors at the same time.


## Grade: 125 / 100

Or you can also use this third party tester to fully test the project

- Francinette: https://github.com/xicodomingues/francinette
- gnlTester: https://github.com/Tripouille/gnlTester
