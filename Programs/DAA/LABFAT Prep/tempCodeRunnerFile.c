#include <stdio.h>
#include <limits.h>

#define V 5
#define E 10

struct Edge
{
  int src, dest, weight;
};

void bellmanFord(struct Edge edges[], int src)
{
  int dist[V];

  for (int i = 0; i < V; i++)
    dist[i] = INT_MAX;
  dist[src] = 0;

  for (int i = 0; i < V - 1; i++)
  {
    for (int j = 0; j < E; j++)
    {
      int u = edges[j].src;
      int v = edges[j].dest;
      int weight = edges[j].weight;

      if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
      {
        dist[v] = dist[u] + weight;
      }
    }
  }

  for (int i = 0; i < E; i++)
  {
    int u = edges[i].src;
    int v = edges[i].dest;
    int weight = edges[i].weight;

    if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
    {
      printf("Graph contains a negative weight cycle\n");
      return;
    }
  }

  printf("Vertex\tDistance from Source\n");
  for (int i = 0; i < V; i++)
  {
    printf("%d\t", i);
    if (dist[i] == INT_MAX)
      printf("INF\n");
    else
      printf("%d\n", dist[i]);
  }
}

int main(void)
{
  struct Edge edges[E] = {
      {0, 1, 6},
      {0, 3, 7},
      {1, 2, 5},
      {1, 3, 8},
      {1, 4, -4},
      {2, 1, -2},
      {3, 2, -3},
      {3, 4, 9},
      {4, 0, 2},
      {4, 2, 7},
  };

  int src = 0;
  bellmanFord(edges, src);

  return 0;
}
