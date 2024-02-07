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
//   int temp_sum, ct;
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

//   printf("\n");

//   // LHS
//   if(nB==mC){
//     for(int i=0; i<mB; i++){
//       for(int j=0; j<nC; j++){
//         temp_sum=0;
//         for(int k=0; k<mC; k++){
//           temp_sum+=B[i][k]*C[k][j];
//         }
//         BC[i][j]=temp_sum;
//       }
//     }
    
//     // A.(B.C)
//     if(nA==mB){
//       for(int i=0; i<mA; i++){
//         for(int j=0; j<nC; j++){
//           temp_sum=0;
//           for(int k=0; k<mB; k++){
//             temp_sum+=A[i][k]*BC[k][j];
//           }
//           A_BC[i][j]=temp_sum;
//         }
//       }
//     } else printf("\nCan't Multiply Matrix A and B.C");

//   } else printf("\nCan't Multiply Matrix B and C");
  
//   // RHS
//   if(nA==mB){
//     for(int i=0; i<mA; i++){
//       for(int j=0; j<nB; j++){
//         temp_sum=0;
//         for(int k=0; k<mB; k++){
//           temp_sum+=A[i][k]*B[k][j];
//         }
//         AB[i][j]=temp_sum;
//       }
//     }
    
//     // (A.B).C
//     if(nB==mC){
//       for(int i=0; i<mA; i++){
//         for(int j=0; j<nC; j++){
//           temp_sum=0;
//           for(int k=0; k<mC; k++){
//             temp_sum+=AB[i][k]*C[k][j];
//           }
//           AB_C[i][j]=temp_sum;
//         }
//       } 
//     } else printf("\nCan't Multiply Matrix A.B and C");

//   } else printf("\nCan't Multiply Matrix A and B");


//   for(int i=0; i<mA; i++){
//     for(int j=0; j<nC; j++){
//       if(A_BC[i][j]==AB_C[i][j]) ct+=1;
//     }
//   }

//   if(ct==(mA*nC)){
//     printf("Associative Law is true for Matrices A,B and C");
//   }

//   printf("\nThe Resultant Matrix is: ");
//   for(int i=0; i<mA; i++){
//     for(int j=0; j<nC; j++){
//       printf("\n%d",AB_C[i][j]);
//     }
//   }
// }


// #include<stdio.h>
// int main(void){
//   int num, temp, a[4];
//   scanf("%d",&num);
//   if(num>0){
//     for(int i=0; num; i++){
//     a[i]=num%10;
//     num/=10;
//     }

//     for(int i=0; i<4; i++){
//       for(int j=0; j<4; j++){
//         if(j!=3){
//           if(a[j]>a[j+1]){
//             temp=a[j];
//             a[j]=a[j+1];
//             a[j+1]=temp;
//           }
//         }
//       }
//     }

//     int sum=0;
//     for(int i=0; i<4; i++){
//       if (i%2==0) sum+=a[i]*10;
//       else sum+=a[i];
//     }
//     printf("%d", sum);
//   } else printf("Invalid");
// }
