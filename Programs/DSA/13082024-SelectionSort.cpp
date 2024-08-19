// // 1. Int Array
// #include <stdio.h>
// void selectionSort(int a[], int n)
// {
//   int min, temp;
//   for (int i = 0; i < n; i++)
//   {
//     min = i;
//     for (int j = i; j < n; j++)
//     {
//       if (a[j] < a[min])
//         min = j;
//     }
//     temp = a[i];
//     a[i] = a[min];
//     a[min] = temp;
//   }
// }
// int main(void)
// {
//   int a[7] = {10, 7, 1, 43, 61, 4, 14};
//   selectionSort(a, 7);
//   for (int i = 0; i < 7; i++)
//     printf("%d ", a[i]);
// }

// 2. Char Array
#include <stdio.h>
void selectionSort(char a[], int n)
{
  int min;
  char temp;
  for (int i = 0; i < n; i++)
  {
    min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[min])
        min = j;
    }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
}
int main(void)
{
  char a[3] = {'c', 'a', 'b'};
  selectionSort(a, 3);
  for (int i = 0; i < 3; i++)
    printf("%c ", a[i]);
}