// // 1. Matrix Addition
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m1, n1;
//   scanf("%d %d", &m1, &n1);
//   int a[m1][n1];
//   for (int i = 0; i < m1; i++)
//   {
//     for (int j = 0; j < n1; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }

//   int m2, n2;
//   scanf("%d %d", &m2, &n2);
//   int b[m2][n2];
//   for (int i = 0; i < m2; i++)
//   {
//     for (int j = 0; j < n2; j++)
//     {
//       scanf("%d", &b[i][j]);
//     }
//   }

//   if (m1 == m2 && n1 == n2)
//   {
//     int c[m1][n1];
//     for (int i = 0; i < m1; i++)
//     {
//       for (int j = 0; j < n1; j++)
//       {
//         c[i][j] = a[i][j] + b[i][j];
//       }
//     }
//     for (int i = 0; i < m1; i++)
//     {
//       for (int j = 0; j < n1; j++)
//       {
//         printf("%d ", c[i][j]);
//       }
//       printf("\n");
//     }
//   }
//   else
//   {
//     printf("Matrices are not of same size");
//   }
// }

// // 2. Matrix Subtraction
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m1, n1;
//   scanf("%d %d", &m1, &n1);
//   int a[m1][n1];
//   for (int i = 0; i < m1; i++)
//   {
//     for (int j = 0; j < n1; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }

//   int m2, n2;
//   scanf("%d %d", &m2, &n2);
//   int b[m2][n2];
//   for (int i = 0; i < m2; i++)
//   {
//     for (int j = 0; j < n2; j++)
//     {
//       scanf("%d", &b[i][j]);
//     }
//   }

//   if (m1 == m2 && n1 == n2)
//   {
//     int c[m1][n1];
//     for (int i = 0; i < m1; i++)
//     {
//       for (int j = 0; j < n1; j++)
//       {
//         c[i][j] = a[i][j] - b[i][j];
//       }
//     }
//     for (int i = 0; i < m1; i++)
//     {
//       for (int j = 0; j < n1; j++)
//       {
//         printf("%d ", c[i][j]);
//       }
//       printf("\n");
//     }
//   }
//   else
//   {
//     printf("Matrices are not of same size");
//   }
// }

// // 3. Matrix Multiplication
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m1, n1;
//   scanf("%d %d", &m1, &n1);
//   int a[m1][n1];
//   for (int i = 0; i < m1; i++)
//   {
//     for (int j = 0; j < n1; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }

//   int m2, n2;
//   scanf("%d %d", &m2, &n2);
//   int b[m2][n2];
//   for (int i = 0; i < m2; i++)
//   {
//     for (int j = 0; j < n2; j++)
//     {
//       scanf("%d", &b[i][j]);
//     }
//   }

//   if (n1 == m2)
//   {
//     int c[m1][n2];
//     for (int i = 0; i < m1; i++)
//     {
//       for (int j = 0; j < n2; j++)
//       {
//         c[i][j] = 0;
//         for (int k = 0; k < n1; k++)
//         {
//           c[i][j] += a[i][k] * b[k][j];
//         }
//       }
//     }
//     for (int i = 0; i < m1; i++)
//     {
//       for (int j = 0; j < n2; j++)
//       {
//         printf("%d ", c[i][j]);
//       }
//       printf("\n");
//     }
//   }
//   else
//   {
//     printf("Matrices are not of same size");
//   }
// }

// // 4. Matrix Sum of Diagonal Elements
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m, n;
//   scanf("%d %d", &m, &n);
//   int a[m][n];
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }
//   if (m == n)
//   {
//     int ldsum = 0, rdsum = 0;
//     for (int i = 0; i < m; i++)
//     {
//       for (int j = 0; j < n; j++)
//       {
//         if (i == j)
//         {
//           ldsum += a[i][j];
//         }
//         if (i + j == m - 1)
//         {
//           rdsum += a[i][j];
//         }
//       }
//     }
//     printf("Left Diagonal Sum: %d\nRight Diagonal Sum: %d", ldsum, rdsum);
//   }
//   else
//     printf("Sum of Diagonal Elements can't be found for non-square matrices");
// }

// // 5. Matrix Transpose
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m, n;
//   scanf("%d %d", &m, &n);
//   int a[m][n];
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }
//   int b[n][m];
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       b[i][j] = a[j][i];
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       printf("%d ", b[i][j]);
//     }
//     printf("\n");
//   }
// }

// // 6. Adjoint of a Matrix
// #include <stdio.h>
// #include <stdlib.h>

// void getCofactor(int **A, int **temp, int p, int q, int n)
// {
//   int i = 0, j = 0;

