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