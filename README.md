# holbertonschool-printf

This File contains a descprition of the program that aims to recreate the builtin function printf. The printf function is a C language built-in function which belong to the stdio librairy (standard input output). First let's figure out what is the original printf function does.

Printf stands for print formatted data and as its name implies it will display on the monitor data which have been formatted data. it takes 2 arguments. See prototype below :

### int printf(const char *format, ...);

- format is a the string that contains text and specific format identifiers.
- ...  tells us that printf is a variadic function. 

All in all the output to display is a string that contains original texte and data retrived from an undefined number of arguments which types are identified by the format identifier. 


# Our custom function will be named "_printf"

in order to recreate this function the program is divided in 4 files:
- main.h           -> header file that contains prototype and librairy needed to handle variadic function
- format.c         -> contains the function handle_format, it associates a format specifier to its according print function
- outputformat.c   -> contains all the function associated to the format specifiers
- print.c          -> contains the actual printf recreation. 

example of the printf desired output: 
int main (void)
{
char letter = 'E';
char *lunch = 'a lot';

printf("My name starts with a %c and I ate %s today.", letter, lunch);
return (0);
}

**OUTPUT** : My name starts with a E and I ate a lot today.

**Things to look for:**

- % is followed by a character to indicate the expected format, let's call it format identifier.  
- the function printf return the number of characters printed
- it is also possible to print numbers. 

# The flow of the function. 

The program runs in a relative simple way and is fairly sequential. It prints the strings till it reaches a format identifier, then looks for the argument to print according to its format and keeps on doing so till the end of the string is reached. 

here are some flowchart which will details the process more deeply : 

- [flowchart printf](C:\Users\benja\OneDrive\Images\Holberton Flowchart\Flowchart Printf)
- [flowchart handleformat](C:\Users\benja\OneDrive\Images\Holberton Flowchart\Flowchart Printf)


**Instructions**

To use this function fork the repository,
Compile all the c file and the header together
    for gcc user: gcc -Wall -Werror -Wextra -Wno-format *.c *.h -o _printf

Running the program will use our own test file, however you can modify the test file to run your own test. 

**author**

PIGNOLET Benjamin https://github.com/Benji021
SEGUIN Etienne https://github.com/bluelightwatcher
