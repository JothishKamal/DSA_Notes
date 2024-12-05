// // List
// #include <stdio.h>
// #define size 5
// int l[size];
// int lc = -1;

// void insert()
// {
//   int x;
//   scanf("%d", &x);

//   if (lc >= size - 1)
//     printf("List is full\n");
//   else
//   {
//     l[++lc] = x;
//   }
// }

// void delete()
// {
//   if (lc == -1)
//     printf("List is empty\n");
//   else
//   {
//     int x, idx, flag = 0;
//     scanf("%d", &x);
//     for (int i = 0; i <= lc; i++)
//     {
//       if (l[i] == x)
//       {
//         idx = i;
//         flag = 1;
//         break;
//       }
//     }

//     if (flag == 0)
//       printf("Element not found\n");
//     else
//     {
//       printf("Deleted: %d\n", l[idx]);
//       for (int i = idx + 1; i <= lc; i++)
//       {
//         l[i - 1] = l[i];
//       }
//       lc--;
//     }
//   }
// }

