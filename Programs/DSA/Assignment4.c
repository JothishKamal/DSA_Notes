// // 1. Bubble Sort (int)
// #include <stdio.h>
// int main(void)
// {
//   int n;
//   scanf("%d", &n);

//   int a[n];
//   for (int i = 0; i < n; i++)
//     scanf("%d", &a[i]);

//   int temp;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (a[j] > a[j + 1])
//       {
//         temp = a[j];
//         a[j] = a[j + 1];
//         a[j + 1] = temp;
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//     printf("%d ", a[i]);

//   printf("\n");
// }

// // 2. Bubble Sort (char)
// #include <stdio.h>
// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");
//   char a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%c", &a[i]);
//     if (i != n - 1)
//       scanf("\n");
//   }

//   char temp;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (a[j] > a[j + 1])
//       {
//         temp = a[j];
//         a[j] = a[j + 1];
//         a[j + 1] = temp;
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//     printf("%c ", a[i]);

//   printf("\n");
// }

// // 3. Bubble Sort (string)
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");
//   char a[n][100];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%s", a[i]);
//   }

//   char temp[100];
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (strcmp(a[j], a[j + 1]) > 0)
//       {
//         strcpy(temp, a[j]);
//         strcpy(a[j], a[j + 1]);
//         strcpy(a[j + 1], temp);
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//     printf("%s ", a[i]);

//   printf("\n");
// }

// // 4. Bubble Sort (struct)
// #include <stdio.h>
// typedef struct
// {
//   int rno;
//   char name[20];
//   float cgpa;
// } student;

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   student a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &a[i].rno);
//     scanf("%s", a[i].name);
//     scanf("%f", &a[i].cgpa);
//   }

//   student temp;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (a[j].rno > a[j + 1].rno)
//       {
//         temp = a[j];
//         a[j] = a[j + 1];
//         a[j + 1] = temp;
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//     printf("%d %s %.2f\n", a[i].rno, a[i].name, a[i].cgpa);
// }

// // 5. Selection Sort (int)
// #include <stdio.h>
// int main(void)
// {
//   int n;
//   scanf("%d", &n);

//   int a[n];
//   for (int i = 0; i < n; i++)
//     scanf("%d", &a[i]);

//   int temp, minIdx;
//   for (int i = 0; i < n; i++)
//   {
//     minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (a[minIdx] > a[j])
//         minIdx = j;
//     }
//     temp = a[i];
//     a[i] = a[minIdx];
//     a[minIdx] = temp;
//   }

//   for (int i = 0; i < n; i++)
//     printf("%d ", a[i]);

//   printf("\n");
// }

// // 6. Selection Sort (char)
// #include <stdio.h>
// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   char a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%c", &a[i]);
//     if (i != n - 1)
//       scanf("\n");
//   }

//   int minIdx;
//   char temp;
//   for (int i = 0; i < n; i++)
//   {
//     minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (a[minIdx] > a[j])
//         minIdx = j;
//     }
//     temp = a[i];
//     a[i] = a[minIdx];
//     a[minIdx] = temp;
//   }

//   for (int i = 0; i < n; i++)
//     printf("%c ", a[i]);

//   printf("\n");
// }

// // 7. Selection Sort (string)
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   char a[n][100];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%s", a[i]);
//     if (i != n - 1)
//       scanf("\n");
//   }

//   int minIdx;
//   char temp[100];
//   for (int i = 0; i < n; i++)
//   {
//     minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (strcmp(a[minIdx], a[j]) > 0)
//         minIdx = j;
//     }
//     strcpy(temp, a[i]);
//     strcpy(a[i], a[minIdx]);
//     strcpy(a[minIdx], temp);
//   }

//   for (int i = 0; i < n; i++)
//     printf("%s ", a[i]);

//   printf("\n");
// }

// // 8. Selection Sort (string)
// #include <stdio.h>

// typedef struct
// {
//   int rno;
//   char name[20];
//   float cgpa;
// } student;

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   student a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &a[i].rno);
//     scanf("%s", a[i].name);
//     scanf("%f", &a[i].cgpa);
//   }

//   int minIdx;
//   student temp;
//   for (int i = 0; i < n; i++)
//   {
//     minIdx = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (a[j].rno < a[minIdx].rno)
//         minIdx = j;
//     }
//     temp = a[i];
//     a[i] = a[minIdx];
//     a[minIdx] = temp;
//   }

