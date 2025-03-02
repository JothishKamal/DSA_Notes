// #include <stdio.h>
// #include <stdlib.h>

// // Function to swap two elements
// void swap(double *a, double *b)
// {
//   double t = *a;
//   *a = *b;
//   *b = t;
// }

// void swapInt(int *a, int *b)
// {
//   int t = *a;
//   *a = *b;
//   *b = t;
// }

// // Function to sort arrays based on ratio using quicksort
// void quickSortAll(double ratio[], double w[], double P[], int index[], int low, int high)
// {
//   if (low < high)
//   {
//     double pivot = ratio[high];
//     int i = low - 1;

//     for (int j = low; j <= high - 1; j++)
//     {
//       if (ratio[j] > pivot)
//       {
//         i++;
//         swap(&ratio[i], &ratio[j]);
//         swap(&w[i], &w[j]);
//         swap(&P[i], &P[j]);
//         swapInt(&index[i], &index[j]);
//       }
//     }

//     swap(&ratio[i + 1], &ratio[high]);
//     swap(&w[i + 1], &w[high]);
//     swap(&P[i + 1], &P[high]);
//     swapInt(&index[i + 1], &index[high]);

//     int pi = i + 1;

//     quickSortAll(ratio, w, P, index, low, pi - 1);
//     quickSortAll(ratio, w, P, index, pi + 1, high);
//   }
// }

// int main()
// {
//   int n; // Total number of weights
//   scanf("%d", &n);
//   int M; // Size of knapsack
//   scanf("%d", &M);

//   // Getting the weights and profits
//   double w[n], P[n];
//   for (int i = 0; i < n; i++)
//     scanf("%lf %lf", &w[i], &P[i]);

//   // Calculating the ratio of profit to weight
//   double ratio[n];
//   int index[n];
//   for (int i = 0; i < n; i++)
//   {
//     ratio[i] = P[i] / w[i];
//     index[i] = i; // Keep track of original indices
//   }

//   printf("Before Sorting: \n");
//   // Displaying the weights and profits
//   for (int i = 0; i < n; i++)
//     printf("w[%d]=%.2f, P[%d]=%.2f, P[%d]/w[%d]=%.2f\n", i, w[i], i, P[i], i, i, ratio[i]);

//   // Sorting the ratios and corresponding weights and profits using quickSortAll
//   quickSortAll(ratio, w, P, index, 0, n - 1);

//   printf("After Sorting: \n");
//   for (int i = 0; i < n; i++)
//     printf("w[%d]=%.2f, P[%d]=%.2f, P[%d]/w[%d]=%.2f\n", i, w[i], i, P[i], i, i, ratio[i]);

//   double max_profit = 0.0;
//   double remaining_capacity = M;

//   // Calculating the maximum profit
//   for (int i = 0; i < n; i++)
//   {
//     if (w[i] <= remaining_capacity)
//     {
//       max_profit += P[i];
//       remaining_capacity -= w[i];
//     }
//     else
//     {
//       max_profit += P[i] * (remaining_capacity / w[i]);
//       break;
//     }
//   }

//   printf("Maximum profit: %.2f\n", max_profit);

//   return 0;
// }

// You are using GCC
#include <stdio.h>
#include <string.h>

int main(void)
{
  char x[1000], y[1000];

  scanf("%s", x);
  scanf("%s", y);

  for (int i = 0; i < strlen(x); i++)
  {
    
  }
}