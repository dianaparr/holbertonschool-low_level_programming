# 0x18-dynamic_libraries

## Learning Objectives
**General**

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Tasks
**0. A library is not a luxury but one of the necessities of life:**
Create the dynamic library libholberton.so containing all the functions.
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your holberton.h file in your repository, containing at least all the prototypes of the above functions.

**1. Without libraries what have we? We have no past and no future:**
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

**2. Either write something worth reading or do something worth writing:**
Write a blog post describing the differences between static and dynamic libraries.
