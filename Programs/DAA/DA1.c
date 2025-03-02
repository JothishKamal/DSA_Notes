// // Fractional Knapsack Problem
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
//   int n;
//   scanf("%d", &n);
//   int M;
//   scanf("%d", &M);

//   double w[n], P[n];
//   for (int i = 0; i < n; i++)
//     scanf("%lf %lf", &w[i], &P[i]);

//   double ratio[n];
//   int index[n];
//   for (int i = 0; i < n; i++)
//   {
//     ratio[i] = P[i] / w[i];
//     index[i] = i;
//   }

//   printf("Before Sorting: \n");
//   for (int i = 0; i < n; i++)
//     printf("w[%d] = %.2f, P[%d] = %.2f, P[%d] / w[%d] = %.2f\n",
//            i, w[i], i, P[i], i, i, ratio[i]);

//   quickSortAll(ratio, w, P, index, 0, n - 1);

//   printf("\nAfter Sorting: \n");
//   for (int i = 0; i < n; i++)
//     printf("w[%d] = %.2f, P[%d] = %.2f, P[%d] / w[%d] = %.2f\n",
//            i, w[i], i, P[i], i, i, ratio[i]);

//   double max_profit = 0.0;
//   double remaining_capacity = M;

//   printf("\nOptimal Solution:\n");
//   printf("Weight\tProfit\tFraction Taken\n");

//   for (int i = 0; i < n; i++)
//   {
//     double fraction;
//     if (w[i] <= remaining_capacity)
//     {
//       fraction = 1.0;
//       max_profit += P[i];
//       remaining_capacity -= w[i];
//     }
//     else
//     {
//       fraction = remaining_capacity / w[i];
//       max_profit += P[i] * fraction;
//       remaining_capacity = 0;
//     }

//     if (fraction > 0)
//     {
//       printf("%.2f\t%.2f\t%.2f\n", w[i], P[i], fraction);
//     }

//     if (remaining_capacity == 0)
//       break;
//   }

//   printf("\nMaximum profit: %.2f\n", max_profit);
//   return 0;
// }

// // Huffmann Coding
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX_TREE_HT 100

// struct MinHeapNode
// {
//   char data;
//   unsigned freq;
//   struct MinHeapNode *left, *right;
// };

// struct MinHeap
// {
//   unsigned size;
//   unsigned capacity;
//   struct MinHeapNode **array;
// };

// struct MinHeapNode *newNode(char data, unsigned freq)
// {
//   struct MinHeapNode *temp = (struct MinHeapNode *)malloc(sizeof(struct MinHeapNode));
//   temp->left = temp->right = NULL;
//   temp->data = data;
//   temp->freq = freq;
//   return temp;
// }

// struct MinHeap *createMinHeap(unsigned capacity)
// {
//   struct MinHeap *minHeap = (struct MinHeap *)malloc(sizeof(struct MinHeap));
//   minHeap->size = 0;
//   minHeap->capacity = capacity;
//   minHeap->array = (struct MinHeapNode **)malloc(minHeap->capacity * sizeof(struct MinHeapNode *));
//   return minHeap;
// }

// void swapMinHeapNode(struct MinHeapNode **a, struct MinHeapNode **b)
// {
//   struct MinHeapNode *t = *a;
//   *a = *b;
//   *b = t;
// }

// void minHeapify(struct MinHeap *minHeap, int idx)
// {
//   int smallest = idx;
//   int left = 2 * idx + 1;
//   int right = 2 * idx + 2;
//   if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
//     smallest = left;
//   if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
//     smallest = right;
//   if (smallest != idx)
//   {
//     swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
//     minHeapify(minHeap, smallest);
//   }
// }

// int isSizeOne(struct MinHeap *minHeap)
// {
//   return (minHeap->size == 1);
// }

// struct MinHeapNode *extractMin(struct MinHeap *minHeap)
// {
//   struct MinHeapNode *temp = minHeap->array[0];
//   minHeap->array[0] = minHeap->array[minHeap->size - 1];
//   --minHeap->size;
//   minHeapify(minHeap, 0);
//   return temp;
// }

