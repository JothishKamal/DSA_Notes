// // 1. Int Stack
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

//     typedef struct
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

// // 3. Parantheses Matching
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

// // 4. Infix to Postfix
// #include <stdio.h>
// const int size = 100;
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

// void infixToPostfix(const char *infix, char *postfix)
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

// // 5. Infix to Prefix
// #include <stdio.h>
// #include <string.h>

// const int size = 100;
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
//     if ((reversedInfix[i] >= '0' && reversedInfix[i] <= '9') || (reversedInfix[i] >= 'a' && reversedInfix[i] <= 'z') || (reversedInfix[i] >= 'A' && reversedInfix[i] <= 'Z'))
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
//       while (top != -1 && precedence(peek()) > precedence(reversedInfix[i]))
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
