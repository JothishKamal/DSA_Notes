// // Assembly Line Scheduling
// #include <stdio.h>

// int min(int a, int b)
// {
//   if (a < b)
//     return a;
//   return b;
// }

// int main(void)
// {
//   int n;
//   printf("Enter the number of stations: ");
//   scanf("%d", &n);

//   int e1, e2, x1, x2, a1[n], a2[n], t1[n - 1], t2[n - 1];
//   printf("Enter the entry time for assembly line 1: ");
//   scanf("%d", &e1);
//   printf("Enter the entry time for assembly line 2: ");
//   scanf("%d", &e2);

//   printf("Enter the exit time for assembly line 1: ");
//   scanf("%d", &x1);
//   printf("Enter the exit time for assembly line 2: ");
//   scanf("%d", &x2);

//   printf("Enter the time taken at each station for assembly line 1: ");
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &a1[i]);
//   }

//   printf("Enter the time taken at each station for assembly line 2: ");
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &a2[i]);
//   }

//   printf("Enter the time taken to move from station i on assembly line 1 to station i on assembly line 2: ");
//   for (int i = 0; i < n - 1; i++)
//   {
//     scanf("%d", &t1[i]);
//   }

//   printf("Enter the time taken to move from station i on assembly line 2 to station i on assembly line 1: ");
//   for (int i = 0; i < n - 1; i++)
//   {
//     scanf("%d", &t2[i]);
//   }

//   int T1[n], T2[n];
//   T1[0] = e1 + a1[0];
//   T2[0] = e2 + a2[0];

//   for (int i = 1; i < n; i++)
//   {
//     T1[i] = min(T1[i - 1] + a1[i], T2[i - 1] + t2[i - 1] + a1[i]);
//     T2[i] = min(T2[i - 1] + a2[i], T1[i - 1] + t1[i - 1] + a2[i]);
//   }

//   int min_time = T1[n - 1] + x1 < T2[n - 1] + x2 ? T1[n - 1] + x1 : T2[n - 1] + x2;
//   printf("Minimum time taken to complete the car: %d\n", min_time);
// }

// // Longest Common Subsequence
// #include <stdio.h>
// #include <string.h>

// int max(int x, int y)
// {
//   return x > y ? x : y;
// }

// int lcs(char *s1, char *s2, int m, int n)
// {
//   int L[m + 1][n + 1];
//   int i, j;

//   for (i = 0; i <= m; i++)
//   {
//     for (j = 0; j <= n; j++)
//     {
//       if (i == 0 || j == 0)
//         L[i][j] = 0;
//       else if (s1[i - 1] == s2[j - 1])
//         L[i][j] = L[i - 1][j - 1] + 1;
//       else
//         L[i][j] = max(L[i - 1][j], L[i][j - 1]);
//     }
//   }

//   return L[m][n];
// }

// int main()
// {
//   char s1[] = "AGGTAB";
//   char s2[] = "GXTXAYB";
//   int m = strlen(s1);
//   int n = strlen(s2);

//   printf("Length of Longest Common Subsequence: %d\n", lcs(s1, s2, m, n));
//   return 0;
// }

// // N Queen Problem
// #include <stdio.h>
// #define N 4

// void displayChess(int chBoard[N][N])
// {
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

// int solveNQueen(int chBoard[N][N], int col)
// {
//   if (col >= N)
//     return 1;

//   for (int i = 0; i < N; i++)
//   {
//     if (isQueenPlaceValid(chBoard, i, col))
//     {
//       chBoard[i][col] = 1;

//       if (solveNQueen(chBoard, col + 1))
//         return 1;

//       chBoard[i][col] = 0;
//     }
//   }

//   return 0;
// }

// int main()
// {
//   int chBoard[N][N] = {0};

//   if (solveNQueen(chBoard, 0) == 0)
//   {
//     printf("Solution does not exist\n");
//     return 0;
//   }

//   displayChess(chBoard);
//   return 0;
// }

// // Graph Coloring (Backtracking)
// #include <stdio.h>
// #define V 4

// void printSolution(int color[])
// {
//   printf("Solution Exists:"
//          " Following are the assigned colors \n");
//   for (int i = 0; i < V; i++)
//     printf(" %d ", color[i]);
//   printf("\n");
// }

