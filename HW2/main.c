//***************************************
//** DO NOT SUBMIT THIS FILE
//***************************************
#include <stdio.h>
#include <math.h>

void print();
void print_polar();
void push(float,float);
void pop();
void sort();
void sort_polar();

int main()
{
    push(2,2);
    push(1,1);
    push(1,-1);
    sort_polar();
    print_polar();
    return 0;
}