//   for (int row = 0; row < n; row++)
//   {
//     for (int col = 0; col < n; col++)
//     {
//       if (row != p && col != q)
//       {
//         temp[i][j++] = A[row][col];

//         if (j == n - 1)
//         {
//           j = 0;
//           i++;
//         }
//       }
//     }
//   }
// }

// int determinant(int **A, int n)
// {
//   if (n == 1)
//     return A[0][0];
//   if (n == 2)
//     return A[0][0] * A[1][1] - A[0][1] * A[1][0];

//   int D = 0;
//   int **temp = (int **)malloc(n * sizeof(int *));
//   for (int i = 0; i < n; i++)
//     temp[i] = (int *)malloc(n * sizeof(int));

//   int sign = 1;

//   for (int f = 0; f < n; f++)
//   {
//     getCofactor(A, temp, 0, f, n);
//     D += sign * A[0][f] * determinant(temp, n - 1);
//     sign = -sign;
//   }

//   for (int i = 0; i < n; i++)
//     free(temp[i]);
//   free(temp);

//   return D;
// }

// void adjoint(int **A, int **adj, int N)
// {
//   if (N == 1)
//   {
//     adj[0][0] = 1;
//     return;
//   }

//   int sign = 1;
//   int **temp = (int **)malloc(N * sizeof(int *));
//   for (int i = 0; i < N; i++)
//     temp[i] = (int *)malloc(N * sizeof(int));

//   for (int i = 0; i < N; i++)
//   {
//     for (int j = 0; j < N; j++)
//     {

//       getCofactor(A, temp, i, j, N);

//       sign = ((i + j) % 2 == 0) ? 1 : -1;

//       adj[j][i] = (sign) * (determinant(temp, N - 1));
//     }
//   }

//   for (int i = 0; i < N; i++)
//     free(temp[i]);
//   free(temp);
// }

// int main()
// {
//   int N;
//   scanf("%d", &N);
//   int **A = (int **)malloc(N * sizeof(int *));
//   for (int i = 0; i < N; i++)
//     A[i] = (int *)malloc(N * sizeof(int));

//   for (int i = 0; i < N; i++)
//     for (int j = 0; j < N; j++)
//       scanf("%d", &A[i][j]);

//   int **adj = (int **)malloc(N * sizeof(int *));
//   for (int i = 0; i < N; i++)
//     adj[i] = (int *)malloc(N * sizeof(int));

//   adjoint(A, adj, N);

//   printf("Adjoint of the matrix is:\n");
//   for (int i = 0; i < N; i++)
//   {
//     for (int j = 0; j < N; j++)
//       printf("%d ", adj[i][j]);
//     printf("\n");
//   }

//   for (int i = 0; i < N; i++)
//   {
//     free(A[i]);
//     free(adj[i]);
//   }
//   free(A);
//   free(adj);

//   return 0;
// }

// // 7. Inverse of a Matrix
// #include <stdio.h>
// #include <stdlib.h>

// void getCofactor(int **A, int **temp, int p, int q, int n)
// {
//   int i = 0, j = 0;

//   for (int row = 0; row < n; row++)
//   {
//     for (int col = 0; col < n; col++)
//     {
//       if (row != p && col != q)
//       {
//         temp[i][j++] = A[row][col];

//         if (j == n - 1)
//         {
//           j = 0;
//           i++;
//         }
//       }
//     }
//   }
// }

// int determinant(int **A, int n)
// {
//   if (n == 1)
//     return A[0][0];
//   if (n == 2)
//     return A[0][0] * A[1][1] - A[0][1] * A[1][0];

//   int D = 0;
//   int **temp = (int **)malloc(n * sizeof(int *));
//   for (int i = 0; i < n; i++)
//     temp[i] = (int *)malloc(n * sizeof(int));

//   int sign = 1;

//   for (int f = 0; f < n; f++)
//   {
//     getCofactor(A, temp, 0, f, n);
//     D += sign * A[0][f] * determinant(temp, n - 1);
//     sign = -sign;
//   }

//   for (int i = 0; i < n; i++)
//     free(temp[i]);
//   free(temp);

//   return D;
// }

// void adjoint(int **A, int **adj, int N)
// {
//   if (N == 1)
//   {
//     adj[0][0] = 1;
//     return;
//   }

//   int sign = 1;
//   int **temp = (int **)malloc(N * sizeof(int *));
//   for (int i = 0; i < N; i++)
//     temp[i] = (int *)malloc(N * sizeof(int));

//   for (int i = 0; i < N; i++)
//   {
//     for (int j = 0; j < N; j++)
//     {

//       getCofactor(A, temp, i, j, N);

//       sign = ((i + j) % 2 == 0) ? 1 : -1;

