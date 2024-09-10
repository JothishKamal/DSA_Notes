// 1. int Stack
#include <stdio.h>

const int size = 5;
int stack[size];
int top = -1;

void push()
{
  if (top >= size - 1)
    printf("Stack Overflow\n");
  else
  {
    int x;
    scanf("%d", &x);
    stack[++top] = x;
  }
}

void pop()
{
  if (top == -1)
    printf("Stack Underflow\n");
  else
  {
    printf("Popped Element: %d\n", stack[top--]);
  }
}

void display()
{
  for (int i = top; i >= 0; i--)
    printf("%d\n", stack[i]);
}

int main(void)
{
  bool loop = true;
  do
  {
    int ch;
    printf("1. Push");
    printf("\n2. Pop");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("\nSelect Operation: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      loop = false;
      break;
    default:
      printf("Invalid Operation");
      break;
    }
  } while (loop);
}

// 2. Stack with Struct
#include <stdio.h>

typedef struct
{
  char name[20];
  int age;
  float cgpa;
} student;

const int size = 5;
student stack[size];
int top = -1;

void push()
{
  if (top >= size - 1)
    printf("Stack Overflow\n");
  else
  {
    student x;
    scanf("%s", x.name);
    scanf("%d", &x.age);
    scanf("%f", &x.cgpa);

    stack[++top] = x;
  }
}

void pop()
{
  if (top == -1)
    printf("Stack Underflow\n");
  else
  {
    printf("Popped Element: %s %d %f\n", stack[top].name,
           stack[top].age, stack[top].cgpa);
    top--;
  }
}

void display()
{
  for (int i = top; i >= 0; i--)
    printf("%s %d %f\n", stack[i].name, stack[i].age,
           stack[i].cgpa);
}

int main()
{
  do
  {
    int ch;
    printf("1. Push");
    printf("\n2. Pop");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("\nSelect Operation: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Invalid Operation\n");
      break;
    }
  } while (1);
}

// 3. Parantheses Matching
#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;

int main()
{
  char exp[100];
  scanf("%s", exp);
  int len = strlen(exp);

  for (int i = 0; i < len; i++)
  {
    if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
    {
      stack[++top] = exp[i];
    }
    else if (exp[i] == ')')
    {
      if (top == -1 || stack[top] != '(')
      {
        printf("Invalid");
        return 1;
      }
      else
        top--;
    }
    else if (exp[i] == ']')
    {
      if (top == -1 || stack[top] != '[')
      {
        printf("Invalid");
        return 1;
      }
      else
        top--;
    }
    else if (exp[i] == '}')
    {
      if (top == -1 || stack[top] != '{')
      {
        printf("Invalid");
        return 1;
      }
      else
        top--;
    }
    else
    {
      continue;
    }
  }

  if (top == -1)
    printf("Valid");
  else
    printf("Invalid");
  printf("\n");
}

// 4. Infix to Postfix
#include <stdio.h>
const int size = 100;
char stack[100];
int top = -1;

void push(char c)
{
  if (top >= size - 1)
  {
    printf("Stack Overflow\n");
    return;
  }
  stack[++top] = c;
}

char pop()
{
  if (top < 0)
  {
    printf("Stack Underflow\n");
    return '\0';
  }
  return stack[top--];
}

char peek()
{
  if (top < 0)
  {
    return '\0';
  }
  return stack[top];
}

int precedence(char op)
{
  switch (op)
  {
  case '+':
  case '-':
    return 1;
  case '*':
  case '/':
    return 2;
  case '^':
    return 3;
  default:
    return 0;
  }
}

