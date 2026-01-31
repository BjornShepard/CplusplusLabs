
## Reflection answers 

1. What is the difference between a declaration and a definition?

A declaration just describes the signatures of the methods, while the definitions is the imlpementations. 

2. How does an include guard prevent multiple definitions?

It uses the guards to implicitly define that this is the definition that should be used, and has strict guard for when that definition is ended, so there are no risks for duplicate definition. 

IFNDEF
DEFINE
ENDIF

3. How can you tell if an error comes from the compiler or the linker? Does a linker error mean that you have an error in your source code? How do you (typically) fix a linker error?

A linker error occurs when there is something wrong with the imported or included libraries, not the source code in itself (which would be a compiler error), except for the actual import section of the source code ofc. You fix linker errors by checking your imports. 

4. Do you have to make any changes to MakefileWithDeps to build your hello world program?

Yes you had to add the name of the executable file in PROGS, and then you need to define for the executable file: which object files to derive it from

5. In encode and decode, the type unsigned char is used. Would your code work the same
way if that type is changed to char or signed char?

In some cases, yes it would work. But in the general case no. This is because the encoding-decoding relies on modulo computation to work, which wouldn't be the case if we were to allow values that are explicitly supposed to be negative. 

6. In the coding problem, reading the file with char ch; while (infile >> ch) ... doesn’t
work. Why?

Possibly it could something to do with whitespaces, but we didn't find any errors. 

7. If your program crashes, how can you use the debugger to get a stack trace similar to that of Exception.printStackTrace() in Java?

You can use the gdb program and then use the following command on the desired line of code: 

backtrace

8. What is the difference between a debugger breakpoint and a watchpoint?

A breakpoint stops your program whenever a particular point in the program is reached. 
A watchpoint stops your program whenever the value of a variable or expression changes. 
A catchpoint stops your program whenever a particular event



