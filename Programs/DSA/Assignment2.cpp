// // 1. int Stack
// #include <stdio.h>

// const int size = 5;
// int stack[size];
// int top = -1;

// void push()
// {
//   if (top >= size - 1)
//     printf("Stack Overflow\n");
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
//     printf("Stack Underflow\n");
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

// int main(void)
// {
//   bool loop = true;
//   do
//   {
//     int ch;
//     printf("1. Push");
//     printf("\n2. Pop");
//     printf("\n3. Display");
//     printf("\n4. Exit");
//     printf("\nSelect Operation: ");
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
//       display();
//       break;
//     case 4:
//       loop = false;
//       break;
//     default:
//       printf("Invalid Operation");
//       break;
//     }
//   } while (loop);
// }

// // 2. Stack with Struct
// #include <stdio.h>

// typedef struct
// {
//   char name[20];
//   int age;
//   float cgpa;
// } student;

// const int size = 5;
// student stack[size];
// int top = -1;

// void push()
// {
//   if (top >= size - 1)
//     printf("Stack Overflow\n");
//   else
//   {
//     student x;
//     scanf("%s", x.name);
//     scanf("%d", &x.age);
//     scanf("%f", &x.cgpa);

//     stack[++top] = x;
//   }
// }

// void pop()
// {
//   if (top == -1)
//     printf("Stack Underflow\n");
//   else
//   {
//     printf("Popped Element: %s %d %f\n", stack[top].name, stack[top].age, stack[top].cgpa);
//     top--;
//   }
// }

// void display()
// {
//   for (int i = top; i >= 0; i--)
//     printf("%s %d %f\n", stack[i].name, stack[i].age, stack[i].cgpa);
// }

// int main()
// {
//   do
//   {
//     int ch;
//     printf("1. Push");
//     printf("\n2. Pop");
//     printf("\n3. Display");
//     printf("\n4. Exit");
//     printf("\nSelect Operation: ");
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
//       display();
//       break;
//     case 4:
//       return 0;
//       break;
//     default:
//       printf("Invalid Operation\n");
//       break;
//     }
//   } while (1);
// }

// // 3. Paranthesis Matching
// #include <stdio.h>
// #include <string.h>
// char stack[100];
// int top = -1;

// int main()
// {
//   char exp[100];
//   scanf("%s", exp);
//   int len = strlen(exp);

//   for (int i = 0; i < len; i++)
//   {
//     if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
//     {
//       stack[++top] = exp[i];
//     }
//     else if (exp[i] == ')')
//     {
//       if (top == -1 || stack[top] != '(')
//       {
//         printf("Invalid");
//         return 1;
//       }
//       else
//         top--;
//     }
//     else if (exp[i] == ']')
//     {
//       if (top == -1 || stack[top] != '[')
//       {
//         printf("Invalid");
//         return 1;
//       }
//       else
//         top--;
//     }
//     else if (exp[i] == '}')
//     {
//       if (top == -1 || stack[top] != '{')
//       {
//         printf("Invalid");
//         return 1;
//       }
//       else
//         top--;
//     }
//     else
//     {
//       continue;
//     }
//   }

//   if (top == -1)
//     printf("Valid");
//   else
//     printf("Invalid");
//   printf("\n");
// }

// // 4. Paranthesis Matching (Switch)
// #include <stdio.h>
// #include <string.h>
// char stack[100];
// int top = -1;

// int main()
// {
//   char exp[100];
//   scanf("%s", exp);
//   int len = strlen(exp);

//   for (int i = 0; i < len; i++)
//   {
//     switch (exp[i])
//     {
//     case '(':
//       stack[++top] = exp[i];
//       break;
//     case ')':
//       if (top == -1 || stack[top] != '(')
//       {
//         printf("Invalid");
//         return 0;
//       }
//       else
//         top--;
//       break;
//     case '[':
//       stack[++top] = exp[i];
//       break;
//     case ']':
//       if (top == -1 || stack[top] != '[')
//       {
//         printf("Invalid");
//         return 0;
//       }
//       else
//         top--;
//       break;
//     case '{':
//       stack[++top] = exp[i];
//       break;
//     case '}':
//       if (top == -1 || stack[top] != '{')
//       {
//         printf("Invalid");
//         return 0;
//       }
//       else
//         top--;
//       break;
//     default:
//       continue;
//       ;
//     }
//   }

//   if (top == -1)
//     printf("Valid");
//   else
//     printf("Invalid");
//   printf("\n");
// }

// #include <stdio.h>
// const int size = 100;
// char stack[size];
// int top = -1;

// int main(void)
// {
//   char exp[size];
//   fgets(exp, size, stdin);
//   exp[size - 1] = '\0';

//   for (int i = 0; i < size; i++)
//   {
//     if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
//     {
//       stack[++top] = exp[i];
//     }
//     else if (exp[i] == ')')
//     {
//       if (top == -1 || stack[top] != '(')
//       {
//         printf("Invalid");
//       }
//       else
//         top--;
//     }
//     else if (exp[i] == ']')
//     {
//       if (top == -1 || stack[top] != '[')
//       {
//         printf("Invalid");
//       }
//       else
//         top--;
//     }
//     else if (exp[i] == '}')
//     {
//       if (top == -1 || stack[top] != '{')
//       {
//         printf("Invalid");
//       }
//       else
//         top--;
//     }
//   }
//   if (top == -1)
//     printf("Valid");
//   else
//     printf("Invalid");
// }

// // 2
// #include <stdio.h>
// #include <string.h>
// const int size = 100;
// char stack[size];
// int top = -1;
// void push(char x)
// {
//   if (top >= size - 1)
//     printf("Stack Overflow\n");
//   else
//     stack[++top] = x;
// }

// char pop()
// {
//   if (top == -1)
//     return '\0';
//   else
//     return stack[top--];
// }

// char peek()
// {
//   if (top == -1)
//     return '\0';
//   else
//     return stack[top];
// }

// int isOperator(char x)
// {
//   if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
//     return 1;
//   else
//     return 0;
// }

// int precedence(char x)
// {
//   switch (x)
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
// int main(void)
// {
//   char infix[size];
//   fgets(infix, size, stdin);

//   infix[strlen(infix)] = '\0';

//   for (int i = 0; infix[i] != '\0'; i++)
//   {
//     if (infix[i] == ' ' || infix[i] == '\t')
//       continue;
//     if ((infix[i] >= '0' && infix[i] <= '9') || (infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
//     {
//       printf("%c", infix[i]);
//     }
//     else if (infix[i] == '(')
//     {
//       push(infix[i]);
//     }
//     else if (infix[i] == ')')
//     {
//       while (top != -1 && peek() != '(')
//       {
//         printf("%c", pop());
//       }
//       pop();
//     }
//     else if (isOperator(infix[i]))
//     {
//       while (top != -1 && precedence(peek()) >= precedence(infix[i]))
//       {
//         printf("%c", pop());
//       }
//       push(infix[i]);
//     }
//   }

//   while (top != -1)
//     printf("%c", pop());
// }

