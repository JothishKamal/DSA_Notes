// int Stack
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

// Parantheses Matching
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

// Infix to Postfix
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

// Evaluation of postfix
#include <stdio.h>
#include <ctype.h>
char postfix[100];
int stack[100];
int top = -1;
int i = 0;

void push(int c);
int pop();

int main()
{
  int first, second;
  int res;
  printf("Enter the postfix expression to be evaluated (with space between numbers and operators and a number and a 2 digit number) : ");
  scanf(" %[^\n]", postfix);
  while (postfix[i] != '\0')
  {
    if (isdigit(postfix[i]))
    {
      int num = 0;
      while (isdigit(postfix[i]))
      {
        num = num * 10 + (postfix[i] - '0');
        i++;
      }
      push(num);
    }
    else if (isspace(postfix[i]))
    {
      i++;
      continue;
    }
    else
    {
      second = pop();
      first = pop();
      switch (postfix[i])
      {
      case '+':
        res = first + second;
        break;
      case '-':
        res = first - second;
        break;
      case '*':
        res = first * second;
        break;
      case '/':
        res = first / second;
        break;
      }
      push(res);
    }
    i++;
  }
  printf("Result : %d", pop());
  return 0;
}

void push(int c)
{
  if (top >= 99)
  {
    printf("Overflow");
  }
  top++;
  stack[top] = c;
}
int pop()
{
  if (top == -1)
  {
    printf("Underflow");
  }
  else
  {
    int c = stack[top];
    top--;
    return c;
  }
}

// Infix to Prefix
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

// Tower of Hanoi
char A = 'A', B = 'B', C = 'C';
int n;
#include <stdio.h>

void TOH(int n, char from, char to, char aux)
{
  if (n == 1)
  {
    printf("%c -> %c\n", from, to);
    return;
  }
  TOH(n - 1, from, aux, to);
  printf("%c -> %c\n", from, to);
  TOH(n - 1, aux, to, from);
}

int main()
{
  printf("Enter the number of disks : ");
  scanf("%d", &n);
  TOH(n, A, C, B);
  return 0;
}

// Int Queue
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

// Floating Front Queue
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

// Circular Queue
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

// Double Ended queue
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

// List (int)
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
printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your
choice: ");
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

// Stack (Linked List Implementation)
#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[100];
  int age;
  float CGPA;
};

struct node
{
  struct student data;
  struct node *next;
} *top = NULL;

void push()
{
  struct student x;
  scanf(" %[^\n]", x.name);
  scanf("%d", &x.age);
  scanf("%f", &x.CGPA);
  struct node *new = (struct node *)malloc(sizeof(struct node));
  if (new != NULL)
  {
    new->data = x;
    new->next = top;
    top = new;
  }
  else
  {
    printf("Overflow\n");
  }
}

void pop()
{
  if (top != NULL)
  {
    struct node *temp = top;
    printf("%s %d %.2f\n", top->data.name, top->data.age, top->data.CGPA);
    top = top->next;
    free(temp);
  }
  else
  {
    printf("Underflow\n");
  }
}

void display()
{
  struct node *p = top;
  while (p != NULL)
  {
    printf("%s %d %.2f\n", p->data.name, p->data.age, p->data.CGPA);
    p = p->next;
  }
}

int main()
{
  int choice = 0;
  while (choice != 4)
  {
    printf("1. Push\n2. Pop\n3. Display\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
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
      break;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}

// Queue (Linked List Implementation)
#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[100];
  int age;
  float CGPA;
};

struct node
{
  struct student data;
  struct node *next;
} *front = NULL, *rear = NULL;

void enqueue()
{
  struct student x;
  scanf(" %[^\n]", x.name);
  scanf("%d", &x.age);
  scanf("%f", &x.CGPA);
  struct node *new = (struct node *)malloc(sizeof(struct node));
  if (new != NULL)
  {
    new->data = x;
    new->next = NULL;
    if (rear == NULL)
    {
      front = rear = new;
    }
    else
    {
      rear->next = new;
      rear = new;
    }
  }
  else
  {
    printf("Overflow\n");
  }
}

void dequeue()
{
  if (front != NULL)
  {
    struct node *temp = front;
    printf("%s %d %.2f\n", front->data.name, front->data.age, front->data.CGPA);
    front = front->next;
    if (front == NULL)
    {
      rear = NULL;
    }
    free(temp);
  }
  else
  {
    printf("Underflow\n");
  }
}

void display()
{
  struct node *p = front;
  while (p != NULL)
  {
    printf("%s %d %.2f\n", p->data.name, p->data.age, p->data.CGPA);
    p = p->next;
  }
}

int main()
{
  int choice = 0;
  while (choice != 4)
  {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
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
      break;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}

// Singly Linked List
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

    struct node *temp = pos;
    prev->next = pos->next;
    free(temp);
  }
  else
  {
    printf("Element not found\n");
  }
}

