# EEF110-Introduction-to-Programming-C
I am sharing the answers to the homework assignments of my EEF110-Introduction to Programming(C) course at ITU.

## Homework 1
### Description

1. Plot a **sine wave** using according to the given **height** and **width** variables.
2. Find the **shortest distance** from a given point to a segment whose endpoints are known.
### Output

![Screenshot 2023-04-04 150034](https://user-images.githubusercontent.com/119072606/229785331-181d605b-1adb-4985-8636-5c1cd415c513.png)
![Screenshot 2023-04-04 151201](https://user-images.githubusercontent.com/119072606/229787861-d8bfe408-3bc1-4bfa-a983-ee45983c516a.png)

******************************************

## Homework 2
### Description

A static memory is given in order to optimize the memory usage of the code. The static memory needs
to be used for multiple complex numbers.<br />
• Use a #define statement named MAX for the amount of storable complex numbers.<br />
• **float mem[]** represents the static memory.<br />
• **int count** represents the number count.<br />
Implement the following functions,<br />
• **void print()**: prints the whole memory to the console in 1 + 1i format.<br />
• **void print_polar()**: prints the whole memory to the console in 1.414214[+45.000001deg] format.<br />
• **void push(float re,float im)**: adds a complex number to the memory if capacity not full.<br />
• **void pop()**: removes the last added complex number from the memory and places zeros.<br />
• **void sort()**: sorts the complex numbers in ascending order in both real and imaginary values.<br />
• **void sort_polar()**: sorts the complex numbers in ascending order in both magnitude and phase<br />
values.
### Output

![image](https://user-images.githubusercontent.com/119072606/234716217-2a4359dd-b032-479f-b70a-49ac61fa7970.png)

******************************************

## Homework 3
### Description

1. A data type called Node is used to encapsulate data and to implement the data type Stack. Stack
is used with a Last-In-First-Out data exchange strategy. This data type is going to be implemented like the
Linked-List. Implement the following functions,<br />
• <b>void print(Stack* s):</b> prints the stack (only for debug purposes).<br />
• <b>void push(Stack* s,int val):</b> adds the new value to the stack.<br />
• <b>int pop(Stack* s):</b> removes the last added value from the stack.<br />

2. The data type created in the previous question called Stack is going to be used to develop an interpreter.
This interpreter uses a special syntax where if two numbers are given consecutively they are pushed into the
stack, if an operator is detected then two numbers are popped from the stack, the operator is applied to the
numbers and the result is pushed back into the stack. Using this, it is possible to implement a mathematical
interpreter.<br />
• <b>int str2num(char* str):</b> a helper function which converts an entire string into an integer.<br />
• <b>int interpret(Stack* s,const char* str):</b> uses the provided stack and the string, interprets
the string’s mathematical syntax content and returns the appropriate result as an integer.<br />
Only integers are used and all operations are integer operations. Only +,−, ∗ and / are supported.

### Output

![Screenshot 2023-06-17 204138](https://github.com/TolgaKilinckaya/EEF110-Introduction-to-Programming-C/assets/119072606/6f2fc2e3-8619-4665-9988-897fd0c15b9a)


