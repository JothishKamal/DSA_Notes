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
//   return max3(left_sum, right_sum, crossing_sum);
// }

// int main()
// {
//   int n;
//   scanf("%d", &n);

//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }

//   int max_sum = maxSubArraySum(arr, 0, n - 1);
//   printf("Maximum Subarray Sum: %d\n", max_sum);
// }

// // Longest Common Subsequence (LCS)
// #include <stdio.h>
// #include <string.h>

// int max(int a, int b)
// {
//   return (a > b) ? a : b;
// }

// int lcs(char *s1, char *s2, int m, int n)
// {
//   int dp[m + 1][n + 1];
//   for (int i = 0; i <= m; i++)
//   {
//     for (int j = 0; j <= n; j++)
//     {
//       if (i == 0 || j == 0)
//         dp[i][j] = 0;
//       else if (s1[i - 1] == s2[j - 1])
//         dp[i][j] = dp[i - 1][j - 1] + 1;
//       else
//         dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//     }
//   }

//   int i = m, j = n, idx = dp[m][n];
//   char lcs_str[idx + 1];
//   lcs_str[idx] = '\0';
//   printf("Longest Common Subsequence: ");

//   while (i > 0 && j > 0)
//   {
//     if (s1[i - 1] == s2[j - 1])
//     {
//       lcs_str[idx - 1] = s1[i - 1];
//       idx--;
//       i--;
//       j--;
//     }
//     else if (dp[i - 1][j] > dp[i][j - 1])
//       i--;
//     else
//       j--;
//   }

//   printf("%s\n", lcs_str);

//   return dp[m][n];
// }

// int main(void)
// {
//   char s1[] = "abcdefabc";
//   char s2[] = "acdfabc";
//   int m = strlen(s1);
//   int n = strlen(s2);

//   printf("Length of Longest Common Subsequence: %d\n", lcs(s1, s2, m, n));
//   return 0;
// }

// // 0-1 Knapsack Problem using Dynamic Programming
// #include <stdio.h>

// int max(int a, int b)
// {
//   return (a > b) ? a : b;
// }

// void knapsack01(int v[], int we[], int n, int cap)
// {
//   int dp[n + 1][cap + 1];

//   for (int i = 0; i <= n; i++)
//   {
//     for (int w = 0; w <= cap; w++)
//     {
//       if (i == 0 || w == 0)
//         dp[i][w] = 0;
//       else if (we[i - 1] <= w)
//         dp[i][w] = max(v[i - 1] + dp[i - 1][w - we[i - 1]], dp[i - 1][w]);
//       else
//         dp[i][w] = dp[i - 1][w];
//     }
//   }

//   int max_value = dp[n][cap];
//   printf("Maximum value: %d\n", max_value);

//   printf("Items included in the knapsack:\n");
//   int w = cap;
//   for (int i = n; i > 0 && max_value > 0; i--)
//   {
//     if (max_value != dp[i - 1][w])
//     {
//       printf("Item %d: (Weight: %d, Value: %d)\n", i, we[i - 1], v[i - 1]);
//       max_value -= v[i - 1];
//       w -= we[i - 1];
//     }
//   }
// }

// int main(void)
// {
//   int n, cap;

//   scanf("%d", &n);
//   scanf("%d", &cap);

//   int v[n], w[n];
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d %d", &v[i], &w[i]);
//   }

//   knapsack01(v, w, n, cap);
//   return 0;
// }

// // N-Queens
// #include <stdio.h>
// #define N 4

// int solutionCount = 0;

// void displayChess(int chBoard[N][N])
// {
//   printf("\nSolution %d:\n", solutionCount);
//   for (int i = 0; i < N; i++)
//   {
//     for (int j = 0; j < N; j++)
//     {
//       printf("%d ", chBoard[i][j]);
//     }
//     printf("\n");
//   }
// }

// int isQueenPlaceValid(int chBoard[N][N], int row, int col)
// {

//   for (int i = 0; i < col; i++)
//   {
//     if (chBoard[row][i])
//       return 0;
//   }

//   for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//   {
//     if (chBoard[i][j])
//       return 0;
//   }

//   for (int i = row, j = col; i < N && j >= 0; i++, j--)
//   {
//     if (chBoard[i][j])
//       return 0;
//   }

//   return 1;
// }

// void solveNQueenAll(int chBoard[N][N], int col)
// {

//   if (col >= N)
//   {
//     solutionCount++;
//     displayChess(chBoard);
//     return;
//   }

//   for (int i = 0; i < N; i++)
//   {
//     if (isQueenPlaceValid(chBoard, i, col))
//     {

//       chBoard[i][col] = 1;

//       solveNQueenAll(chBoard, col + 1);

//       chBoard[i][col] = 0;
//     }
//   }
// }

// int main()
// {
//   int chBoard[N][N] = {0};

//   solveNQueenAll(chBoard, 0);

//   if (solutionCount == 0)
//   {
//     printf("No solution exists\n");
//   }
//   else
//   {
//     printf("Total number of solutions: %d\n", solutionCount);
//   }

//   return 0;
// }

// // Graph Coloring Problem
// #include <stdio.h>
// #define V 4

// void printSolution(int color[V])
// {
//   for (int i = 0; i < V; i++)
//     printf("%d ", color[i]);
// }

// int isSafe(int v, int graph[V][V], int color[], int c)
// {
//   for (int i = 0; i < V; i++)
//   {
//     if (graph[v][i] && c == color[i])
//       return 0;
//   }
//   return 1;
// }

// int graphColoringUtil(int graph[V][V], int m, int color[], int v)
// {
//   if (v == V)
//     return 1;

//   for (int c = 1; c <= m; c++)
//   {
//     if (isSafe(v, graph, color, c))
//     {
//       color[v] = c;

//       if (graphColoringUtil(graph, m, color, v + 1) == 1)
//         return 1;

//       color[v] = 0;
//     }
//   }

//   return 0;
// }

// int findMinColors(int graph[V][V])
// {
//   int color[V];

//   for (int m = 1; m <= V; m++)
//   {
//     for (int i = 0; i < V; i++)
//       color[i] = 0;

//     if (graphColoringUtil(graph, m, color, 0))
//     {
//       printf("Solution exists with %d colors.\n", m);
//       printSolution(color);
//       return m;
//     }
//   }

//   printf("Coloring not possible.\n");
//   return -1;
// }

// int main(void)
// {
//   int graph[V][V] = {
//       {0, 1, 1, 1},
//       {1, 0, 1, 0},
//       {1, 1, 0, 1},
//       {1, 0, 1, 0}};

//   findMinColors(graph);

//   return 0;
// }