void display()
{
  struct node *p = head;
  if (p == NULL)
    printf("List is empty\n");
  else
  {
    while (p != NULL)
    {
      printf("%d ", p->data);
      p = p->next;
    }
    printf("\n");
  }
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

// Circular Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
} *head = NULL, *last;

struct node *findPosition(int x)
{
  struct node *pos = head;
  do
  {
    if (pos->data == x)
      return pos;
    pos = pos->next;
  } while (pos != head);
  return NULL;
}

void insert()
{
  int x, choice;
  printf("Enter data: ");
  scanf("%d", &x);
  struct node *new = (struct node *)malloc(sizeof(struct node));
  if (new == NULL)
  {
    printf("List is full\n");
    return;
  }
  new->data = x;

  if (head == NULL)
  {
    head = new;
    new->next = head;
    last = new;
  }
  else
  {
    printf("1. Insert at beginning\n2. Insert at end\n3. Insert after specific element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      new->next = head;
      last->next = new;
      head = new;
    }
    else if (choice == 2)
    {
      last->next = new;
      new->next = head;
      last = new;
    }
    else if (choice == 3)
    {
      int ele;
      printf("Enter the element after which to insert: ");
      scanf("%d", &ele);
      struct node *pos = findPosition(ele);
      if (pos != NULL)
      {
        new->next = pos->next;
        pos->next = new;
        if (pos == last)
          last = new;
      }
      else
      {
        printf("Element not found\n");
      }
    }
    else
    {
      printf("Invalid choice\n");
    }
  }
}

void delete()
{
  int x;
  scanf("%d", &x);
  if (head == NULL)
  {
    printf("List is empty\n");
    return;
  }
  struct node *temp = head, *prev = NULL;
  if (head->data == x)
  {
    if (head == last)
    {
      free(head);
      head = last = NULL;
    }
    else
    {
      last->next = head->next;
      head = head->next;
      free(temp);
    }
  }
  else
  {
    while (temp->next != head && temp->data != x)
    {
      prev = temp;
      temp = temp->next;
    }
    if (temp->data == x)
    {
      prev->next = temp->next;
      if (temp == last)
        last = prev;
      free(temp);
    }
    else
    {
      printf("Element not found\n");
    }
  }
}

void display()
{
  if (head == NULL)
  {
    printf("List is empty\n");
    return;
  }
  struct node *temp = head;
  do
  {
    printf("%d ", temp->data);
    temp = temp->next;
  } while (temp != head);
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
    default:
      printf("Invalid choice\n");
    }
  }
}

// Doubly Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
} *head = NULL, *last;

struct node *findPosition(int x)
{
  struct node *pos = head;
  while (pos != NULL)
  {
    if (pos->data == x)
      return pos;
    pos = pos->next;
  }
  return NULL;
}

void insert()
{
  int x, choice;
  printf("Enter data: ");
  scanf("%d", &x);
  struct node *new = (struct node *)malloc(sizeof(struct node));
  if (new == NULL)
  {
    printf("List is full\n");
    return;
  }
  new->data = x;
  new->next = NULL;
  new->prev = NULL;

  if (head == NULL)
  {
    head = new;
    last = new;
  }
  else
  {
    printf("1. Insert at beginning\n2. Insert at end\n3. Insert after specific element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      new->next = head;
      head->prev = new;
      head = new;
    }
    else if (choice == 2)
    {
      last->next = new;
      new->prev = last;
      last = new;
    }
    else if (choice == 3)
    {
      int ele;
      printf("Enter the element after which to insert: ");
      scanf("%d", &ele);
      struct node *pos = findPosition(ele);
      if (pos != NULL)
      {
        new->next = pos->next;
        if (pos->next != NULL)
          pos->next->prev = new;
        new->prev = pos;
        pos->next = new;
        if (pos == last)
          last = new;
      }
      else
      {
        printf("Element not found\n");
      }
    }
    else
    {
      printf("Invalid choice\n");
    }
  }
}

void delete()
{
  int x;
  scanf("%d", &x);
  if (head == NULL)
  {
    printf("List is empty\n");
    return;
  }
  struct node *temp = head;
  if (head->data == x)
  {
    if (head == last)
    {
      free(head);
      head = last = NULL;
    }
    else
    {
      head = head->next;
      head->prev = NULL;
      free(temp);
    }
  }
  else
  {
    while (temp != NULL && temp->data != x)
    {
      temp = temp->next;
    }
    if (temp != NULL)
    {
      if (temp == last)
      {
        last = last->prev;
        last->next = NULL;
      }
      else
      {
        temp->prev->next = temp->next;
        if (temp->next != NULL)
          temp->next->prev = temp->prev;
      }
      free(temp);
    }
    else
    {
      printf("Element not found\n");
    }
  }
}

void display()
{
  struct node *temp = head;
  if (temp == NULL)
  {
    printf("List is empty\n");
    return;
  }
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
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
    default:
      printf("Invalid choice\n");
    }
  }
}
