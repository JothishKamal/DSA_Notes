# C Language:

 - Constants
 - Variables
 - Keywords
 - Data Types
 - Structure of C Program
 - Looping Statements
 - Conditional Statements
 - Arrays (1D,2D,Multidimensional Array)
 - Structures, Union
 - Functions Prototype (Arguments and Return Types) [Main requires return types in modern compilers]
 - Pointers
## Constants:

- Integer Constants (2B - Turbo C, Modern Compilers - 4B)
- Floating Constants (4B)
- Character Constants (1B)
### Integer Constant:

Examples: +/- 1, 10

### Floating Constant:

Examples: +/- 1.20, 11.0❌

### Character Constant:

' ' - 1 Letter/1 Digit/1 Special Character

## Variables:

Value can vary.
- Variable names only allow letters, digits and underscores.
- Variable name should have atleast one letter in it.
- Variable name shouldn't start with digits.
- Keywords can't be used as variable name.

## Data Types:

- Int (%d/%i)
- Float (%f)
- Char (%c)

## Keywords:

Keywords are reserved words with special meaning to the compiler
int float char double malloc calloc free realloc 
break goto continue switch
for while if else do struct union 
return typedef auto static register extern

## Structure of C Program:

```cpp
// Single line comment
/*
Multi Line Comment
*/
global variable declaration;
headerfile section
void main(){

}
```

## Conditional Statements:

1. if
2. if else
3. if else if else
4. nested if
5. multiple if
6. switch
### if:

```cpp
int x=10;
if(exp) printf("Hi"); // where exp is non zero value, Hi will be printed
if(x==10) printf("Hi"); ✅
if(x=100) printf("Hi"); ✅
if(x=0) printf("Hi"); ❌ // x is reassigned to zero 
```