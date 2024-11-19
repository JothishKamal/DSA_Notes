// Stack (int)
#include <stdio.h>
#define size 5
int stack[size];
int top = -1;

void push()
{
  if (top >= size - 1)
  {
    printf("Overflow\n");
  }
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
  {
    printf("Underflow\n");
  }
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

void peek()
{
  if (top == -1)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("Top Element: %d\n", stack[top]);
  }
}

int main(void)
{
  while (1)
  {
    printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
    int ch;
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
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      return 0;
    default:
      printf("Invalid choice\n");
      break;
    }
  }
}

// Stack (Linked List)
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
} *top = NULL;

void push()
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  if (temp == NULL)
  {
    printf("Overflow\n");
  }
  else
  {
    int x;
    scanf("%d", &x);
    temp->data = x;
    temp->next = top;
    top = temp;
  }
}

void pop()
{
  if (top == NULL)
  {
    printf("Underflow\n");
  }
  else
  {
    struct Node *temp = top;
    printf("Popped Element: %d\n", top->data);
    top = top->next;
    free(temp);
  }
}

void display()
{
  struct Node *p = top;
  if (p == NULL)
  {
    printf("Stack is empty\n");
  }
  else
  {
    while (p != NULL)
    {
      printf("%d\n", p->data);
      p = p->next;
    }
  }
}

void peek()
{
  if (top == NULL)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("Top Element: %d\n", top->data);
  }
}

int main(void)
{
  while (1)
  {
    printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
    int ch;
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
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      return 0;
    default:
      printf("Invalid choice\n");
      break;
    }
  }
}

// Parantheses Matching
#include <stdio.h>
#define size 100
char stack[size];
int top = -1;

int main(void)
{
  char ip[100];
  scanf(" %[^\n]", ip);
  for (int i = 0; ip[i] != '\0'; i++)
  {
    if (ip[i] == '(' || ip[i] == '{' || ip[i] == '[')
    {
      stack[++top] = ip[i];
    }
    else if (ip[i] == ')')
    {
      if (top == -1 || stack[top] != '(')
      {
        printf("Invalid");
        return 1;
      }
      else
        top--;
    }
    else if (ip[i] == '}')
    {
      if (top == -1 || stack[top] != '{')
      {
        printf("Invalid");
        return 1;
      }
      else
        top--;
    }
    else if (ip[i] == ']')
    {
      if (top == -1 || stack[top] != '[')
      {
        printf("Invalid");
        return 1;
      }
      else
        top--;
    }
    else
      continue;
  }
  if (top == -1)
    printf("Valid");
  else
    printf("Invalid");
}

// Tower of Hanoi
#include <stdio.h>
char A = 'A', B = 'B', C = 'C';

void toh(int n, char from, char to, char aux)
{
  if (n == 1)
  {
    printf("%c -> %c\n", from, to);
    return;
  }
  toh(n - 1, from, aux, to);
  printf("%c -> %c\n", from, to);
  toh(n - 1, aux, to, from);
}

int main(void)
{
  int n;
  scanf("%d", &n);
  toh(n, A, C, B);
}

// Infix to Postfix
#include <stdio.h>
#define size 100
char stack[size];
int top = -1;

void push(char c)
{
  if (top >= size - 1)
  {
    printf("Overflow\n");
    return;
  }
  else
  {
    stack[++top] = c;
  }
}

char pop()
{
  if (top == -1)
  {
    printf("Underflow\n");
    return '\0';
  }
  else
  {
    return stack[top--];
  }
}

char peek()
{
  if (top == -1)
  {
    return '\0';
  }
  return stack[top];
}

