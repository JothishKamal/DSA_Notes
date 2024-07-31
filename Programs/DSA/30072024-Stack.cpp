// #include <stdio.h>

// const int size = 5;
// typedef struct
// {
//   char name[100];
//   int age;
//   float cgpa;
// } student;
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
//     printf("Popped element: %s %d %f\n", stack[top].name, stack[top].age, stack[top].cgpa);
//   }
// }

// void display()
// {
//   for (int i = top; i >= 0; i--)
//     printf("%s %d %f\n", stack[i].name, stack[i].age, stack[i].cgpa);
// }

// int main(void)
// {
//   int ch;
//   bool loop = 1;
//   do
//   {
//     printf("1. Push");
//     printf("\n2. Pop");
//     printf("\n3. Display");
//     printf("\n4. Exit");
//     printf("\nEnter your choice: ");
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
//       loop = 0;
//       break;
//     default:
//       break;
//     }
//   } while (loop);
// }

#include <stdio.h>

const int size = 100;
char stack[size];
int top = -1;

int main(void)
{
  char exp[100];
  scanf("%s", exp);
  int len = 0;
  for (len = 0; exp[len] != '\0'; len++)
    ;

  for (int i = 0; i < len; i++)
  {
    if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
    {
      if (top >= size - 1)
      {
        printf("Stack Overflow\n");
        return 1;
      }
      else
      {
        stack[++top] = exp[i];
      }
    }
    else if (exp[i] == ')')
    {
      if (top == -1 || stack[top] != '(')
      {
        printf("Invalid\n");
        return 1;
      }
      else
      {
        top--;
      }
    }
    else if (exp[i] == ']')
    {
      if (top == -1 || stack[top] != '[')
      {
        printf("Invalid\n");
        return 1;
      }
      else
      {
        top--;
      }
    }
    else if (exp[i] == '}')
    {
      if (top == -1 || stack[top] != '{')
      {
        printf("Invalid\n");
        return 1;
      }
      else
      {
        top--;
      }
    }
    else
    {
      continue;
    }
  }

  if (top == -1)
  {
    printf("Valid\n");
  }
  else
  {
    printf("Invalid\n");
  }

  return 0;
}
