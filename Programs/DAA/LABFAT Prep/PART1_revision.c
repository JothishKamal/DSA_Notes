// Maximum Subarray Sum
#include <stdio.h>
#include <limits.h>

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int max3(int a, int b, int c)
{
  return max(max(a, b), c);
}

int findMaxCrossingSum(int a[], int l, int mid, int h)
{
  int sum = 0;
  int leftSum = INT_MIN;
  int maxLeft = mid;
  for (int i = mid; i >= l; i--)
  {
    sum += a[i];
    if (sum > leftSum)
    {
      leftSum = sum;
      maxLeft = i;
    }
  }

  sum = 0;
  int rightSum = INT_MIN;
  int maxRight = mid + 1;
  for (int i = mid + 1; i <= h; i++)
  {
    sum += a[i];
    if (sum > rightSum)
    {
      rightSum = sum;
      maxRight = i;
    }
  }

  return leftSum + rightSum;
}

int maxSubArraySum(int a[], int l, int h)
{
  if (l == h)

    return a[l];

  int mid = (l + h) / 2;
  int leftSum = maxSubArraySum(a, l, mid);
  int rightSum = maxSubArraySum(a, mid + 1, h);
  int crossingSum = findMaxCrossingSum(a, l, mid, h);
  return max3(leftSum, rightSum, crossingSum);
}

int main()
{
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int maxSum = maxSubArraySum(a, 0, n - 1);
  printf("Maximum Subarray Sum: %d\n", maxSum);
  return 0;
}

// Longest Common Subsequence (LCS) Problem
#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int lcs(char *s1, char *s2, int m, int n)
{
  int dp[m + 1][n + 1];

  for (int i = 0; i <= m; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i == 0 || j == 0)
        dp[i][j] = 0;
      else if (s1[i - 1] == s2[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }

  int i = m, j = n, idx = dp[m][n];
  char lcs_str[idx + 1];
  lcs_str[idx] = '\0';
  printf("Longest Common Subsequence: ");

  while (i > 0 && j > 0)
  {
    if (s1[i - 1] == s2[j - 1])
    {
      lcs_str[idx - 1] = s1[i - 1];
      idx--;
      i--;
      j--;
    }
    else if (dp[i - 1][j] > dp[i][j - 1])
      i--;
    else
      j--;
  }

  printf("%s\n", lcs_str);

  return dp[m][n];
}

int main(void)
{
  char s1[] = "abcdefg";
  char s2[] = "acefg";

  int m = strlen(s1);
  int n = strlen(s2);

  printf("Length of Longest Common Subsequence: %d\n", lcs(s1, s2, m, n));
  return 0;
}

// 0-1 Knapsack Problem using Dynamic Programming
#include <stdio.h>

int max(int a, int b)
{
  return (a > b) ? a : b;
}

void knapsack01(int v[], int we[], int n, int cap)
{
  int dp[n + 1][cap + 1];

  for (int i = 0; i <= n; i++)
  {
    for (int w = 0; w <= cap; w++)
    {
      if (i == 0 || w == 0)
        dp[i][w] = 0;
      else if (we[i - 1] <= w)
        dp[i][w] = max(v[i - 1] + dp[i - 1][w - we[i - 1]], dp[i - 1][w]);
      else
        dp[i][w] = dp[i - 1][w];
    }
  }

  int max_value = dp[n][cap];
  int w = cap;

  printf("Maximum value in Knapsack = %d\n", max_value);
  printf("Items included in Knapsack:\n");
  for (int i = n; i > 0 && max_value > 0; i--)
  {
    if (max_value != dp[i - 1][w])
    {
      printf("Item %d (Value: %d, Weight: %d)\n", i, v[i - 1], we[i - 1]);
      max_value -= v[i - 1];
      w -= we[i - 1];
    }
  }
}

int main(void)
{
  int n, cap;
  scanf("%d", &n);
  scanf("%d", &cap);

  int v[n], w[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &v[i], &w[i]);
  }

  knapsack01(v, w, n, cap);
  return 0;
}

// N-Queens Problem
#include <stdio.h>
#define N 5

int solutionCount = 0;

void displayChess(int chBoard[N][N])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (chBoard[i][j])
        printf("Q ");
      else
        printf(". ");
    }
    printf("\n");
  }
  printf("\n");
}

int isQueenPlaceValid(int chBoard[N][N], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    if (chBoard[row][i])
      return 0;
  }

  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
  {
    if (chBoard[i][j])
      return 0;
  }

  for (int i = row, j = col; i < N && j >= 0; i++, j--)
  {
    if (chBoard[i][j])
      return 0;
  }

  return 1;
}

void solveNQueenAll(int chBoard[N][N], int col)
{
  if (col >= N)
  {
    solutionCount++;
    displayChess(chBoard);
    return;
  }

  for (int i = 0; i < N; i++)
  {
    if (isQueenPlaceValid(chBoard, i, col))
    {
      chBoard[i][col] = 1;

      solveNQueenAll(chBoard, col + 1);

      chBoard[i][col] = 0;
    }
  }
}

int main(void)
{
  int chBoard[N][N] = {0};

  solveNQueenAll(chBoard, 0);

  if (solutionCount == 0)
    printf("No solution exists.\n");

  return 0;
}

// Graph Coloring Problem
#include <stdio.h>
#define V 4

void displaySolution(int color[])
{
  for (int i = 0; i < V; i++)
    printf("%d ", color[i]);
}

int isSafe(int v, int graph[V][V], int color[], int c)
{
  for (int i = 0; i < V; i++)
  {
    if (c == color[i] && graph[v][i])
      return 0;
  }
  return 1;
}

int graphColoringUtil(int graph[V][V], int m, int color[], int v)
{
  if (v == V)
    return 1;

  for (int c = 1; c <= m; c++)
  {
    if (isSafe(v, graph, color, c))
    {
      color[v] = c;

      if (graphColoringUtil(graph, m, color, v + 1) == 1)
        return 1;

      color[v] = 0;
    }
  }

  return 0;
}

int findMinColors(int graph[V][V])
{
  int color[V];

  for (int m = 1; m <= V; m++)
  {
    for (int i = 0; i < V; i++)
      color[i] = 0;

    if (graphColoringUtil(graph, m, color, 0))
    {
      printf("Minimum number of colors required: %d\n", m);
      printf("Coloring of vertices: ");
      displaySolution(color);
      return m;
    }
  }

  printf("No solution exists.\n");
  return -1;
}

int main(void)
{
  int graph[V][V] = {
      {0, 1, 1, 1},
      {1, 0, 1, 0},
      {1, 1, 0, 1},
      {1, 0, 1, 0}};

  findMinColors(graph);

  return 0;
}