int precedence(char c)
{
  switch (c)
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

void infixToPostfix(char *infix, char *postfix)
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
      while (top != -1 && precedence(peek()) >= precedence(infix[i]))
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
#define size 100
char stack[size];
int top = -1;

int main(void)
{
  char postfix[100];
  scanf(" %[^\n]", postfix);
  for (int i = 0; postfix[i] != '\0'; i++)
  {
    if (postfix[i] == ' ' || postfix[i] == '\t')
    {
      continue;
    }
    if (postfix[i] >= '0' && postfix[i] <= '9')
    {
      stack[++top] = postfix[i] - '0';
    }
    else
    {
      int op2 = stack[top--];
      int op1 = stack[top--];
      switch (postfix[i])
      {
      case '+':
        stack[++top] = op1 + op2;
        break;
      case '-':
        stack[++top] = op1 - op2;
        break;
      case '*':
        stack[++top] = op1 * op2;
        break;
      case '/':
        stack[++top] = op1 / op2;
        break;
      }
    }
  }
  printf("Result: %d\n", stack[top]);
}

// Infix to Prefix
#include <stdio.h>
#include <string.h>
#define size 100
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

// Evaluation of Prefix
#include <stdio.h>
#include <string.h>
#define size 100
char stack[size];
int top = -1;

int main(void)
{
  char prefix[100];
  scanf(" %[^\n]", prefix);
  for (int i = strlen(prefix) - 1; i >= 0; i--)
  {
    if (prefix[i] == ' ' || prefix[i] == '\t')
    {
      continue;
    }
    if (prefix[i] >= '0' && prefix[i] <= '9')
    {
      stack[++top] = prefix[i] - '0';
    }
    else
    {
      int op1 = stack[top--];
      int op2 = stack[top--];
      switch (prefix[i])
      {
      case '+':
        stack[++top] = op1 + op2;
        break;
      case '-':
        stack[++top] = op1 - op2;
        break;
      case '*':
        stack[++top] = op1 * op2;
        break;
      case '/':
        stack[++top] = op1 / op2;
        break;
      }
    }
  }
  printf("Result: %d\n", stack[top]);
}

// Queue
#include <stdio.h>
#define size 10
int queue[size];
int front = -1, rear = -1;

void enqueue()
{
  int x;
  scanf("%d", &x);
  if (rear >= size - 1)
  {
    printf("Overflow\n");
  }
  else if (front == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    queue[++rear] = x;
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
  for (int i = front; i <= rear; i++)
  {
    printf("%d ", queue[i]);
  }
  printf("\n");
}

int main(void)
{
  enqueue();
  display();
  enqueue();
  display();
  enqueue();
  display();
  dequeue();
  display();
  enqueue();
  display();
  dequeue();
  display();
}

// Queue (Linked List Implementation)
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
} *front = NULL, *rear = NULL;

void enqueue()
{
  int x;
  scanf("%d", &x);
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
    printf("Queue is full\n");
}

void dequeue()
{
  if (front != NULL)
  {
    struct node *temp = front;
    printf("Deleted Element: %d\n", front->data);
    front = front->next;
    if (front == NULL)
      rear = NULL;
    free(temp);
  }
  else
    printf("Queue is empty\n");
}

void display()
{
  struct node *p = front;
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main(void)
{
  enqueue();
  display();
  enqueue();
  display();
  dequeue();
  display();
  enqueue();
  display();
  dequeue();
  display();
}

// Floating Front Queue
#include <stdio.h>
#define size 5
int queue[size];
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
    queue[++rear] = x;
  }
}

void dequeue()
{
  if (front == -1 && front == rear)
    printf("Q is empty\n");
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
  for (int i = front; i <= rear; i++)
  {
    printf("%d ", queue[i]);
  }
  printf("\n");
}

int main(void)
{
  enqueue();
  display();
  enqueue();
  display();
  enqueue();
  display();
  dequeue();
  display();
  enqueue();
  display();
  dequeue();
  display();
}

// Circular Queue
#include <stdio.h>
#define size 5
int queue[size];
int front = -1, rear = -1;

void enqueue()
{
  int x;
  scanf("%d", &x);
  if (front == (rear + 1) % size)
    printf("Q is full\n");
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
    printf("Q is empty");
  else if (front == rear)
  {
    printf("Deleted element: %d\n", queue[front]);
    front = rear = 0;
  }
  else
  {
    printf("Deleted element: %d\n", queue[front]);
    front = (front + 1) % size;
  }
}

void display()
{

  for (int i = front; i != rear; i = (i + 1) % size)
  {
    printf("%d ", queue[i]);
  }
  printf("%d ", queue[rear]);
  printf("\n");
}

int main(void)
{
  enqueue();
  display();
  enqueue();
  display();
  enqueue();
  display();
  dequeue();
  display();
  enqueue();
  display();
  dequeue();
  display();
}

// Double Ended Queue
#include <stdio.h>
#define size 5
int queue[size];
int f = -1, r = -1;

void addFront()
{
  int x;
  scanf("%d", &x);
  if (f == (r + 1) % size)
  {
    printf("Q is full\n");
  }
  else if (f == -1)
  {
    f = r = 0;
    queue[r] = x;
  }
  else
  {
    if (f == 0)
    {
      f = size - 1;
      queue[f] = x;
    }
    else
    {
      f--;
      queue[f] = x;
    }
  }
}

void addRear()
{
  int x;
  scanf("%d", &x);
  if (f == (r + 1) % size)
  {
    printf("Q is full\n");
  }
  else if (f == -1)
  {
    f = r = 0;
    queue[r] = x;
  }
  else
  {
    r = (r + 1) % size;
    queue[r] = x;
  }
}

