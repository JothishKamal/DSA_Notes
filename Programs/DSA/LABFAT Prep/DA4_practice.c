// Bubble Sort
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}
int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  bubbleSort(a, n);

  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}

// Selection Sort
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int a[], int n)
{
  int minIdx;
  for (int i = 0; i < n; i++)
  {
    minIdx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[minIdx] > a[j])
      {
        minIdx = j;
      }
    }
    swap(&a[i], &a[minIdx]);
  }
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  selectionSort(a, n);

  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}

// Insertion Sort
#include <stdio.h>

void insertionSort(int a[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int temp = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > temp)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = temp;
  }
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  insertionSort(a, n);

  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}

// Quick Sort
#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int a[], int low, int high)
{
  int pivot = a[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++)
  {
    if (a[j] < pivot)
    {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return i + 1;
}

void quickSort(int a[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(a, low, high);
    quickSort(a, low, pi - 1);
    quickSort(a, pi + 1, high);
  }
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  quickSort(a, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}

// Merge Sort
#include <stdio.h>

void merge(int a[], int l, int m, int r)
{
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = a[l + i];

  for (int j = 0; j < n2; j++)
    R[j] = a[m + 1 + j];

  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      a[k] = L[i];
      i++;
    }
    else
    {
      a[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    a[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    a[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int a[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
  }
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  mergeSort(a, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}

// Count Sort
#include <stdio.h>
#include <stdlib.h>
void countSort(int arr[], int n)
{
  int output[n];
  int max = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }

  int *count = (int *)calloc(max + 1, sizeof(int));

  for (int i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }

  for (int i = 1; i <= max; i++)
  {
    count[i] += count[i - 1];
  }

  for (int i = n - 1; i >= 0; i--)
  {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] = output[i];
  }
  free(count);
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main()
{
  int arr[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  countSort(arr, n);
  printf("Sorted array is: \n");
  printArray(arr, n);
  return 0;
}

// Radix Sort
#include <stdio.h>

int getMax(int a[], int n)
{
  int max = a[0];

  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];

  return max;
}

void countSort(int a[], int n, int exp)
{
  int output[n];
  int count[10] = {0};

  for (int i = 0; i < n; i++)
    count[(a[i] / exp) % 10]++;

  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  for (int i = n - 1; i >= 0; i--)
  {
    output[count[(a[i] / exp) % 10] - 1] = a[i];
    count[(a[i] / exp) % 10]--;
  }

  for (int i = 0; i < n; i++)
    a[i] = output[i];
}

void radixSort(int a[], int n)
{
  int m = getMax(a, n);
  for (int exp = 1; m / exp > 0; exp *= 10)
    countSort(a, n, exp);
}

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  radixSort(a, n);

  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}
