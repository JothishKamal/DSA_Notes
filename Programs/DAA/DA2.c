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
// #define BOARD_SIZE 4

// void displayChess(int chBoard[BOARD_SIZE][BOARD_SIZE])
// {
//   for (int i = 0; i < BOARD_SIZE; i++)
//   {
//     for (int j = 0; j < BOARD_SIZE; j++)
//     {
//       printf("%d ", chBoard[i][j]);
//     }
//     printf("\n");
//   }
// }

// int isQueenPlaceValid(int chBoard[BOARD_SIZE][BOARD_SIZE], int row, int col)
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

//   for (int i = row, j = col; i < BOARD_SIZE && j >= 0; i++, j--)
//   {
//     if (chBoard[i][j])
//       return 0;
//   }

//   return 1;
// }

// int solveNQueen(int chBoard[BOARD_SIZE][BOARD_SIZE], int col)
// {
//   if (col >= BOARD_SIZE)
//     return 1;

//   for (int i = 0; i < BOARD_SIZE; i++)
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
//   int chBoard[BOARD_SIZE][BOARD_SIZE] = {0};

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