// int isSafe(int v, int graph[V][V], int color[], int c)
// {
//   for (int i = 0; i < V; i++)
//     if (graph[v][i] && c == color[i])
//       return 0;
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

// int graphColoring(int graph[V][V], int m)
// {
//   int color[V];
//   for (int i = 0; i < V; i++)
//     color[i] = 0;

//   if (graphColoringUtil(graph, m, color, 0) == 0)
//   {
//     printf("Solution does not exist");
//     return 0;
//   }

//   printSolution(color);
//   return 1;
// }

// int main()
// {
//   int graph[V][V] = {{0, 1, 1, 1},
//                      {1, 0, 1, 0},
//                      {1, 1, 0, 1},
//                      {1, 0, 1, 0}};
//   int m = 3;
//   graphColoring(graph, m);
//   return 0;
// }

// // Matrix Chain Multiplication using Dynamic Programming
// #include <stdio.h>
// #include <limits.h>

// void matrixChainMultiplication(int d[], int n)
// {
//   int size = n - 1;
//   int m[size][size];
//   int s[size][size];

//   for (int i = 0; i < size; i++)
//   {
//     m[i][i] = 0;
//   }

//   for (int chain_len = 2; chain_len <= size; chain_len++)
//   {
//     for (int i = 0; i <= size - chain_len; i++)
//     {
//       int j = i + chain_len - 1;
//       m[i][j] = INT_MAX;

//       for (int k = i; k < j; k++)
//       {
//         int cost = m[i][k] + m[k + 1][j] +
//                    d[i] * d[k + 1] * d[j + 1];

//         if (cost < m[i][j])
//         {
//           m[i][j] = cost;
//           s[i][j] = k;
//         }
//       }
//     }
//   }

//   printf("Minimum number of multiplications: %d\n", m[0][size - 1]);

//   printf("Optimal parenthesization: ");

//   void printOptimalParens(int s[size][size], int i, int j)
//   {
//     if (i == j)
//     {
//       printf("A%d", i + 1);
//     }
//     else
//     {
//       printf("(");
//       printOptimalParens(s, i, s[i][j]);
//       printf(" x ");
//       printOptimalParens(s, s[i][j] + 1, j);
//       printf(")");
//     }
//   }

//   printOptimalParens(s, 0, size - 1);
//   printf("\n");
// }

// int main()
// {
//   int n;
//   printf("Enter number of matrices: ");
//   scanf("%d", &n);

//   int d[n + 1];
//   printf("Enter d of matrices (n+1 values):\n");
//   for (int i = 0; i <= n; i++)
//   {
//     scanf("%d", &d[i]);
//   }

//   matrixChainMultiplication(d, n + 1);
//   return 0;
// }

// // 0/1 Knapsack using Dynamic Programming
// #include <stdio.h>

// int max(int a, int b)
// {
//   return (a > b) ? a : b;
// }

// void knapsack01(int values[], int weights[], int n, int capacity)
// {
//   int dp[n + 1][capacity + 1];

//   for (int i = 0; i <= n; i++)
//   {
//     for (int w = 0; w <= capacity; w++)
//     {
//       if (i == 0 || w == 0)
//         dp[i][w] = 0;
//       else if (weights[i - 1] <= w)

//         dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
//       else
//         dp[i][w] = dp[i - 1][w];
//     }
//   }

//   int max_value = dp[n][capacity];
//   printf("Maximum value: %d\n", max_value);

//   printf("Selected items (weight, value):\n");
//   int w = capacity;
//   for (int i = n; i > 0 && max_value > 0; i--)
//   {
//     if (max_value != dp[i - 1][w])
//     {

//       printf("Item %d: (%d, %d)\n", i, weights[i - 1], values[i - 1]);
//       max_value -= values[i - 1];
//       w -= weights[i - 1];
//     }
//   }
// }

// int main()
// {
//   int n, capacity;

//   printf("Enter number of items: ");
//   scanf("%d", &n);

//   int values[n], weights[n];

//   printf("Enter values of items:\n");
//   for (int i = 0; i < n; i++)
//     scanf("%d", &values[i]);

//   printf("Enter weights of items:\n");
//   for (int i = 0; i < n; i++)
//     scanf("%d", &weights[i]);

//   printf("Enter knapsack capacity: ");
//   scanf("%d", &capacity);

//   knapsack01(values, weights, n, capacity);
//   return 0;
// }