//   for (int i = 0; i < n; i++)
//     printf("%d %s %.2f \n", a[i].rno, a[i].name, a[i].cgpa);

//   printf("\n");
// }

// // 9. Insertion Sort(int)
// #include <stdio.h>

// void insertionSort(int *a, int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     int temp = a[i];
//     int j = i - 1;

//     while (j >= 0 && a[j] > temp)
//     {
//       a[j + 1] = a[j];
//       j--;
//     }
//     a[j + 1] = temp;
//   }
// }

// int main(void)
// {
//   int n;
//   scanf("%d", &n);

//   int a[n];
//   for (int i = 0; i < n; i++)
//     scanf("%d", &a[i]);

//   insertionSort(a, n);

//   for (int i = 0; i < n; i++)
//     printf("%d ", a[i]);

//   printf("\n");
// }

// // 10. Insertion Sort(char)
// #include <stdio.h>

// void insertionSort(char *a, int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     char temp = a[i];
//     int j = i - 1;

//     while (j >= 0 && a[j] > temp)
//     {
//       a[j + 1] = a[j];
//       j--;
//     }
//     a[j + 1] = temp;
//   }
// }

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   char a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%c", &a[i]);
//     if (i != n - 1)
//       scanf("\n");
//   }

//   insertionSort(a, n);

//   for (int i = 0; i < n; i++)
//     printf("%c ", a[i]);

//   printf("\n");
// }

// // 11. Insertion Sort(string)
// #include <stdio.h>
// #include <string.h>

// void insertionSort(char a[][100], int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     char temp[100];
//     strcpy(temp, a[i]);
//     int j = i - 1;

//     while (j >= 0 && strcmp(a[j], temp) > 0)
//     {
//       strcpy(a[j + 1], a[j]);
//       j--;
//     }
//     strcpy(a[j + 1], temp);
//   }
// }

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   char a[n][100];
//   for (int i = 0; i < n; i++)
//     scanf("%s", a[i]);

//   insertionSort(a, n);

//   for (int i = 0; i < n; i++)
//     printf("%s ", a[i]);

//   printf("\n");
// }

// // 12. Insertion Sort(struct)
// #include <stdio.h>
// #include <string.h>

// typedef struct
// {
//   int rno;
//   char name[20];
//   float cgpa;
// } student;

// void insertionSort(student *a, int n)
// {
//   for (int i = 1; i < n; i++)
//   {
//     student temp = a[i];
//     int j = i - 1;

//     while (j >= 0 && a[j].rno > temp.rno)
//     {
//       a[j + 1] = a[j];
//       j--;
//     }
//     a[j + 1] = temp;
//   }
// }

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   scanf("\n");

//   student a[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &a[i].rno);
//     scanf("%s", a[i].name);
//     scanf("%f", &a[i].cgpa);
//   }

//   insertionSort(a, n);

//   for (int i = 0; i < n; i++)
//     printf("%d %s %.2f\n", a[i].rno, a[i].name, a[i].cgpa);
// }

// // Singly Linked List
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//   int data;
//   struct node *next;
// } *new, *head = NULL, *last;

// struct node *findPosition(int x)
// {
//   struct node *pos = head;
//   while (pos != NULL && pos->data != x)
//     pos = pos->next;
//   return pos;
// }

// struct node *findPrev(int x)
// {
//   struct node *prev = head;
//   while (prev != NULL && (prev->next)->data != x)
//     prev = prev->next;
//   return prev;
// }

// struct node *findLast()
// {
//   last = head;
//   while (last->next != NULL)
//     last = last->next;
//   return last;
// }

