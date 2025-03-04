// // Fractional Knapsack Problem
// #include <stdio.h>

// typedef struct
// {
//   double weight;
//   double profit;
//   double ratio;
// } Item;

// // Partition function for quicksort
// int partition(Item it[], int l, int h)
// {
//   double pivot = it[h].ratio;
//   int i = l - 1;

//   for (int j = l; j < h; j++)
//   {
//     // For descending order: it[j].ratio > pivot
//     if (it[j].ratio > pivot)
//     {
//       i++;
//       // Swap it[i] and it[j]
//       Item temp = it[i];
//       it[i] = it[j];
//       it[j] = temp;
//     }
//   }

//   // Swap it[i+1] and it[h]
//   Item temp = it[i + 1];
//   it[i + 1] = it[h];
//   it[h] = temp;

//   return i + 1;
// }

// // QuickSort implementation for it by ratio (descending)
// void quickSortByRatio(Item it[], int l, int h)
// {
//   if (l < h)
//   {
//     int pi = partition(it, l, h);

//     quickSortByRatio(it, l, pi - 1);
//     quickSortByRatio(it, pi + 1, h);
//   }
// }

// int main()
// {
//   int n, capacity;

//   printf("Enter number of it: ");
//   scanf("%d", &n);

//   printf("Enter knapsack capacity: ");
//   scanf("%d", &capacity);

//   Item it[n];

//   // Input weights and profits
//   printf("Enter weight and profit for each item:\n");
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%lf %lf", &it[i].weight, &it[i].profit);
//     it[i].ratio = it[i].profit / it[i].weight;
//   }

//   // Sort by profit/weight ratio using QuickSort
//   quickSortByRatio(it, 0, n - 1);

//   double maxProfit = 0.0;
//   double remainingCapacity = capacity;

//   printf("\nOptimal Solution:\n");
//   printf("Weight\tProfit\tFraction\n");

//   // Greedy selection
//   for (int i = 0; i < n; i++)
//   {
//     double fraction;

//     if (it[i].weight <= remainingCapacity)
//     {
//       // Take the whole item
//       fraction = 1.0;
//       maxProfit += it[i].profit;
//       remainingCapacity -= it[i].weight;
//     }
//     else
//     {
//       // Take a fraction of the item
//       fraction = remainingCapacity / it[i].weight;
//       maxProfit += it[i].profit * fraction;
//       remainingCapacity = 0;
//     }

//     if (fraction > 0)
//     {
//       printf("%.2f\t%.2f\t%.2f\n",
//              it[i].weight, it[i].profit, fraction);
//     }

//     if (remainingCapacity == 0)
//       break;
//   }

//   printf("\nMaximum profit: %.2f\n", maxProfit);

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

// int findMaxCrossingSum(int arr[], int l, int mid, int h)
// {
//   int sum = 0;
//   int left_sum = INT_MIN;
//   int max_left = mid;
//   for (int i = mid; i >= l; i--)
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
//   for (int i = mid + 1; i <= h; i++)
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

// int maxSubArraySum(int arr[], int l, int h)
// {
//   if (l == h)
//   {
//     return arr[l];
//   }
//   int mid = (l + h) / 2;
//   int left_sum = maxSubArraySum(arr, l, mid);
//   int right_sum = maxSubArraySum(arr, mid + 1, h);
//   int crossing_sum = findMaxCrossingSum(arr, l, mid, h);
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
//   long long h;
//   long long l;
// };

// struct SplitNumber splitNumber(long long num, int m)
// {
//   struct SplitNumber result;
//   result.h = num / (long long)pow(10, m);
//   result.l = num % (long long)pow(10, m);
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
//   printf("\nX = %lld: h = %lld, l = %lld",
//          x, split_x.h, split_x.l);
//   printf("\nY = %lld: h = %lld, l = %lld",
//          y, split_y.h, split_y.l);

//   long long z0 = karatsuba(split_x.l, split_y.l);
//   long long z1 = karatsuba((split_x.l + split_x.h),
//                            (split_y.l + split_y.h));
//   long long z2 = karatsuba(split_x.h, split_y.h);

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
