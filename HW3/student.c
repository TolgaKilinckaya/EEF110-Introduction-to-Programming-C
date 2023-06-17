//***************************************
//** SUBMIT ONLY THIS FILE
//** ONLY PUT THE IMPLEMENTATION
//***************************************
#include <stdio.h>
#include <stdlib.h>
typedef struct sNode
{
    struct sNode* next;
    int val;
} Node;
typedef struct sStack
{
    Node* head;
} Stack;
void push(Stack* s,int val)
{
    // Create a new node with the value
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->val = val;
    new_node->next = NULL;
    // If the stack is empty, set the head to point to the new node
    if (s->head == NULL) {
        s->head = new_node;
    }
    // Otherwise, insert the new node at the front of the stack
    else {
        new_node->next = s->head;
        s->head = new_node;
    }
}

int pop(Stack* s)
{     
    // Check if the stack is empty
    if (s->head == NULL) {
        printf("Error: Stack underflow\n");
        return -1;
    }
    // Store a temporary pointer to the head node
    Node* temp = s->head;
    // Store the value to be returned
    int val = temp->val;
    // Set the head to point to the next node
    s->head = temp->next;
    // Free the memory of the removed node
    free(temp);
    // Return the value
    return val;
}

void print(Stack* s)
{
    // Start from the head node
    Node* current = s->head;
    // Print a label
    printf("Stack: ");
    // Loop until reaching the end of the stack
    while (current != NULL) {
        // Print the current node's value
        printf("%d ", current->val);
        // Move to the next node
        current = current->next;
    }
    // Print a newline
    printf("\n");
}

//***************************************
int str2num(const char* str) {
  int num = 0; // Initialize the number to zero
  int i = 0; // Initialize the index to zero

  // Loop through the characters of the string
  while (str[i] != '\0') {
    // Check if the character is a digit
    if (str[i] >= '0' && str[i] <= '9') {
      // Multiply the number by 10 and add the digit value
      num = num * 10 + (str[i] - '0');
    }
    else {
      // Invalid character, return zero
      return 0;
    }
    i++; // Increment the index
  }

  // Return the number
  return num;
}


int interpret(Stack* stack,const char* str)
{
    int k = 0, j = 0, l = 0;
    char arr[100][10];
    while (str[k] != '\0') {
    if (str[k] == ' ') {
        arr[j][l] = '\0';
        j++;
        l = 0;
    } else {
        arr[j][l] = str[k];
        l++;
    }
    k++;
    }
        arr[j][l] = '\0';
        j++;
    arr[j][0] = 'a';

    int i = 0;
    while(arr[i][0] != 'a'){
        if(arr[i][0] == '+' || arr[i][0] == '-' || arr[i][0] == '*' || arr[i][0] == '/'){
            int num1 = pop(stack);
            int num2 = pop(stack);
            int result;
            if(arr[i][0] == '+'){
                    result = num2 + num1;
                    }
            else if(arr[i][0] == '-'){
                    result = num2 - num1;
                    }
            else if(arr[i][0] == '*'){
                    result = num2 * num1;
                    }
            else if(arr[i][0] == '/'){
                    result = num2 / num1;
                    }
            push(stack,result);
            }
            else{
                 int num = str2num(arr[i]);
                  push(stack,num);
            }
            i++;
    }
    return pop(stack);
}

Stack stack={.head=NULL};
int main()
{
    const char* str="1 5 + 6 3 - / 7 *";
    // const char* str=" 10 20 + 2 * 15 - 2 1 * /";
    int result=interpret(&stack,str);
    printf("Result:%d\n",result);

    return 0;
}