// void insert()
// {
//   int x;
//   scanf("%d", &x);
//   new = (struct node *)malloc(sizeof(struct node));
//   if (new == NULL)
//     printf("List is full");
//   else if (head == NULL)
//   {
//     new->data = x;
//     new->next = NULL;
//     head = new;
//   }
//   else if (head->next == NULL)
//   {
//     int ch;
//     printf("1. Insert at the beginning\n2. Insert at the end\n");
//     printf("Enter your choice: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       new->data = x;
//       new->next = head;
//       head = new;
//       break;
//     case 2:
//       new->data = x;
//       new->next = NULL;
//       head->next = new;
//       break;
//     default:
//       printf("Invalid choice. Please try again\n");
//     }
//   }
//   else
//   {
//     int ch;
//     printf("1. Insert at the beginning\n2. Insert at the end\n3. Insert in between\n");
//     printf("Enter your choice: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       new->data = x;
//       new->next = head;
//       head = new;
//       break;
//     case 2:
//       last = findLast();
//       new->data = x;
//       new->next = NULL;
//       last->next = new;
//       last = new;
//       break;
//     case 3:
//       int ele;
//       printf("Enter the element to find: ");
//       scanf("%d", &ele);
//       struct node *pos = findPosition(ele);
//       if (pos != NULL)
//       {
//         new->data = x;
//         new->next = pos->next;
//         pos->next = new;
//       }
//       else
//       {
//         printf("Element not found\n");
//       }
//       break;
//     default:
//       printf("Invalid choice. Please try again\n");
//     }
//   }
// }

// void delete()
// {
//   int x;
//   scanf("%d", &x);
//   struct node *pos = findPosition(x);
//   if (head == NULL)
//     printf("List is empty\n");
//   else if (pos == head)
//   {
//     struct node *temp = head;
//     head = head->next;
//     free(temp);
//   }
//   else if (pos != NULL)
//   {
//     struct node *prev = findPrev(x);

//     struct node *temp = pos;
//     prev->next = pos->next;
//     free(temp);
//   }
//   else
//   {
//     printf("Element not found\n");
//   }
// }

// void display()
// {
//   struct node *p = head;
//   if (p == NULL)
//     printf("List is empty\n");
//   else
//   {
//     while (p != NULL)
//     {
//       printf("%d ", p->data);
//       p = p->next;
//     }
//     printf("\n");
//   }
// }

// int main(void)
// {
//   int ch;
//   while (1)
//   {
//     printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       insert();
//       break;
//     case 2:
//       delete ();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//       break;
//     default:
//       break;
//     }
//   }
// }


// // Circular Linked List
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//   int data;
//   struct node *next;
// } *head = NULL, *last;

// struct node *findPosition(int x)
// {
//   struct node *pos = head;
//   do
//   {
//     if (pos->data == x)
//       return pos;
//     pos = pos->next;
//   } while (pos != head);
//   return NULL;
// }

// void insert()
// {
//   int x, choice;
//   printf("Enter data: ");
//   scanf("%d", &x);
//   struct node *new = (struct node *)malloc(sizeof(struct node));
//   if (new == NULL)
//   {
//     printf("List is full\n");
//     return;
//   }
//   new->data = x;

//   if (head == NULL)
//   {
//     head = new;
//     new->next = head;
//     last = new;
//   }
//   else
//   {
//     printf("1. Insert at beginning\n2. Insert at end\n3. Insert after specific element\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     if (choice == 1)
//     {
//       new->next = head;
//       last->next = new;
//       head = new;
//     }
//     else if (choice == 2)
//     {
//       last->next = new;
//       new->next = head;
//       last = new;
//     }
//     else if (choice == 3)
//     {
//       int ele;
//       printf("Enter the element after which to insert: ");
//       scanf("%d", &ele);
//       struct node *pos = findPosition(ele);
//       if (pos != NULL)
//       {
//         new->next = pos->next;
//         pos->next = new;
//         if (pos == last)
//           last = new;
//       }
//       else
//       {
//         printf("Element not found\n");
//       }
//     }
//     else
//     {
//       printf("Invalid choice\n");
//     }
//   }
// }

// void delete()
// {
//   int x;
//   scanf("%d", &x);
//   if (head == NULL)
//   {
//     printf("List is empty\n");
//     return;
//   }
//   struct node *temp = head, *prev = NULL;
//   if (head->data == x)
//   {
//     if (head == last)
//     {
//       free(head);
//       head = last = NULL;
//     }
//     else
//     {
//       last->next = head->next;
//       head = head->next;
//       free(temp);
//     }
//   }
//   else
//   {
//     while (temp->next != head && temp->data != x)
//     {
//       prev = temp;
//       temp = temp->next;
//     }
//     if (temp->data == x)
//     {
//       prev->next = temp->next;
//       if (temp == last)
//         last = prev;
//       free(temp);
//     }
//     else
//     {
//       printf("Element not found\n");
//     }
//   }
// }

