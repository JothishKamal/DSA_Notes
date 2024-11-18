// // Stack (int)
// #include <stdio.h>
// #define size 5
// int stack[size];
// int top = -1;

// void push()
// {
//   if (top >= size - 1)
//   {
//     printf("Overflow\n");
//   }
//   else
//   {
//     int x;
//     scanf("%d", &x);
//     stack[++top] = x;
//   }
// }

// void pop()
// {
//   if (top == -1)
//   {
//     printf("Underflow\n");
//   }
//   else
//   {
//     printf("Popped Element: %d\n", stack[top--]);
//   }
// }

// void display()
// {
//   for (int i = top; i >= 0; i--)
//     printf("%d\n", stack[i]);
// }

// void peek()
// {
//   if (top == -1)
//   {
//     printf("Stack is empty\n");
//   }
//   else
//   {
//     printf("Top Element: %d\n", stack[top]);
//   }
// }

// int main(void)
// {
//   while (1)
//   {
//     printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
//     int ch;
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       push();
//       break;
//     case 2:
//       pop();
//       break;
//     case 3:
//       peek();
//       break;
//     case 4:
//       display();
//       break;
//     case 5:
//       return 0;
//     default:
//       printf("Invalid choice\n");
//       break;
//     }
//   }
// }

// // Stack (Linked List)
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//   int data;
//   struct Node *next;
// } *top = NULL;

// void push()
// {
//   struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//   if (temp == NULL)
//   {
//     printf("Overflow\n");
//   }
//   else
//   {
//     int x;
//     scanf("%d", &x);
//     temp->data = x;
//     temp->next = top;
//     top = temp;
//   }
// }

// void pop()
// {
//   if (top == NULL)
//   {
//     printf("Underflow\n");
//   }
//   else
//   {
//     struct Node *temp = top;
//     printf("Popped Element: %d\n", top->data);
//     top = top->next;
//     free(temp);
//   }
// }

// void display()
// {
//   struct Node *p = top;
//   if (p == NULL)
//   {
//     printf("Stack is empty\n");
//   }
//   else
//   {
//     while (p != NULL)
//     {
//       printf("%d\n", p->data);
//       p = p->next;
//     }
//   }
// }

// void peek()
// {
//   if (top == NULL)
//   {
//     printf("Stack is empty\n");
//   }
//   else
//   {
//     printf("Top Element: %d\n", top->data);
//   }
// }

// int main(void)
// {
//   while (1)
//   {
//     printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
//     int ch;
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       push();
//       break;
//     case 2:
//       pop();
//       break;
//     case 3:
//       peek();
//       break;
//     case 4:
//       display();
//       break;
//     case 5:
//       return 0;
//     default:
//       printf("Invalid choice\n");
//       break;
//     }
//   }
// }

// // Parantheses Matching
// #include <stdio.h>
// #define size 100
// char stack[size];
// int top = -1;

// int main(void)
// {
//   char ip[100];
//   scanf(" %[^\n]", ip);
//   for (int i = 0; ip[i] != '\0'; i++)
//   {
//     if (ip[i] == '(' || ip[i] == '{' || ip[i] == '[')
//     {
//       stack[++top] = ip[i];
//     }
//     else if (ip[i] == ')')
//     {
//       if (top == -1 || stack[top] != '(')
//       {
//         printf("Invalid");
//         return 1;
//       }
//       else
//         top--;
//     }
//     else if (ip[i] == '}')
//     {
//       if (top == -1 || stack[top] != '{')
//       {
//         printf("Invalid");
//         return 1;
//       }
//       else
//         top--;
//     }
//     else if (ip[i] == ']')
//     {
//       if (top == -1 || stack[top] != '[')
//       {
//         printf("Invalid");
//         return 1;
//       }
//       else
//         top--;
//     }
//     else
//       continue;
//   }
//   if (top == -1)
//     printf("Valid");
//   else
//     printf("Invalid");
// }