// void insertMinHeap(struct MinHeap *minHeap, struct MinHeapNode *minHeapNode)
// {
//   ++minHeap->size;
//   int i = minHeap->size - 1;
//   while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq)
//   {
//     minHeap->array[i] = minHeap->array[(i - 1) / 2];
//     i = (i - 1) / 2;
//   }
//   minHeap->array[i] = minHeapNode;
// }

// void buildMinHeap(struct MinHeap *minHeap)
// {
//   int n = minHeap->size - 1;
//   for (int i = (n - 1) / 2; i >= 0; --i)
//     minHeapify(minHeap, i);
// }

// int isLeaf(struct MinHeapNode *root)
// {
//   return !(root->left) && !(root->right);
// }

// struct MinHeap *createAndBuildMinHeap(char data[], int freq[], int size)
// {
//   struct MinHeap *minHeap = createMinHeap(size);
//   for (int i = 0; i < size; ++i)
//     minHeap->array[i] = newNode(data[i], freq[i]);
//   minHeap->size = size;
//   buildMinHeap(minHeap);
//   return minHeap;
// }

// struct MinHeapNode *buildHuffmanTree(char data[], int freq[], int size)
// {
//   struct MinHeapNode *left, *right, *top;
//   struct MinHeap *minHeap = createAndBuildMinHeap(data, freq, size);
//   while (!isSizeOne(minHeap))
//   {
//     left = extractMin(minHeap);
//     right = extractMin(minHeap);
//     top = newNode('$', left->freq + right->freq);
//     top->left = left;
//     top->right = right;
//     insertMinHeap(minHeap, top);
//   }
//   return extractMin(minHeap);
// }

// void printCodes(struct MinHeapNode *root, int arr[], int top)
// {
//   if (root->left)
//   {
//     arr[top] = 0;
//     printCodes(root->left, arr, top + 1);
//   }
//   if (root->right)
//   {
//     arr[top] = 1;
//     printCodes(root->right, arr, top + 1);
//   }
//   if (isLeaf(root))
//   {
//     printf("%c: ", root->data);
//     for (int i = 0; i < top; ++i)
//       printf("%d", arr[i]);
//     printf("\n");
//   }
// }

// void HuffmanCodes(char data[], int freq[], int size)
// {
//   struct MinHeapNode *root = buildHuffmanTree(data, freq, size);
//   int arr[MAX_TREE_HT], top = 0;
//   printCodes(root, arr, top);
// }

// int calculateTotalBits(char data[], int freq[], int n, struct MinHeapNode *root)
// {
//   int totalBits = 0;
//   int arr[MAX_TREE_HT], top = 0;

//   return totalBits;
// }

// void decode(struct MinHeapNode *root, char *str)
// {
//   struct MinHeapNode *curr = root;
//   for (int i = 0; str[i] != '\0'; i++)
//   {
//     if (str[i] == '0')
//       curr = curr->left;
//     else
//       curr = curr->right;

//     if (isLeaf(curr))
//     {
//       printf("%c", curr->data);
//       curr = root;
//     }
//   }
// }

// int main()
// {
//   int n;
//   printf("Enter the number of unique characters: ");
//   scanf("%d", &n);
//   char arr[n];
//   int freq[n];
//   for (int i = 0; i < n; i++)
//   {
//     printf("Enter character %d: ", i + 1);
//     scanf(" %c", &arr[i]);
//     printf("Enter frequency of %c: ", arr[i]);
//     scanf("%d", &freq[i]);
//   }

//   printf("Huffman Codes:\n");
//   HuffmanCodes(arr, freq, n);

//   char str[100];
//   printf("Enter the encoded string: ");
//   scanf("%s", str);
//   printf("Decoded string is: ");
//   decode(buildHuffmanTree(arr, freq, n), str);
//   printf("\n");
//   return 0;
// }

// // Maximum Subarray Sum
// #include <stdio.h>
// #include <limits.h>
// int max(int a, int b)
// {
//   return (a > b) ? a : b;
// }

// int max3(int a, int b, int c)
// {
//   return max(max(a, b), c);
// }