// void display()
// {
//   if (head == NULL)
//   {
//     printf("List is empty\n");
//     return;
//   }
//   struct node *temp = head;
//   do
//   {
//     printf("%d ", temp->data);
//     temp = temp->next;
//   } while (temp != head);
//   printf("\n");
// }

// int main(void)
// {
//   int ch;
//   while (1)
//   {
//     printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       insert();
//       break;
//     case 2:
//       delete ();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       printf("Invalid choice\n");
//     }
//   }
// }

// // Doubly Linked List
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//   int data;
//   struct node *prev;
//   struct node *next;
// } *head = NULL, *last;

// struct node *findPosition(int x)
// {
//   struct node *pos = head;
//   while (pos != NULL)
//   {
//     if (pos->data == x)
//       return pos;
//     pos = pos->next;
//   }
//   return NULL;
// }

// void insert()
// {
//   int x, choice;
//   printf("Enter data: ");
//   scanf("%d", &x);
//   struct node *new = (struct node *)malloc(sizeof(struct node));
//   if (new == NULL)
//   {
//     printf("List is full\n");
//     return;
//   }
//   new->data = x;
//   new->next = NULL;
//   new->prev = NULL;

//   if (head == NULL)
//   {
//     head = new;
//     last = new;
//   }
//   else
//   {
//     printf("1. Insert at beginning\n2. Insert at end\n3. Insert after specific element\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     if (choice == 1)
//     {
//       new->next = head;
//       head->prev = new;
//       head = new;
//     }
//     else if (choice == 2)
//     {
//       last->next = new;
//       new->prev = last;
//       last = new;
//     }
//     else if (choice == 3)
//     {
//       int ele;
//       printf("Enter the element after which to insert: ");
//       scanf("%d", &ele);
//       struct node *pos = findPosition(ele);
//       if (pos != NULL)
//       {
//         new->next = pos->next;
//         if (pos->next != NULL)
//           pos->next->prev = new;
//         new->prev = pos;
//         pos->next = new;
//         if (pos == last)
//           last = new;
//       }
//       else
//       {
//         printf("Element not found\n");
//       }
//     }
//     else
//     {
//       printf("Invalid choice\n");
//     }
//   }
// }

// void delete()
// {
//   int x;
//   scanf("%d", &x);
//   if (head == NULL)
//   {
//     printf("List is empty\n");
//     return;
//   }
//   struct node *temp = head;
//   if (head->data == x)
//   {
//     if (head == last)
//     {
//       free(head);
//       head = last = NULL;
//     }
//     else
//     {
//       head = head->next;
//       head->prev = NULL;
//       free(temp);
//     }
//   }
//   else
//   {
//     while (temp != NULL && temp->data != x)
//     {
//       temp = temp->next;
//     }
//     if (temp != NULL)
//     {
//       if (temp == last)
//       {
//         last = last->prev;
//         last->next = NULL;
//       }
//       else
//       {
//         temp->prev->next = temp->next;
//         if (temp->next != NULL)
//           temp->next->prev = temp->prev;
//       }
//       free(temp);
//     }
//     else
//     {
//       printf("Element not found\n");
//     }
//   }
// }

// void display()
// {
//   struct node *temp = head;
//   if (temp == NULL)
//   {
//     printf("List is empty\n");
//     return;
//   }
//   while (temp != NULL)
//   {
//     printf("%d ", temp->data);
//     temp = temp->next;
//   }
//   printf("\n");
// }

// int main(void)
// {
//   int ch;
//   while (1)
//   {
//     printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//       insert();
//       break;
//     case 2:
//       delete ();
//       break;
//     case 3:
//       display();
//       break;
//     case 4:
//       return 0;
//     default:
//       printf("Invalid choice\n");
//     }
//   }
// }

// // Quick Sort
// #include <stdio.h>
// void swap(int *a, int *b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int partition(int arr[], int low, int high)
// {
//   int pivot = arr[high];
//   int i = (low - 1);

//   for (int j = low; j <= high - 1; j++)
//   {
//     if (arr[j] < pivot)
//     {
//       i++;
//       swap(&arr[i], &arr[j]);
//     }
//   }
//   swap(&arr[i + 1], &arr[high]);
//   return (i + 1);
// }