int isOperator(char c)
{
  return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

void infixToPostfix(const char *infix, char *postfix)
{
  int k = 0;

  for (int i = 0; infix[i] != '\0'; i++)
  {
    if (infix[i] == ' ' || infix[i] == '\t')
    {
      continue;
    }
    if ((infix[i] >= '0' && infix[i] <= '9') || (infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
    {
      postfix[k++] = infix[i];
    }
    else if (infix[i] == '(')
    {
      push(infix[i]);
    }
    else if (infix[i] == ')')
    {
      while (top != -1 && peek() != '(')
      {
        postfix[k++] = pop();
      }
      pop();
    }
    else if (isOperator(infix[i]))
    {
      while (top != -1 && precedence(peek()) >=
                              precedence(infix[i]))
      {
        postfix[k++] = pop();
      }
      push(infix[i]);
    }
  }

  while (top != -1)
  {
    postfix[k++] = pop();
  }

  postfix[k] = '\0';
}

int main()
{
  char infix[size], postfix[size];

  fgets(infix, size, stdin);
  infix[size - 1] = '\0';

  infixToPostfix(infix, postfix);

  printf("Postfix expression: %s\n", postfix);

  return 0;
}

// 5. Infix to Prefix
#include <stdio.h>
#include <string.h>

const int size = 100;
char stack[size];
int top = -1;

void push(char c)
{
  if (top >= size - 1)
  {
    printf("Stack Overflow\n");
    return;
  }
  stack[++top] = c;
}

char pop()
{
  if (top < 0)
  {
    printf("Stack Underflow\n");
    return '\0';
  }
  return stack[top--];
}

char peek()
{
  if (top < 0)
  {
    return '\0';
  }
  return stack[top];
}

int precedence(char op)
{
  switch (op)
  {
  case '+':
  case '-':
    return 1;
  case '*':
  case '/':
    return 2;
  case '^':
    return 3;
  default:
    return 0;
  }
}

int isOperator(char c)
{
  return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

void reverseString(char *str)
{
  int n = strlen(str);
  for (int i = 0; i < n / 2; i++)
  {
    char temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
}

void infixToPrefix(const char *infix, char *prefix)
{
  char reversedInfix[size], temp[size];
  int len = strlen(infix);

  strcpy(reversedInfix, infix);
  reverseString(reversedInfix);

  for (int i = 0; i < len; i++)
  {
    if (reversedInfix[i] == '(')
      reversedInfix[i] = ')';
    else if (reversedInfix[i] == ')')
      reversedInfix[i] = '(';
  }

  int k = 0;
  for (int i = 0; reversedInfix[i] != '\0'; i++)
  {
    if (reversedInfix[i] == ' ' || reversedInfix[i] == '\t')
    {
      continue;
    }
    if ((reversedInfix[i] >= '0' && reversedInfix[i] <= '9') ||
        (reversedInfix[i] >= 'a' && reversedInfix[i] <= 'z') ||
        (reversedInfix[i] >= 'A' && reversedInfix[i] <= 'Z'))
    {
      temp[k++] = reversedInfix[i];
    }
    else if (reversedInfix[i] == '(')
    {
      push(reversedInfix[i]);
    }
    else if (reversedInfix[i] == ')')
    {
      while (top != -1 && peek() != '(')
      {
        temp[k++] = pop();
      }
      pop();
    }
    else if (isOperator(reversedInfix[i]))
    {
      while (top != -1 && precedence(peek()) >
                              precedence(reversedInfix[i]))
      {
        temp[k++] = pop();
      }
      push(reversedInfix[i]);
    }
  }

  while (top != -1)
  {
    temp[k++] = pop();
  }

  temp[k] = '\0';

  reverseString(temp);
  strcpy(prefix, temp);
}

int main()
{
  char infix[size], prefix[size];

  fgets(infix, size, stdin);
  infix[size - 1] = '\0';

  infixToPrefix(infix, prefix);

  printf("Prefix expression: %s\n", prefix);

  return 0;
}

// 1. Int Queue
#include <stdio.h>
const int size = 5;
int queue[size];
int front = -1, rear = -1;

void enqueue()
{
  int x;
  scanf("%d", &x);
  if (rear >= size - 1)
    printf("Queue is full\n");
  else if (front == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear++;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (front == -1)
    printf("Queue is empty\n");
  else if (front == rear)
  {
    printf("Deleted Element: %d\n", queue[front]);
    front = rear = -1;
  }
  else
  {
    printf("Deleted Element: %d\n", queue[front]);
    for (int i = front + 1; i <= rear; i++)
    {
      queue[i - 1] = queue[i];
    }
    rear--;
  }
}

void display()
{
  printf("Queue: ");
  for (int i = front; i <= rear; i++)
  {
    printf("%d ", queue[i]);
  }
  printf("\n");
}

int main(void)
{
  do
  {
    int ch;
    printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation:
");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      continue;
    }
  } while (1);
}

// 2. Character Queue
#include <stdio.h>
const int size = 5;
char queue[size];
int front = -1, rear = -1;

void enqueue()
{
  char x;
  scanf("\n");
  scanf("%c", &x);
  if (rear >= size - 1)
    printf("Queue is full\n");
  else if (front == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear++;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (front == -1)
    printf("Queue is empty\n");
  else if (front == rear)
  {
    printf("Deleted Element: %c\n", queue[front]);
    front = rear = -1;
  }
  else
  {
    printf("Deleted Element: %c\n", queue[front]);
    for (int i = front + 1; i <= rear; i++)
    {
      queue[i - 1] = queue[i];
    }
    rear--;
  }
}

void display()
{
  printf("Queue: ");
  for (int i = front; i <= rear; i++)
  {
    printf("%c ", queue[i]);
  }
  printf("\n");
}

int main(void)
{
  do
  {
    int ch;
    printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation:
");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      continue;
    }
  } while (1);
}

// 3. String Queue
#include <stdio.h>
#include <string.h>
const int size = 5;
char queue[size][100];
int front = -1, rear = -1;

void enqueue()
{
  char x[100];
  scanf("\n");
  scanf("%s", x);
  if (rear >= size - 1)
    printf("Queue is full\n");
  else if (front == -1)
  {
    front = rear = 0;
    // queue[rear] = x;
    strcpy(queue[rear], x);
  }
  else
  {
    rear++;
    strcpy(queue[rear], x);
  }
}

void dequeue()
{
  if (front == -1)
    printf("Queue is empty\n");
  else if (front == rear)
  {
    printf("Deleted Element: %s\n", queue[front]);
    front = rear = -1;
  }
  else
  {
    printf("Deleted Element: %s\n", queue[front]);
    for (int i = front + 1; i <= rear; i++)
    {
      strcpy(queue[i - 1], queue[i]);
    }
    rear--;
  }
}

void display()
{
  printf("Queue: ");
  for (int i = front; i <= rear; i++)
  {
    printf("%s ", queue[i]);
  }
  printf("\n");
}

int main(void)
{
  do
  {
    int ch;
    printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      continue;
    }
  } while (1);
}

// 4. Struct Queue
#include <stdio.h>

typedef struct
{
  int rno;
  char name[20];
  float cgpa;
} Student;

const int size = 5;
Student queue[size];
int front = -1, rear = -1;

void enqueue()
{
  Student x;
  scanf("%d", &x.rno);
  scanf("%s", x.name);
  scanf("%f", &x.cgpa);
  if (rear >= size - 1)
    printf("Queue is full\n");
  else if (front == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear++;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (front == -1)
    printf("Queue is empty\n");
  else if (front == rear)
  {
    printf("Deleted Element: %d %s %.2f\n", queue[front].rno, queue[front].name, queue[front].cgpa);
    front = rear = -1;
  }
  else
  {
    printf("Deleted Element: %d %s %.2f\n", queue[front].rno, queue[front].name, queue[front].cgpa);
    for (int i = front + 1; i <= rear; i++)
    {
      queue[i - 1] = queue[i];
    }
    rear--;
  }
}

void display()
{
  printf("Queue: \n");
  for (int i = front; i <= rear; i++)
  {
    printf("%d %s %.2f\n", queue[i].rno, queue[i].name, queue[i].cgpa);
  }
}

int main(void)
{
  do
  {
    int ch;
    printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      continue;
    }
  } while (1);
}

// 5. Floating Front Queue
#include <stdio.h>
const int size = 5;
int queue[5];
int front = -1, rear = -1;

void enqueue()
{
  int x;
  scanf("%d", &x);
  if (front == 0 && rear >= size - 1)
    printf("Queue is full\n");
  else if (front == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear++;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (front == -1 && front == rear)
    printf("Queue is empty\n");
  if (front == rear)
  {
    printf("Deleted Element: %d\n", queue[front]);
    front = rear = -1;
  }
  else
  {
    printf("Deleted Element: %d\n", queue[front]);
    if (front < rear)
      front++;
  }
}

void display()
{
  printf("Queue: ");
  if (!(front == -1 && front == rear))
  {
    for (int i = front; i <= rear; i++)
    {
      printf("%d ", queue[i]);
    }
    printf("\n");
  }
  else
    printf("Empty\n");
}

int main(void)
{
  do
  {
    int ch;
    printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      continue;
    }
  } while (1);
}

// 6. Circular Queue
#include <stdio.h>
const int size = 5;
int queue[5];
int front = -1, rear = -1;

void enqueue()
{
  int x;
  scanf("%d", &x);
  if (front == (rear + 1) % size)
    printf("Queue is full\n");
  else if (front == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear = (rear + 1) % size;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (front == -1)
    printf("Queue is empty\n");
  else if (front == rear)
  {
    printf("Deleted Element: %d\n", queue[front]);
    front = rear = -1;
  }
  else
  {
    printf("Deleted Element: %d\n", queue[front]);
    front = (front + 1) % size;
  }
}

void display()
{
  if (front == -1)
  {
    printf("Queue is empty\n");
    return;
  }

  printf("Queue: ");
  int i = front;
  while (i != rear)
  {
    printf("%d ", queue[i]);
    i = (i + 1) % size;
  }
  printf("%d\n", queue[rear]);
}

int main(void)
{
  do
  {
    int ch;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nChoose Operation: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      continue;
    }
  } while (1);
}

// 7. Double Ended queue
#include <stdio.h>
#define size 5
int dequeue[size];
int f = -1, r = -1;

void addFront();
void addRear();
void delFront();
void delRear();
void Size();
void isEmpty();

int main()
{
  int choice = 0;
  printf("\n1. addFront\n");
  printf("\n2. addRear\n");
  printf("\n3. delFront\n");
  printf("\n4. delRear\n");
  printf("\n5. Size\n");
  printf("\n6. isEmpty\n");
  printf("\n7. Exit\n");
  while (choice != 7)
  {
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      addFront();
      break;
    case 2:
      addRear();
      break;
    case 3:
      delFront();
      break;
    case 4:
      delRear();
      break;
    case 5:
      Size();
      break;
    case 6:
      isEmpty();
      break;
    case 7:
      printf("Exiting");
      break;
    default:
      printf("Invalid choice");
    }
  }
  return 0;
}
void addFront()
{
  int x;
  printf("Enter element : ");
  scanf("%d", &x);
  if (f == (r + 1) % size)
  {
    printf("Overflow");
  }
  else if (f == -1)
  {
    f = r = 0;
    dequeue[f] = x;
  }
  else
  {
    if (f == 0)
    {
      f = size - 1;
      dequeue[f] = x;
    }
    else
    {
      f--;
      dequeue[f] = x;
    }
  }
}
void addRear()
{
  int x;
  printf("Enter element : ");
  scanf("%d", &x);
  if (f == (r + 1) % size)
  {
    printf("Overflow");
  }
  else if (f == -1)
  {
    f = r = 0;
    dequeue[r] = x;
  }
  else
  {
    r = (r + 1) % size;
    dequeue[r] = x;
  }
}
void delFront()
{
  if (f == -1)
  {
    printf("Underflow");
  }
  else if (f == r)
  {
    printf("%d", dequeue[f]);
    f = r = -1;
  }
  else
  {
    printf("%d", dequeue[f]);
    f = (f + 1) % size;
  }
}
void delRear()
{
  if (f == -1)
  {
    printf("Underflow");
  }
  else if (f == r)
  {
    printf("%d", dequeue[r]);
    f = r = -1;
  }
  else
  {
    if (r == 0)
    {
      printf("%d", dequeue[r]);
      r = size - 1;
    }
    else
    {
      printf("%d", dequeue[r]);
      r--;
    }
  }
}
void Size()
{
  if (f == -1)
  {
    printf("Count : 0");
  }
  else
  {
    int i = f, count = 1;
    for (i = f; i != r; i = (i + 1) % size)
    {
      count += 1;
    }
    printf("Count : %d", count);
  }
}
void isEmpty()
{
  if (f == -1)
  {
    printf("Empty");
  }
  else
  {
    printf("Not empty");
  }
}

// 9. List (int)
#include <stdio.h>
#define size 5
int list[size];
int lc = -1;

void insert()
{
  int x;
  scanf("%d", &x);
  if (lc >= size - 1)
  {
    printf("List is full\n");
  }
  else
  {
    list[++lc] = x;
  }
}

void delete()
{
  if (lc == -1)
  {
    printf("List is empty\n");
  }
  else
  {
    int x, elementIdx, flag = 0;
    scanf("%d", &x);
    for (int i = 0; i <= lc; i++)
      if (list[i] == x)
      {
        elementIdx = i;
        flag = 1;
        break;
      }
    if (flag == 0)
    {
      printf("Element not in list\n");
    }
    else
    {
      printf("Deleted Element: %d\n", list[elementIdx]);
      for (int i = elementIdx + 1; i <= lc; i++)
        list[i - 1] = list[i];
      lc--;
    }
  }
}

void display()
{
  for (int i = 0; i <= lc; i++)
    printf("%d ", list[i]);
  printf("\n");
}

int main(void)
{
  int ch;
  do
  {
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      printf("Invalid choice\n");
      continue;
      ;
    }
  } while (1);
}

// 10. List (char)
#include <stdio.h>
#define size 5
char list[size];
int lc = -1;

void insert()
{
  char x;
  scanf("\n");
  scanf("%c", &x);
  if (lc >= size - 1)
  {
    printf("List is full\n");
  }
  else
  {
    list[++lc] = x;
  }
}

void delete()
{
  if (lc == -1)
  {
    printf("List is empty\n");
  }
  else
  {
    char x;
    int elementIdx, flag = 0;
    scanf("\n");
    scanf("%c", &x);
    for (int i = 0; i <= lc; i++)
      if (list[i] == x)
      {
        elementIdx = i;
        flag = 1;
        break;
      }
    if (flag == 0)
    {
      printf("Element not in list\n");
    }
    else
    {
      printf("Deleted Element: %c\n", list[elementIdx]);
      for (int i = elementIdx + 1; i <= lc; i++)
        list[i - 1] = list[i];
      lc--;
    }
  }
}

void display()
{
  for (int i = 0; i <= lc; i++)
    printf("%c ", list[i]);
  printf("\n");
}

int main(void)
{
  int ch;
  do
  {
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      printf("Invalid choice\n");
      continue;
      ;
    }
  } while (1);
}

// 11. List (string)
#include <stdio.h>
#include <string.h>
#define size 5
char list[size][100];
int lc = -1;

void insert()
{
  char x[100];
  scanf("\n");
  scanf("%s", x);
  if (lc >= size - 1)
  {
    printf("List is full\n");
  }
  else
  {
    strcpy(list[++lc], x);
  }
}

void delete()
{
  if (lc == -1)
  {
    printf("List is empty\n");
  }
  else
  {
    char x[100];
    int elementIdx, flag = 0;
    scanf("\n");
    scanf("%s", x);
    for (int i = 0; i <= lc; i++)
      if (strcmp(list[i], x) == 0)
      {
        elementIdx = i;
        flag = 1;
        break;
      }
    if (flag == 0)
    {
      printf("Element not in list\n");
    }
    else
    {
      printf("Deleted Element: %s\n", list[elementIdx]);
      for (int i = elementIdx + 1; i <= lc; i++)
        strcpy(list[i - 1], list[i]);
      lc--;
    }
  }
}

void display()
{
  for (int i = 0; i <= lc; i++)
    printf("%s ", list[i]);
  printf("\n");
}

int main(void)
{
  int ch;
  do
  {
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      printf("Invalid choice\n");
      continue;
      ;
    }
  } while (1);
}

