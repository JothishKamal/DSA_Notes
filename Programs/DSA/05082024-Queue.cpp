// // 1. Int Queue
// #include <stdio.h>
// const int size = 5;
// int queue[size];
// int front = -1, rear = -1;

// void enqueue()
// {
//   int x;
//   scanf("%d", &x);
//   if (rear >= size - 1)
//     printf("Queue is full\n");
//   else if (front == -1)
//   {
//     front = rear = 0;
//     queue[rear] = x;
//   }
//   else
//   {
//     rear++;
//     queue[rear] = x;
//   }
// }

// void dequeue()
// {
//   if (front == -1)
//     printf("Queue is empty\n");
//   else if (front == rear)
//   {
//     printf("Deleted Element: %d\n", queue[front]);
//     front = rear = -1;
//   }
//   else
//   {
//     printf("Deleted Element: %d\n", queue[front]);
//     for (int i = front + 1; i <= rear; i++)
//     {
//       queue[i - 1] = queue[i];
//     }
//     rear--;
//   }
// }

// void display()
// {
//   printf("Queue: ");
//   for (int i = front; i <= rear; i++)
//   {
//     printf("%d ", queue[i]);
//   }
//   printf("\n");
// }

// int main(void)
// {
//   do
//   {
//     int ch;
//     printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       enqueue();
//       break;
//     case 2:
//       dequeue();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       continue;
//     }
//   } while (1);
// }

// // 2. Character Queue
// #include <stdio.h>
// const int size = 5;
// char queue[size];
// int front = -1, rear = -1;

// void enqueue()
// {
//   char x;
//   scanf("\n");
//   scanf("%c", &x);
//   if (rear >= size - 1)
//     printf("Queue is full\n");
//   else if (front == -1)
//   {
//     front = rear = 0;
//     queue[rear] = x;
//   }
//   else
//   {
//     rear++;
//     queue[rear] = x;
//   }
// }

// void dequeue()
// {
//   if (front == -1)
//     printf("Queue is empty\n");
//   else if (front == rear)
//   {
//     printf("Deleted Element: %c\n", queue[front]);
//     front = rear = -1;
//   }
//   else
//   {
//     printf("Deleted Element: %c\n", queue[front]);
//     for (int i = front + 1; i <= rear; i++)
//     {
//       queue[i - 1] = queue[i];
//     }
//     rear--;
//   }
// }

// void display()
// {
//   printf("Queue: ");
//   for (int i = front; i <= rear; i++)
//   {
//     printf("%c ", queue[i]);
//   }
//   printf("\n");
// }

// int main(void)
// {
//   do
//   {
//     int ch;
//     printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       enqueue();
//       break;
//     case 2:
//       dequeue();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       continue;
//     }
//   } while (1);
// }

// // 3. String Queue
// #include <stdio.h>
// #include <string.h>
// const int size = 5;
// char queue[size][100];
// int front = -1, rear = -1;

// void enqueue()
// {
//   char x[100];
//   scanf("\n");
//   scanf("%s", x);
//   if (rear >= size - 1)
//     printf("Queue is full\n");
//   else if (front == -1)
//   {
//     front = rear = 0;
//     // queue[rear] = x;
//     strcpy(queue[rear], x);
//   }
//   else
//   {
//     rear++;
//     strcpy(queue[rear], x);
//   }
// }

// void dequeue()
// {
//   if (front == -1)
//     printf("Queue is empty\n");
//   else if (front == rear)
//   {
//     printf("Deleted Element: %s\n", queue[front]);
//     front = rear = -1;
//   }
//   else
//   {
//     printf("Deleted Element: %s\n", queue[front]);
//     for (int i = front + 1; i <= rear; i++)
//     {
//       strcpy(queue[i - 1], queue[i]);
//     }
//     rear--;
//   }
// }

// void display()
// {
//   printf("Queue: ");
//   for (int i = front; i <= rear; i++)
//   {
//     printf("%s ", queue[i]);
//   }
//   printf("\n");
// }

// int main(void)
// {
//   do
//   {
//     int ch;
//     printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       enqueue();
//       break;
//     case 2:
//       dequeue();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       continue;
//     }
//   } while (1);
// }

// // 4. Struct Queue
// #include <stdio.h>

