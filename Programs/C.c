// #include <stdio.h>
// typedef struct
// {
//   char s[20];
//   int size;
// } string;

// char lwr(char c)
// {
//   if (c >= 65 && c <= 90)
//     return c + 32;
//   else
//     return c;
// }

// int main(void)
// {
//   int n;
//   scanf("%d", &n);
//   string x[n];

//   for (int i = 0; i < n; i++)
//   {
//     int len;
//     scanf("%s", x[i].s);
//     for (len = 0; x[i].s[len] != '\0'; len++)
//       ;
//     x[i].size = len;
//   }

//   char c;
//   scanf("\n");
//   scanf("%c", &c);
//   c = lwr(c);

//   int a[n], ctSum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     a[i] = 0;
//     for (int j = 0; j < x[i].size; j++)
//     {
//       if (c == lwr(x[i].s[j]))
//       {
//         a[i]++;
//         ctSum++;
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//     printf("%d ", a[i]);
//   printf("\n%d", ctSum);
// }

