// // Ford Fulkerson Algorithm
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

// // Edmonds-Karp Algorithm
// #include <stdio.h>
// #include <limits.h>
// #include <string.h>
// #include <stdbool.h>

// #define V 6

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

// int edmondsKarp(int graph[V][V], int s, int t)
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
//       {0, 15, 12, 0, 0, 0},
//       {0, 0, 0, 10, 0, 0},
//       {0, 10, 0, 5, 0, 0},
//       {0, 0, 0, 0, 8, 8},
//       {0, 0, 6, 0, 0, 13},
//       {0, 0, 0, 0, 0, 0}};

//   printf("The maximum possible flow is %d\n", edmondsKarp(graph, 0, 5));
//   return 0;
// }

// // Graham's Scan Algorithm
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// typedef struct
// {
//   int x, y;
// } Point;

// Point p0;

// int compare(const void *vp1, const void *vp2)
// {
//   Point *p1 = (Point *)vp1, *p2 = (Point *)vp2;
//   int val = (p1->x - p0.x) * (p2->y - p0.y) - (p2->x - p0.x) * (p1->y - p0.y);
//   if (val == 0)
//     return (p1->x * p1->x + p1->y * p1->y) < (p2->x * p2->x + p2->y * p2->y) ? -1 : 1;
//   return (val > 0) ? -1 : 1;
// }

// int orientation(Point a, Point b, Point c)
// {
//   int val = (b.y - a.y) * (c.x - b.x) - (b.x - a.x) * (c.y - b.y);
//   return val > 0 ? 1 : (val < 0) ? -1
//                                  : 0;
// }

// void convexHull(Point points[], int n)
// {
//   int minY = 0;
//   for (int i = 1; i < n; i++)
//     if (points[i].y < points[minY].y || (points[i].y == points[minY].y &&
//                                          points[i].x < points[minY].x))
//       minY = i;

//   Point temp = points[0];
//   points[0] = points[minY];
//   points[minY] = temp;
//   p0 = points[0];

//   qsort(&points[1], n - 1, sizeof(Point), compare);

//   Point hull[n];
//   int hullSize = 0;
//   for (int i = 0; i < n; i++)
//   {
//     while (hullSize >= 2 && orientation(hull[hullSize - 2], hull[hullSize - 1], points[i]) != -1)
//       hullSize--;
//     hull[hullSize++] = points[i];
//   }

//   printf("Convex Hull:\n");
//   for (int i = 0; i < hullSize; i++)
//     printf("(%d, %d)\n", hull[i].x, hull[i].y);
// }

// int main()
// {
//   Point points[] = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {0, 0}, {3, 3}};
//   int n = sizeof(points) / sizeof(points[0]);
//   convexHull(points, n);
//   return 0;
// }

// // Jarvis's March Algorithm
// #include <stdio.h>

// typedef struct
// {
//   int x, y;
// } Point;

// int orientation(Point p, Point q, Point r)
// {
//   int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
//   return (val > 0) ? 1 : (val < 0) ? -1
//                                    : 0;
// }

// void convexHull(Point points[], int n)
// {
//   if (n < 3)
//     return;

//   int hull[n], hullSize = 0;
//   int l = 0;
//   for (int i = 1; i < n; i++)
//     if (points[i].x < points[l].x)
//       l = i;

//   int p = l, q;
//   do
//   {
//     hull[hullSize++] = p;
//     q = (p + 1) % n;
//     for (int i = 0; i < n; i++)
//       if (orientation(points[p], points[i], points[q]) == -1)
//         q = i;

//     p = q;
//   } while (p != l);

//   printf("Convex Hull:\n");
//   for (int i = 0; i < hullSize; i++)
//     printf("(%d, %d)\n", points[hull[i]].x, points[hull[i]].y);
// }

// int main()
// {
//   Point points[] = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {0, 0}, {3, 3}};
//   int n = sizeof(points) / sizeof(points[0]);
//   convexHull(points, n);
//   return 0;
// }