// 11. List (string)
#include <stdio.h>
typedef struct
{
  int rno;
  char name[20];
  float cgpa;
} student;

#define size 5
student list[size];
int lc = -1;

void insert()
{
  student x;
  scanf("\n");
  scanf("%d", &x.rno);
  scanf("%s", x.name);
  scanf("%f", &x.cgpa);
  if (lc >= size - 1)
  {
    printf("List is full\n");
  }
  else
  {
    list[++lc] = x;
  }
}

void delete()
{
  if (lc == -1)
  {
    printf("List is empty\n");
  }
  else
  {
    student x;
    int elementIdx, flag = 0;
    scanf("\n");
    scanf("%d", &x.rno);
    scanf("%s", x.name);
    scanf("%f", &x.cgpa);
    for (int i = 0; i <= lc; i++)
      if (list[i].rno == x.rno)
      {
        elementIdx = i;
        flag = 1;
        break;
      }
    if (flag == 0)
    {
      printf("Element not in list\n");
    }
    else
    {
      printf("Deleted Element: %d %s %.2f\n", list[elementIdx].rno, list[elementIdx].name, list[elementIdx].cgpa);
      for (int i = elementIdx + 1; i <= lc; i++)
        list[i - 1] = list[i];
      lc--;
    }
  }
}