// typedef struct
// {
//   int rno;
//   char name[20];
//   float cgpa;
// } Student;

// const int size = 5;
// Student queue[size];
// int front = -1, rear = -1;

// void enqueue()
// {
//   Student x;
//   scanf("%d", &x.rno);
//   scanf("%s", x.name);
//   scanf("%f", &x.cgpa);
//   if (rear >= size - 1)
//     printf("Queue is full\n");
//   else if (front == -1)
//   {
//     front = rear = 0;
//     queue[rear] = x;
//   }
//   else
//   {
//     rear++;
//     queue[rear] = x;
//   }
// }

// void dequeue()
// {
//   if (front == -1)
//     printf("Queue is empty\n");
//   else if (front == rear)
//   {
//     printf("Deleted Element: %d %s %.2f\n", queue[front].rno, queue[front].name, queue[front].cgpa);
//     front = rear = -1;
//   }
//   else
//   {
//     printf("Deleted Element: %d %s %.2f\n", queue[front].rno, queue[front].name, queue[front].cgpa);
//     for (int i = front + 1; i <= rear; i++)
//     {
//       queue[i - 1] = queue[i];
//     }
//     rear--;
//   }
// }

// void display()
// {
//   printf("Queue: \n");
//   for (int i = front; i <= rear; i++)
//   {
//     printf("%d %s %.2f\n", queue[i].rno, queue[i].name, queue[i].cgpa);
//   }
// }

// int main(void)
// {
//   do
//   {
//     int ch;
//     printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       enqueue();
//       break;
//     case 2:
//       dequeue();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       continue;
//     }
//   } while (1);
// }

// // Floating Front Queue
// #include <stdio.h>
// const int size = 5;
// int queue[size];
// int front = -1, rear = -1;

// void enqueue()
// {
//   int x;
//   scanf("%d", &x);
//   if (front == 0 && rear >= size - 1)
//     printf("Queue is full\n");
//   else if (front == -1)
//   {
//     front = rear = 0;
//     queue[rear] = x;
//   }
//   else
//   {
//     rear++;
//     queue[rear] = x;
//   }
// }

// void dequeue()
// {
//   if (front == rear)
//     printf("Queue is empty\n");
//   else if (front == rear)
//   {
//     printf("Deleted Element: %d\n", queue[front]);
//     front = rear = -1;
//   }
//   else
//   {
//     if (front < rear)
//       front++;
//   }
// }

// void display()
// {
//   printf("Queue: ");
//   for (int i = front; i <= rear; i++)
//   {
//     printf("%d ", queue[i]);
//   }
//   printf("\n");
// }

// int main(void)
// {
//   do
//   {
//     int ch;
//     printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\nChoose Operation: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       enqueue();
//       break;
//     case 2:
//       dequeue();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       continue;
//     }
//   } while (1);
// }

// // 6. Circular Queue
// #include <stdio.h>
// const int size = 5;
// int queue[size];
// int front = -1, rear = -1;

// void enqueue()
// {
//   int x;
//   scanf("%d", &x);
//   if (front == (rear + 1) % size)
//     printf("Queue is full\n");
//   else if (front == -1)
//   {
//     front = rear = 0;
//     queue[rear] = x;
//   }
//   else
//   {
//     rear = (rear + 1) % size;
//     queue[rear] = x;
//   }
// }

// void dequeue()
// {
//   if (front == -1)
//     printf("Queue is empty\n");
//   else if (front == rear)
//   {
//     printf("Deleted Element: %d\n", queue[front]);
//     front = rear = -1;
//   }
//   else
//   {
//     printf("Deleted Element: %d\n", queue[front]);
//     front = (front + 1) % size;
//   }
// }

// void display()
// {
//   if (front == -1)
//   {
//     printf("Queue is empty\n");
//     return;
//   }

//   printf("Queue: ");
//   int i = front;
//   while (i != rear)
//   {
//     printf("%d ", queue[i]);
//     i = (i + 1) % size;
//   }
//   printf("%d\n", queue[rear]);
// }

// int main(void)
// {
//   do
//   {
//     int ch;
//     printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nChoose Operation: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       enqueue();
//       break;
//     case 2:
//       dequeue();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       continue;
//     }
//   } while (1);
// }

// Double Ended Queue

// Priority Queue