// int findMaxCrossingSum(int arr[], int low, int mid, int high)
// {
//   int sum = 0;
//   int left_sum = INT_MIN;
//   int max_left = mid;
//   for (int i = mid; i >= low; i--)
//   {
//     sum += arr[i];
//     if (sum > left_sum)
//     {
//       left_sum = sum;
//       max_left = i;
//     }
//   }
//   sum = 0;
//   int right_sum = INT_MIN;
//   int max_right = mid + 1;
//   for (int i = mid + 1; i <= high; i++)
//   {
//     sum += arr[i];
//     if (sum > right_sum)
//     {
//       right_sum = sum;
//       max_right = i;
//     }
//   }
//   printf("Maximum sum on the left side of the middle: %d\n", left_sum);
//   printf("Maximum sum on the right side of the middle: %d\n", right_sum);
//   printf("Sum of left and right max: %d\n", left_sum + right_sum);
//   printf("Subarray elements crossing the middle: ");
//   for (int i = max_left; i <= max_right; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
//   return left_sum + right_sum;
// }

// int maxSubArraySum(int arr[], int low, int high)
// {
//   if (low == high)
//   {
//     return arr[low];
//   }
//   int mid = (low + high) / 2;
//   int left_sum = maxSubArraySum(arr, low, mid);
//   int right_sum = maxSubArraySum(arr, mid + 1, high);
//   int crossing_sum = findMaxCrossingSum(arr, low, mid, high);
//   printf("Maximum of left: %d, right: %d, crossing: %d\n", left_sum, right_sum, crossing_sum);
//   return max3(left_sum, right_sum, crossing_sum);
// }

// int main()
// {
//   int n;
//   printf("Enter the number of elements in the array: ");
//   scanf("%d", &n);
//   int arr[n];
//   printf("Enter the elements of the array:\n");
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   int max_sum = maxSubArraySum(arr, 0, n - 1);
//   printf("Maximum Subarray Sum: %d\n", max_sum);
//   return 0;
// }

// // Karatsuba Algorithm
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// int maxLength(int num1, int num2)
// {
//   int len1 = 0, len2 = 0;
//   while (num1 != 0)
//   {
//     num1 /= 10;
//     len1++;
//   }
//   while (num2 != 0)
//   {
//     num2 /= 10;
//     len2++;
//   }
//   return len1 > len2 ? len1 : len2;
// }

// struct SplitNumber
// {
//   long long high;
//   long long low;
// };

// struct SplitNumber splitNumber(long long num, int m)
// {
//   struct SplitNumber result;
//   result.high = num / (long long)pow(10, m);
//   result.low = num % (long long)pow(10, m);
//   return result;
// }

// long long karatsuba(long long x, long long y)
// {
//   if (x < 10 || y < 10)
//   {
//     return x * y;
//   }

//   int n = maxLength(x, y);
//   int m = n / 2;

//   // Split numbers using the new function
//   struct SplitNumber split_x = splitNumber(x, m);
//   struct SplitNumber split_y = splitNumber(y, m);

//   printf("\nSplit numbers into halves:");
//   printf("\nX = %lld: High = %lld, Low = %lld",
//          x, split_x.high, split_x.low);
//   printf("\nY = %lld: High = %lld, Low = %lld",
//          y, split_y.high, split_y.low);

//   long long z0 = karatsuba(split_x.low, split_y.low);
//   long long z1 = karatsuba((split_x.low + split_x.high),
//                            (split_y.low + split_y.high));
//   long long z2 = karatsuba(split_x.high, split_y.high);

//   // Rest of the function remains same
//   return (z2 * pow(10, 2 * m)) +
//          ((z1 - z2 - z0) * pow(10, m)) + z0;
// }

// int main()
// {
//   long long num1, num2;
//   printf("Enter the first number: ");
//   scanf("%lld", &num1);
//   printf("Enter the second number: ");
//   scanf("%lld", &num2);
//   int max_len = maxLength(num1, num2);
//   printf("\nMaximum length of the two numbers: %d", max_len);
//   long long result = karatsuba(num1, num2);
//   printf("\n\nResult of Karatsuba Multiplication: %lld\n", result);
//   return 0;
// }