// // Tower of Hanoi
// #include <stdio.h>
// char A = 'A', B = 'B', C = 'C';

// void toh(int n, char from, char to, char aux)
// {
//   if (n == 1)
//   {
//     printf("%c -> %c\n", from, to);
//     return;
//   }
//   toh(n - 1, from, aux, to);
//   printf("%c -> %c\n", from, to);
//   toh(n - 1, aux, to, from);
// }

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   toh(n, A, C, B);
// }

// // Infix to Postfix
// #include <stdio.h>
// #define size 100
// char stack[size];
// int top = -1;

// void push(char c)
// {
//   if (top >= size - 1)
//   {
//     printf("Overflow\n");
//     return;
//   }
//   else
//   {
//     stack[++top] = c;
//   }
// }

// char pop()
// {
//   if (top == -1)
//   {
//     printf("Underflow\n");
//     return '\0';
//   }
//   else
//   {
//     return stack[top--];
//   }
// }

// char peek()
// {
//   if (top == -1)
//   {
//     return '\0';
//   }
//   return stack[top];
// }

// int precedence(char c)
// {
//   switch (c)
//   {
//   case '+':
//   case '-':
//     return 1;
//   case '*':
//   case '/':
//     return 2;
//   case '^':
//     return 3;
//   default:
//     return 0;
//   }
// }

// int isOperator(char c)
// {
//   return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
// }

// void infixToPostfix(char *infix, char *postfix)
// {
//   int k = 0;
//   for (int i = 0; infix[i] != '\0'; i++)
//   {
//     if (infix[i] == ' ' || infix[i] == '\t')
//     {
//       continue;
//     }
//     if ((infix[i] >= '0' && infix[i] <= '9') || (infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
//     {
//       postfix[k++] = infix[i];
//     }
//     else if (infix[i] == '(')
//     {
//       push(infix[i]);
//     }
//     else if (infix[i] == ')')
//     {
//       while (top != -1 && peek() != '(')
//       {
//         postfix[k++] = pop();
//       }
//       pop();
//     }
//     else if (isOperator(infix[i]))
//     {
//       while (top != -1 && precedence(peek()) >= precedence(infix[i]))
//       {
//         postfix[k++] = pop();
//       }
//       push(infix[i]);
//     }
//   }
//   while (top != -1)
//   {
//     postfix[k++] = pop();
//   }
//   postfix[k] = '\0';
// }

// int main()
// {
//   char infix[size], postfix[size];
//   fgets(infix, size, stdin);
//   infix[size - 1] = '\0';
//   infixToPostfix(infix, postfix);
//   printf("Postfix expression: %s\n", postfix);
//   return 0;
// }

// // Evaluation of postfix
// #include <stdio.h>
// #define size 100
// char stack[size];
// int top = -1;

// int main(void)
// {
//   char postfix[100];
//   scanf(" %[^\n]", postfix);
//   for (int i = 0; postfix[i] != '\0'; i++)
//   {
//     if (postfix[i] == ' ' || postfix[i] == '\t')
//     {
//       continue;
//     }
//     if (postfix[i] >= '0' && postfix[i] <= '9')
//     {
//       stack[++top] = postfix[i] - '0';
//     }
//     else
//     {
//       int op2 = stack[top--];
//       int op1 = stack[top--];
//       switch (postfix[i])
//       {
//       case '+':
//         stack[++top] = op1 + op2;
//         break;
//       case '-':
//         stack[++top] = op1 - op2;
//         break;
//       case '*':
//         stack[++top] = op1 * op2;
//         break;
//       case '/':
//         stack[++top] = op1 / op2;
//         break;
//       }
//     }
//   }
//   printf("Result: %d\n", stack[top]);
// }

