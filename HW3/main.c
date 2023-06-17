//***************************************
//** DO NOT SUBMIT THIS FILE
//***************************************
#include <stdio.h>
//***************************************
typedef struct sNode Node;
typedef struct sStack
{
    Node* head;
} Stack;
void push(Stack* s,int val);
int pop(Stack* s);
void print(Stack* s);
//***************************************
int str2num(char* str);
int interpret(Stack* s,const char* str);
//***************************************
Stack stack={.head=NULL};
int main()
{
    const char* str="1 5 + 6 3 - / 7 *";
    // const char* str=" 10 20 + 2 * 15 - 2 1 * /";
    int result=interpret(&stack,str);
    printf("Result:%d\n",result);

    return 0;
}


