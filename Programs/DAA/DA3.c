// // 1.a KMP Algorithm
// #include <stdio.h>
// #include <string.h>

// void computeLPSArray(char *pattern, int M, int *lps)
// {
//   int len = 0;
//   lps[0] = 0;
//   int i = 1;

//   while (i < M)
//   {
//     if (pattern[i] == pattern[len])
//     {
//       len++;
//       lps[i] = len;
//       i++;
//     }
//     else
//     {
//       if (len != 0)
//       {
//         len = lps[len - 1];
//       }
//       else
//       {
//         lps[i] = 0;
//         i++;
//       }
//     }
//   }
// }

// void KMPSearch(char *pattern, char *text)
// {
//   int M = strlen(pattern);
//   int N = strlen(text);

//   int lps[M];
//   computeLPSArray(pattern, M, lps);

//   int i = 0;
//   int j = 0;
//   int found = 0;

//   while (i < N)
//   {
//     if (pattern[j] == text[i])
//     {
//       j++;
//       i++;
//     }

//     if (j == M)
//     {
//       printf("KMP Algorithm: Pattern found at index %d\n", i - j);
//       found = 1;
//       j = lps[j - 1];
//     }
//     else if (i < N && pattern[j] != text[i])
//     {
//       if (j != 0)
//         j = lps[j - 1];
//       else
//         i++;
//     }
//   }

//   if (!found)
//   {
//     printf("KMP Algorithm: Pattern not found\n");
//   }
// }

// // 1.b Rabin-Karp Algorithm
// #include <stdio.h>
// #include <string.h>

// #define d 256
// #define q 101

// void RabinKarpSearch(char *pattern, char *text)
// {
//   int M = strlen(pattern);
//   int N = strlen(text);
//   int i, j;
//   int p = 0;
//   int t = 0;
//   int h = 1;
//   int found = 0;

//   for (i = 0; i < M - 1; i++)
//     h = (h * d) % q;

//   for (i = 0; i < M; i++)
//   {
//     p = (d * p + pattern[i]) % q;
//     t = (d * t + text[i]) % q;
//   }

//   for (i = 0; i <= N - M; i++)
//   {

//     if (p == t)
//     {

//       for (j = 0; j < M; j++)
//       {
//         if (text[i + j] != pattern[j])
//           break;
//       }

//       if (j == M)
//       {
//         printf("Rabin-Karp Algorithm: Pattern found at index %d\n", i);
//         found = 1;
//       }
//     }

//     if (i < N - M)
//     {
//       t = (d * (t - text[i] * h) + text[i + M]) % q;

//       if (t < 0)
//         t = (t + q);
//     }
//   }

//   if (!found)
//   {
//     printf("Rabin-Karp Algorithm: Pattern not found\n");
//   }
// }

// int main()
// {
//   char text[] = "SAQSPAPCPCGAS";
//   char pattern[] = "PCGA";

//   printf("Text: %s\n", text);
//   printf("Pattern to find: %s\n\n", pattern);

//   RabinKarpSearch(pattern, text);

//   return 0;
// }

// // 2. Bellman Ford Algorithm
// #include <stdio.h>
// #include <limits.h>

// #define V 5
// #define E 10

// struct Edge
// {
//   int src, dest, weight;
// };

// void bellmanFord(struct Edge edges[], int src)
// {
//   int dist[V];

//   for (int i = 0; i < V; i++)
//     dist[i] = INT_MAX;
//   dist[src] = 0;

//   for (int i = 0; i < V - 1; i++)
//   {
//     for (int j = 0; j < E; j++)
//     {
//       int u = edges[j].src;
//       int v = edges[j].dest;
//       int weight = edges[j].weight;

//       if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
//       {
//         dist[v] = dist[u] + weight;
//       }
//     }
//   }

//   for (int i = 0; i < E; i++)
//   {
//     int u = edges[i].src;
//     int v = edges[i].dest;
//     int weight = edges[i].weight;
//     if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
//     {
//       printf("Graph contains a negative weight cycle\n");
//       return;
//     }
//   }

//   printf("Vertex\tDistance from Source\n");
//   for (int i = 0; i < V; i++)
//   {
//     printf("%d\t", i);
//     if (dist[i] == INT_MAX)
//       printf("INF\n");
//     else
//       printf("%d\n", dist[i]);
//   }
// }

// int main()
// {
//   struct Edge edges[E] = {
//       {0, 1, 6},
//       {0, 3, 7},
//       {1, 2, 5},
//       {1, 3, 8},
//       {1, 4, -4},
//       {2, 1, -2},
//       {3, 2, -3},
//       {3, 4, 9},
//       {4, 0, 2},
//       {4, 2, 7},
//   };

//   int src = 0;
//   bellmanFord(edges, src);

//   return 0;
// }

// // 3. Floyd Warshall Algorithm
// #include <stdio.h>
// #include <limits.h>

// #define nV 4
// #define INF INT_MAX

// void printMatrix(int matrix[][nV], int step);

// void floydWarshall(int graph[][nV])
// {
//   int matrix[nV][nV], i, j, k;

//   for (i = 0; i < nV; i++)
//     for (j = 0; j < nV; j++)
//       matrix[i][j] = graph[i][j];

//   printf("Initial Distance Matrix:\n");
//   printMatrix(matrix, 0);

//   for (k = 0; k < nV; k++)
//   {
//     printf("\nConsidering vertex %d as an intermediate vertex:\n", k + 1);
//     for (i = 0; i < nV; i++)
//     {
//       for (j = 0; j < nV; j++)
//       {
//         if (matrix[i][k] != INF && matrix[k][j] != INF &&
//             matrix[i][k] + matrix[k][j] < matrix[i][j])
//         {
//           matrix[i][j] = matrix[i][k] + matrix[k][j];
//         }
//       }
//     }
//     printMatrix(matrix, k + 1);
//   }

//   printf("\nFinal Shortest Path Distance Matrix:\n");
//   printMatrix(matrix, -1);
// }

// void printMatrix(int matrix[][nV], int step)
// {
//   if (step == -1)
//   {
//     printf("Final matrix:\n");
//   }
//   else if (step > 0)
//   {
//     printf("Matrix after considering vertex %d:\n", step);
//   }

//   for (int i = 0; i < nV; i++)
//   {
//     for (int j = 0; j < nV; j++)
//     {
//       if (matrix[i][j] == INF)
//         printf("%4s", "INF");
//       else
//         printf("%4d", matrix[i][j]);
//     }
//     printf("\n");
//   }
// }

// int main()
// {
//   int graph[nV][nV] = {
//       {0, 8, INF, 1},
//       {INF, 0, 1, INF},
//       {4, INF, 0, INF},
//       {INF, 2, 9, 0}};

//   floydWarshall(graph);
//   return 0;
// }
