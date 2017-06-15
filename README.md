# Herbert Schildt's Little C
Herbert Schildt's (vastly unmodified) Little C Interpreter.

Little C is an interpreted subset of the C programming language, written as a learning tool by Herbert Schildt for his book on the C programming language.

Herbert himself has already acknowledged that Little C isn't efficient or the best but still serves its purpose as a teaching tool and it can be expanded.

## Features of Little C

##### Functions with parameters and local variables.
##### Recursion.
##### 'if', 'do-while', 'while', and 'for'-loop constructs.
##### 'int' and 'char' variables.
##### global variables.
##### (limited) string constants.
##### 'return' statements, with or without a value.
##### limited standard library that is included with the code.
##### operators and operations with +, -, *, /, %, <, >, <=, >=, ==, !=, unary -, and unary +.
##### Functions that can return ints (char is supported but are always promoted to int).
##### C style Comments like '/**/' and C++ style comments like '//'

#### Herbert has also given a list of ways to improve or expand Little C.

From Herbet's Dr. Dobbs journal article @ http://www.drdobbs.com/cpp/building-your-own-c-interpreter/184408184


"Improving and Expanding the C Interpreter

The C interpreter presented here was designed with transparency of 
operation in mind.  The goal was to develop an interpreter that could be
 easily understood with the least amount of effort, and to design it so 
that it could be easily expanded.  As such, the interpreter is not 
particularly fast or efficient.  The basic structure of the interpreter 
is correct, however, and you can increase its speed of execution in the 
following ways.



One potential improvement is with the lookup routines for variables and 
functions.  Even if you convert these items into integer tokens, the 
current approach to searching for them relies upon a sequential search. 
 You could, however, substitute some other, faster method, such as a 
binary tree or some sort of hashing method.



Two general areas in which you can expand and enhance the C interpreter 
are C features and ancillary features.  Among the C statements you can 
add to the interpreter are additional action statements, such as the 
switch, the goto, and the break and continue statements.



Another type of C statement you can add is new data types.  The 
interpreter already contains the basic hooks for additional data types. 
 For example, the var_type structure already contains a field for the 
type of variable.  To add other elementary types (that is, float, 
double, long), increase the size of the value field to the size of the 
largest element you wish to hold.



Supporting pointers is no harder than supporting any other data type; 
however, you will need to add support for the pointer operators to the 
expression parser.  This will involve some lookahead.  Once you have 
implemented pointers, arrays will be easy.  The space of an array should
 be allocated dynamically using malloc( ), and a pointer to the array 
should be stored in the value field of var_type.



The addition of structures and unions poses a more difficult problem.  
The easiest way to handle them is to use malloc( ) to allocate space for
 them, and to use a pointer to the object in the value field of the 
var_type structure.  (You will also need special code to handle the 
passing of structures and unions as parameters.) To handle different 
return types for functions, add a type field to the func_type structure,
 which defines what type of data a function returns.
"