// // Infix to Prefix
// #include <stdio.h>
// #include <string.h>
// #define size 100
// char stack[size];
// int top = -1;
// void push(char c)
// {
//   if (top >= size - 1)
//   {
//     printf("Stack Overflow\n");
//     return;
//   }
//   stack[++top] = c;
// }
// char pop()
// {
//   if (top < 0)
//   {
//     printf("Stack Underflow\n");
//     return '\0';
//   }
//   return stack[top--];
// }
// char peek()
// {
//   if (top < 0)
//   {
//     return '\0';
//   }
//   return stack[top];
// }
// int precedence(char op)
// {
//   switch (op)
//   {
//   case '+':
//   case '-':
//     return 1;
//   case '*':
//   case '/':
//     return 2;
//   case '^':
//     return 3;
//   default:
//     return 0;
//   }
// }
// int isOperator(char c)
// {
//   return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
// }
// void reverseString(char *str)
// {
//   int n = strlen(str);
//   for (int i = 0; i < n / 2; i++)
//   {
//     char temp = str[i];
//     str[i] = str[n - i - 1];
//     str[n - i - 1] = temp;
//   }
// }
// void infixToPrefix(const char *infix, char *prefix)
// {
//   char reversedInfix[size], temp[size];
//   int len = strlen(infix);
//   strcpy(reversedInfix, infix);
//   reverseString(reversedInfix);
//   for (int i = 0; i < len; i++)
//   {
//     if (reversedInfix[i] == '(')
//       reversedInfix[i] = ')';
//     else if (reversedInfix[i] == ')')
//       reversedInfix[i] = '(';
//   }
//   int k = 0;
//   for (int i = 0; reversedInfix[i] != '\0'; i++)
//   {
//     if (reversedInfix[i] == ' ' || reversedInfix[i] == '\t')
//     {
//       continue;
//     }
//     if ((reversedInfix[i] >= '0' && reversedInfix[i] <= '9') ||
//         (reversedInfix[i] >= 'a' && reversedInfix[i] <= 'z') ||
//         (reversedInfix[i] >= 'A' && reversedInfix[i] <= 'Z'))
//     {
//       temp[k++] = reversedInfix[i];
//     }
//     else if (reversedInfix[i] == '(')
//     {
//       push(reversedInfix[i]);
//     }
//     else if (reversedInfix[i] == ')')
//     {
//       while (top != -1 && peek() != '(')
//       {
//         temp[k++] = pop();
//       }
//       pop();
//     }
//     else if (isOperator(reversedInfix[i]))
//     {
//       while (top != -1 && precedence(peek()) >
//                               precedence(reversedInfix[i]))
//       {
//         temp[k++] = pop();
//       }
//       push(reversedInfix[i]);
//     }
//   }
//   while (top != -1)
//   {
//     temp[k++] = pop();
//   }
//   temp[k] = '\0';
//   reverseString(temp);
//   strcpy(prefix, temp);
// }
// int main()
// {
//   char infix[size], prefix[size];
//   fgets(infix, size, stdin);
//   infix[size - 1] = '\0';
//   infixToPrefix(infix, prefix);
//   printf("Prefix expression: %s\n", prefix);
//   return 0;
// }

// // Evaluation of Prefix
// #include <stdio.h>
// #include <string.h>
// #define size 100
// char stack[size];
// int top = -1;

// int main(void)
// {
//   char prefix[100];
//   scanf(" %[^\n]", prefix);
//   for (int i = strlen(prefix) - 1; i >= 0; i--)
//   {
//     if (prefix[i] == ' ' || prefix[i] == '\t')
//     {
//       continue;
//     }
//     if (prefix[i] >= '0' && prefix[i] <= '9')
//     {
//       stack[++top] = prefix[i] - '0';
//     }
//     else
//     {
//       int op1 = stack[top--];
//       int op2 = stack[top--];
//       switch (prefix[i])
//       {
//       case '+':
//         stack[++top] = op1 + op2;
//         break;
//       case '-':
//         stack[++top] = op1 - op2;
//         break;
//       case '*':
//         stack[++top] = op1 * op2;
//         break;
//       case '/':
//         stack[++top] = op1 / op2;
//         break;
//       }
//     }
//   }
//   printf("Result: %d\n", stack[top]);
// }