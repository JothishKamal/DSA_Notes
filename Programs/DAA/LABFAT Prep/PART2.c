// // Bellman Ford Algorithm
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

// int main(void)
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

// // KMP & RabinKarp Algorithm
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
// }

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

//   for (int i = 0; i < M - 1; i++)
//     h = (h * d) % q;

//   for (int i = 0; i < M; i++)
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

// // Ford-Fulkerson & Edmonds-Karp Algorithm
// #include <stdio.h>
// #include <limits.h>
// #include <string.h>
// #include <stdbool.h>

// #define V 7

// int bfs(int rGraph[V][V], int s, int t, int parent[])
// {
//   bool visited[V];
//   memset(visited, 0, sizeof(visited));

//   int queue[V], front = 0, rear = 0;
//   queue[rear++] = s;
//   visited[s] = true;
//   parent[s] = -1;

//   while (front < rear)
//   {
//     int u = queue[front++];
//     for (int v = 0; v < V; v++)
//     {
//       if (!visited[v] && rGraph[u][v] > 0)
//       {
//         queue[rear++] = v;
//         parent[v] = u;
//         visited[v] = true;
//         if (v == t)
//           return 1;
//       }
//     }
//   }
//   return 0;
// }

// int fordFulkerson(int graph[V][V], int s, int t)
// {
//   int u, v, rGraph[V][V], parent[V], max_flow = 0;

//   memcpy(rGraph, graph, sizeof(rGraph));

//   while (bfs(rGraph, s, t, parent))
//   {
//     int path_flow = INT_MAX;

//     for (v = t; v != s; v = parent[v])
//     {
//       u = parent[v];
//       if (rGraph[u][v] < path_flow)
//         path_flow = rGraph[u][v];
//     }

//     for (v = t; v != s; v = parent[v])
//     {
//       u = parent[v];
//       rGraph[u][v] -= path_flow;
//       rGraph[v][u] += path_flow;
//     }

//     max_flow += path_flow;
//   }
//   return max_flow;
// }

// int main()
// {
//   int graph[V][V] = {
//       {0, 7, 0, 0, 10, 0, 0},
//       {0, 0, 5, 0, 1, 3, 0},
//       {0, 0, 0, 2, 0, 0, 10},
//       {0, 0, 0, 0, 0, 0, 4},
//       {0, 0, 0, 7, 0, 2, 0},
//       {0, 0, 3, 2, 0, 0, 0},
//       {0, 0, 0, 0, 0, 0, 0}};

//   printf("The maximum possible flow is %d\n", fordFulkerson(graph, 0, 5));
//   return 0;
// }

// Graham's Scan Algorithm
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
  int x, y;
} Point;

Point p0;

int compare(const void *vp1, const void *vp2)
{
  Point *p1 = (Point *)vp1, *p2 = (Point *)vp2;
  int val = (p1->x - p0.x) * (p2->y - p0.y) - (p2->x - p0.x) * (p1->y - p0.y);
  if (val == 0)
    return (p1->x * p1->x + p1->y * p1->y) < (p2->x * p2->x + p2->y * p2->y) ? -1 : 1;

  return (val > 0) ? -1 : 1;
}

int orientation(Point p, Point q, Point r)
{
  int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
  return (val > 0) ? 1 : (val < 0) ? -1
                                   : 0;
}

void convexHull(Point points[], int n)
{
  int minY = 0;
  for (int i = 1; i < n; i++)
  {
    if (points[i].y < points[minY].y || (points[i].y == points[minY].y && points[i].x < points[minY].x))
      minY = i;
  }

  Point temp = points[0];
  points[0] = points[minY];
  points[minY] = temp;
  p0 = points[0];

  qsort(&points[1], n - 1, sizeof(Point), compare);

  Point hull[n];
  int hullSize = 0;
  for (int i = 0; i < n; i++)
  {
    while (hullSize >= 2 && orientation(hull[hullSize - 2], hull[hullSize - 1], points[i]) != -1)
      hullSize--;
    hull[hullSize++] = points[i];
  }

  printf("Convex Hull:\n");
  for (int i = 0; i < hullSize; i++)
    printf("(%d, %d)\n", hull[i].x, hull[i].y);
}

int main()
{
  Point points[] = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {0, 0}, {3, 3}};
  int n = sizeof(points) / sizeof(points[0]);
  convexHull(points, n);
  return 0;
}