// void quickSort(int arr[], int low, int high)
// {
//   if (low < high)
//   {
//     int pi = partition(arr, low, high);
//     quickSort(arr, low, pi - 1);
//     quickSort(arr, pi + 1, high);
//   }
// }

// void printArray(int arr[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
// }

// int main()
// {
//   int arr[] = {10, 7, 8, 9, 1, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   quickSort(arr, 0, n - 1);
// printf("Sorted array: \n");
// printArray(arr, n);
//   return 0;
// }

// // Merge Sort
// #include <stdio.h>
// void merge(int arr[], int l, int m, int r)
// {
//   int n1 = m - l + 1;
//   int n2 = r - m;

//   int L[n1], R[n2];

//   for (int i = 0; i < n1; i++)
//     L[i] = arr[l + i];
//   for (int j = 0; j < n2; j++)
//     R[j] = arr[m + 1 + j];

//   int i = 0, j = 0, k = l;
//   while (i < n1 && j < n2)
//   {
//     if (L[i] <= R[j])
//     {
//       arr[k] = L[i];
//       i++;
//     }
//     else
//     {
//       arr[k] = R[j];
//       j++;
//     }
//     k++;
//   }

//   while (i < n1)
//   {
//     arr[k] = L[i];
//     i++;
//     k++;
//   }

//   while (j < n2)
//   {
//     arr[k] = R[j];
//     j++;
//     k++;
//   }
// }

// void mergeSort(int arr[], int l, int r)
// {
//   if (l < r)
//   {
//     int m = l + (r - l) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
//   }
// }

// void printArray(int A[], int size)
// {
//   for (int i = 0; i < size; i++)
//     printf("%d ", A[i]);
//   printf("\n");
// }

// int main()
// {
//   int arr[] = {12, 11, 13, 5, 6, 7};
//   int arr_size = sizeof(arr) / sizeof(arr[0]);

//   mergeSort(arr, 0, arr_size - 1);

//   printf("Sorted array: \n");
//   printArray(arr, arr_size);
//   return 0;
// }

// // Counting Sort
// #include <stdio.h>
// #include <string.h>
// void countSort(int arr[], int n)
// {
//   int output[n];
//   int max = arr[0];

//   for (int i = 1; i < n; i++)
//     if (arr[i] > max)
//       max = arr[i];

//   int count[max + 1];
//   memset(count, 0, sizeof(count));

//   for (int i = 0; i < n; i++)
//     count[arr[i]]++;

//   for (int i = 1; i <= max; i++)
//     count[i] += count[i - 1];

//   for (int i = n - 1; i >= 0; i--)
//   {
//     output[count[arr[i]] - 1] = arr[i];
//     count[arr[i]]--;
//   }

//   for (int i = 0; i < n; i++)
//     arr[i] = output[i];
// }

// void printArray(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//     printf("%d ", arr[i]);
//   printf("\n");
// }

// int main()
// {
//   int arr[] = {4, 2, 2, 8, 3, 3, 1};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   countSort(arr, n);
//   printf("Sorted array is: \n");
//   printArray(arr, n);
//   return 0;
// }

// // Radix Sort
// #include <stdio.h>
// int getMax(int arr[], int n)
// {
//   int max = arr[0];
//   for (int i = 1; i < n; i++)
//     if (arr[i] > max)
//       max = arr[i];
//   return max;
// }

// void countSort(int arr[], int n, int exp)
// {
//   int output[n];
//   int count[10] = {0};

//   for (int i = 0; i < n; i++)
//     count[(arr[i] / exp) % 10]++;

//   for (int i = 1; i < 10; i++)
//     count[i] += count[i - 1];

//   for (int i = n - 1; i >= 0; i--)
//   {
//     output[count[(arr[i] / exp) % 10] - 1] = arr[i];
//     count[(arr[i] / exp) % 10]--;
//   }

//   for (int i = 0; i < n; i++)
//     arr[i] = output[i];
// }

// void radixSort(int arr[], int n)
// {
//   int m = getMax(arr, n);

//   for (int exp = 1; m / exp > 0; exp *= 10)
//     countSort(arr, n, exp);
// }

// void printArray(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//     printf("%d ", arr[i]);
//   printf("\n");
// }

// int main()
// {
//   int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   radixSort(arr, n);
//   printf("Sorted array: \n");
//   printArray(arr, n);
//   return 0;
// }