void delFront()
{
  if (f == -1)
    printf("Q is empty\n");
  else if (f == r)
  {
    printf("Deleted Element: %d\n", queue[f]);
    f = r = -1;
  }
  else
  {
    printf("Deleted Element: %d\n", queue[f]);
    f = (f + 1) % size;
  }
}

void delRear()
{
  if (f == -1)
    printf("Q is empty\n");
  else if (f == r)
  {
    printf("Deleted Element: %d\n", queue[r]);
    f = r = -1;
  }
  else
  {
    if (r == 0)
    {
      printf("Deleted Element: %d\n", queue[r]);
      r = size - 1;
    }
    else
    {
      printf("Deleted Element: %d\n", queue[r]);
      r--;
    }
  }
}

void display()
{
  int i = f;

  while (i != r)
  {
    printf("%d ", queue[i]);
    i = (i + 1) % size;
  }
  printf("%d", queue[r]);
}

int main(void)
{
  addFront();
  display();
  addRear();
  display();
  addFront();
  display();
  delFront();
  display();
  addRear();
  display();
  delRear();
  display();
}

// List
#include <stdio.h>
#define size 5
int list[5];
int lc = -1;

void insert()
{
  int x;
  scanf("%d", &x);
  if (lc >= size - 1)
    printf("List is full\n");
  else
  {
    list[++lc] = x;
  }
}

void delete()
{
  if (lc == -1)
    printf("List is empty\n");
  else
  {
    int x, idx, flag = 0;
    scanf("%d", &x);
    for (int i = 0; i <= lc; i++)
      if (list[i] == x)
      {
        idx = i;
        flag = 1;
        break;
      }

    if (flag == 0)
      printf("Element not in list\n");
    else
    {
      printf("Deleted Element: %d\n", list[idx]);
      for (int i = idx + 1; i <= lc; i++)
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
  insert();
  display();
  insert();
  display();
  delete ();
  display();
  insert();
  display();
  delete ();
  display();
}

// Singly Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
} *new, *head = NULL, *last = NULL;

struct node *findPos(int x)
{
  struct node *p = head;
  while (p != NULL && p->data != x)
    p = p->next;
  return p;
}

struct node *findPrev(int x)
{
  struct node *p = head;
  while (p != NULL && (p->next)->data != x)
    p = p->next;
  return p;
}

struct node *findLast()
{
  last = head;
  while (last != NULL)
    last = last->next;
  return last;
}

void insert()
{
  int x;
  scanf("%d", &x);
  new = (struct node *)malloc(sizeof(struct node));

  if (new == NULL)
    printf("List is full\n");
  else if (head == NULL)
  {
    new->data = x;
    new->next = NULL;
    head = last = new;
  }
  else if (head->next == NULL)
  {
    printf("1. Insert at the beginning\n2. Insert at the end\nEnter your choice: ");
    int ch;
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
      last = new;
    default:
      printf("Invalid choice. Please try again\n");
    }
  }
  else
  {
    printf("1. Insert at the beginning\n2. Insert at the end\n3. Insert after specific element\nEnter your choice: ");
    int ch;
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
      last = new;
    case 3:
      int e;
      scanf("%d", &e);
      struct node *pos = findPos(e);
      if (pos == NULL)
      {
        printf("Element not found\n");
      }
      else
      {
        new->data = x;
        new->next = pos->next;
        pos->next = new;
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
  struct node *pos = findPos(x);
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
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main(void)
{
  insert();
  display();

  insert();
  display();

  delete ();
  display();

  insert();
  display();
}

// Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
} *new, *head = NULL, *last = NULL;

struct node *findPos(int x)
{
  struct node *p = head;
  do
  {
    if (p->data == x)
      return p;
    p = p->next;
  } while (p != head);
  return NULL;
}

void insert()
{
  int x;
  scanf("%d", &x);
  new = (struct node *)malloc(sizeof(struct node));

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
    printf("1. Insert at the beginning\n");
    printf("2. Insert at the end\n");
    printf("3. Insert after specific element\n");
    printf("Enter your choice: \n");
    int ch;
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      new->next = head;
      last->next = new;
      head = new;
      break;
    case 2:
      last->next = new;
      new->next = head;
      last = new;
      break;
    case 3:
      int e;
      scanf("%d", &e);
      struct node *pos = findPos(e);
      if (pos != NULL)
      {
        new->next = pos->next;
        pos->next = new;
        if (pos == last)
          last = new;
      }
      else
        printf("Element not found\n");
    default:
      printf("Invalid choice. Please try again\n");
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
      printf("Element not found\n");
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
  insert();
  display();

  insert();
  display();

  delete ();
  display();

  insert();
  display();
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