void display()
{
  for (int i = 0; i <= lc; i++)
    printf("%d %s %.2f\n", list[i].rno, list[i].name, list[i].cgpa);
}

int main(void)
{
  int ch;
  do
  {
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      printf("Invalid choice\n");
      continue;
      ;
    }
  } while (1);
}

// 1. Single Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
} *new, *head = NULL, *last;

struct node *findPosition(int x)
{
  struct node *pos = head;
  while (pos != NULL && pos->data != x)
    pos = pos->next;
  return pos;
}

struct node *findPrev(int x)
{
  struct node *prev = head;
  while (prev != NULL && (prev->next)->data != x)
    prev = prev->next;
  return prev;
}

struct node *findLast()
{
  last = head;
  while (last->next != NULL)
    last = last->next;
  return last;
}

void insert()
{
  int x;
  scanf("%d", &x);
  new = (struct node *)malloc(sizeof(struct node));
  if (new == NULL)
    printf("List is full");
  else if (head == NULL)
  {
    new->data = x;
    new->next = NULL;
    head = new;
  }
  else if (head->next == NULL)
  {
    int ch;
    printf("1. Insert at the beginning\n2. Insert at the end\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      new->data = x;
      new->next = head;
      head = new;
      break;
    case 2:
      new->data = x;
      new->next = NULL;
      head->next = new;
      break;
    default:
      printf("Invalid choice. Please try again\n");
    }
  }
  else
  {
    int ch;
    printf("1. Insert at the beginning\n2. Insert at the end\n3. Insert in between\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      new->data = x;
      new->next = head;
      head = new;
      break;
    case 2:
      last = findLast();
      new->data = x;
      new->next = NULL;
      last->next = new;
      last = new;
      break;
    case 3:
      int ele;
      printf("Enter the element to find: ");
      scanf("%d", &ele);
      struct node *pos = findPosition(ele);
      if (pos != NULL)
      {
        new->data = x;
        new->next = pos->next;
        pos->next = new;
      }
      else
      {
        printf("Element not found\n");
      }
      break;
    default:
      printf("Invalid choice. Please try again\n");
    }
  }
}

void delete()
{
  int x;
  scanf("%d", &x);
  struct node *pos = findPosition(x);
  if (head == NULL)
    printf("List is empty\n");
  else if (pos == head)
  {
    struct node *temp = head;
    head = head->next;
    free(temp);
  }
  else if (pos != NULL)
  {
    struct node *prev = findPrev(x);
    if (prev == NULL)
    {
      struct node *temp = head;
      head = head->next;
      free(temp);
    }
    else
    {
      struct node *temp = pos;
      prev->next = pos->next;
      free(temp);
    }
  }
  else
  {
    printf("Element not found\n");
  }
}

void display()
{
  struct node *p = head;
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  if (p == NULL)
    printf("List is empty\n");
  printf("\n");
}

int main(void)
{
  int ch;
  while (1)
  {
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
      break;
    default:
      break;
    }
  }
}