/*
Thirukkural Program
Chapters = 133 (Each chapter contains 10 verses)
Verses = 1330 (Each verse contains 2 lines)
Lines = 2660
*/
// #include <stdio.h>
// int main(void){
//   int line;
//   scanf("%d", &line);

//   if (line%20==0){
//     printf("CHAPTER=%d\n",line/20);
//   } else {
//     printf("CHAPTER=%d\n",line/20+1);
//   }

//   if (line%2==0)
//     printf("VERSE=%d\n",(line/2)%10 == 0 ? 10:(line/2)%10);
//   else
//     printf("VERSE=%d\n",(line/2)%10+1);
  
//   if(line%2==0 && line!=0){
//     printf("LINE=2");
//   } else if (line!=0) {
//     printf("LINE=1");
//   } else {
//     printf("Invalid Line.");
//   }
// }

// Consonant Increment
// #include <stdio.h>
// int main(void) {
//     char a[10];
//     char abc[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZA";
//     scanf("%s", a);
//     for (int i = 0; a[i] != '\0'; i++) {
//         if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U') {
//             for (int j = 0; j < 26; j++) {
//                 if (a[i] == abc[j]) {
//                     a[i] = abc[j + 1];
//                     break;
//                 }
//             }
//         }
//     }
//     printf("%s", a);
// }

// Bubble Sort
// #include<stdio.h>
// int main(void){
//   int n, temp;
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0; i<n; i++) scanf("%d",&a[i]);

//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       if(j!=n-1){
//         if(a[j]>a[j+1]){
//           temp=a[j];
//           a[j]=a[j+1];
//           a[j+1]=temp;
//         }
//       }
//     }
//   }

//   for(int i=0; i<n; i++) printf("%d ",a[i]);                            
// }

// Matrix Multiplication
// #include <stdio.h>
// int main(void){
//   int mA, nA, mB, nB, mC, nC;

//   scanf("%d %d", &mA, &nA);
//   scanf("%d %d", &mB, &nB);
//   scanf("%d %d", &mC, &nC);
  
//   int A[mA][nA], B[mB][nB], C[mC][nC];
//   int A_BC[mA][nC], BC[mB][nC];
//   int AB_C[mA][nC], AB[mA][nB];
  
//   // Input for Matrix A
//   for(int i=0; i<mA; i++){
//     for(int j=0; j<nA; j++){
//       scanf("%d", &A[i][j]);
//     }
//   }

//   // Input for Matrix B
//   for(int i=0; i<mB; i++){
//     for(int j=0; j<nB; j++){
//       scanf("%d", &B[i][j]);
//     }
//   }

//   // Input for Matrix C
//   for(int i=0; i<mC; i++){
//     for(int j=0; j<nC; j++){
//       scanf("%d", &C[i][j]);
//     }
//   }

//   // A.(B.C)
//   if(nB==mC){
//   } else {
//     printf("Can't Multiply Matrix B and C");
//   }
  
//   // // Matrix A
//   // printf("\n");
//   // for(int i=0; i<mA; i++){
//   //   for(int j=0; j<nA; j++){
//   //     printf("%d ",A[i][j]);
//   //   }
//   //   printf("\n");
//   // }

//   // // Matrix B
//   // printf("\n");
//   // for(int i=0; i<mB; i++){
//   //   for(int j=0; j<nB; j++){
//   //     printf("%d ",B[i][j]);
//   //   }
//   //   printf("\n");
//   // }

//   // // Matrix C
//   // printf("\n");
//   // for(int i=0; i<mC; i++){
//   //   for(int j=0; j<nC; j++){
//   //     printf("%d ",C[i][j]);
//   //   }
//   //   printf("\n");
//   // }
// }