//       adj[j][i] = (sign) * (determinant(temp, N - 1));
//     }
//   }

//   for (int i = 0; i < N; i++)
//     free(temp[i]);
//   free(temp);
// }

// int main(void)
// {
//   int N;
//   scanf("%d", &N);
//   int **A = (int **)malloc(N * sizeof(int *));
//   for (int i = 0; i < N; i++)
//     A[i] = (int *)malloc(N * sizeof(int));

//   for (int i = 0; i < N; i++)
//     for (int j = 0; j < N; j++)
//       scanf("%d", &A[i][j]);

//   int det = determinant(A, N);

//   if (det != 0)
//   {
//     int **adj = (int **)malloc(N * sizeof(int *));
//     for (int i = 0; i < N; i++)
//       adj[i] = (int *)malloc(N * sizeof(int));

//     adjoint(A, adj, N);

//     printf("Determinant of the matrix A is:%d\n", det);
//     float **inv = (float **)malloc(N * sizeof(float *));
//     for (int i = 0; i < N; i++)
//       inv[i] = (float *)malloc(N * sizeof(float));

//     for (int i = 0; i < N; i++)
//     {
//       for (int j = 0; j < N; j++)
//       {
//         inv[i][j] = (float)adj[i][j] / det;
//       }
//     }

//     printf("Inverse of the matrix is:\n");
//     for (int i = 0; i < N; i++)
//     {
//       for (int j = 0; j < N; j++)
//         printf("%f ", inv[i][j]);
//       printf("\n");
//     }

//     for (int i = 0; i < N; i++)
//       free(inv[i]);
//     free(inv);
//     for (int i = 0; i < N; i++)
//     {
//       free(A[i]);
//       free(adj[i]);
//     }
//     free(A);
//     free(adj);
//   }
//   else
//     printf("Determinant of the matrix A is zero. No inverse exists.", det);
// }

// // 8. Matrix Determinant
// #include <stdio.h>
// #include <stdlib.h>

// void getCofactor(int **A, int **temp, int p, int q, int n)
// {
//   int i = 0, j = 0;

//   for (int row = 0; row < n; row++)
//   {
//     for (int col = 0; col < n; col++)
//     {
//       if (row != p && col != q)
//       {
//         temp[i][j++] = A[row][col];

//         if (j == n - 1)
//         {
//           j = 0;
//           i++;
//         }
//       }
//     }
//   }
// }

// int determinant(int **A, int n)
// {
//   if (n == 1)
//     return A[0][0];
//   if (n == 2)
//     return A[0][0] * A[1][1] - A[0][1] * A[1][0];

//   int D = 0;
//   int **temp = (int **)malloc(n * sizeof(int *));
//   for (int i = 0; i < n; i++)
//     temp[i] = (int *)malloc(n * sizeof(int));

//   int sign = 1;

//   for (int f = 0; f < n; f++)
//   {
//     getCofactor(A, temp, 0, f, n);
//     D += sign * A[0][f] * determinant(temp, n - 1);
//     sign = -sign;
//   }

//   for (int i = 0; i < n; i++)
//     free(temp[i]);
//   free(temp);

//   return D;
// }

// int main()
// {
//   int m, n;
//   scanf("%d %d", &m, &n);
//   int **a = (int **)malloc(m * sizeof(int *));
//   for (int i = 0; i < m; i++)
//   {
//     a[i] = (int *)malloc(n * sizeof(int));
//     for (int j = 0; j < n; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }

//   if (m != n)
//   {
//     printf("Determinant is only defined for square matrices.\n");
//   }
//   else
//   {
//     int det = determinant(a, m);
//     printf("%d\n", det);
//   }

//   for (int i = 0; i < m; i++)
//   {
//     free(a[i]);
//   }
//   free(a);

//   return 0;
// }

// // 9. Symmetric Matrix
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m, n;
//   scanf("%d %d", &m, &n);
//   int a[m][n];
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }

//   int b[n][m];
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       b[i][j] = a[j][i];
//     }
//   }

//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if (a[i][j] != b[i][j])
//       {
//         printf("Not Symmetric\n");
//         return 0;
//       }
//     }
//   }
//   printf("Symmetric\n");
// }

// // 10. Sparse Matrix
// #include <bits/stdc++.h>
// int main(void)
// {
//   int m, n;
//   scanf("%d %d", &m, &n);
//   int a[m][n];
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       scanf("%d", &a[i][j]);
//     }
//   }

//   int count = 0;
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if (a[i][j] == 0)
//       {
//         count++;
//       }
//     }
//   }

//   if (count > (m * n) / 2)
//   {
//     printf("Sparse\n");
//   }
//   else
//   {
//     printf("Not Sparse\n");
//   }
// }
