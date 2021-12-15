# Get Next Line (GNL)  :tractor:

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>


<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-compilation">Compilation</a>
</h3>

---

## 💡 About the project

> _This project will not only allow you to add a very convenient function to your collection,
but it will also allow you to learn a highly interesting new concept in C programming:
**"static variables"**._

	You will understand how files are opened, read and closed in an OS,
	and how they are interpreted by a programming language for further analysis.
	This task is crucial to understand for a future programmer since much of the time is based
	on manipulating files for data management and persistence.
	This project consists of coding a function that returns one line at a time from a text file.

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).The aim of this project is to make you code a function that **returns a line
ending with a newline, read from a file descriptor.**


### Function Prototype
```c
char *get_next_line(int fd);
```
## 🛠️ Compilation

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
./a.out get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```
