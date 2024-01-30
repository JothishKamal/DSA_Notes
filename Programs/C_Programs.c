// // Digit manipulation 
// void main(){
//   int n,len,temp,sum=0,d;
//   scanf("%d",&n);
//   len = intLength(n);
//   for(int i=len; i>=1; i--){
//     d=n%10;
//     printf("%d ",d);
//     n/=10;
//   }
//   printf("\n");
//   printf("%d", sum);
//   printf("\n");
// }

// // Prime Numbers
// #include <stdio.h>
// int main(void){
//   int a,b,flag;
//   scanf("%d %d",&a,&b);
//   for (int i=a; i<=b; i++){
//     flag=0;
//     for (int j=2; j<=i/2; j++){
//       if (i%j==0){
//         flag=1;
//         break;
//       }
//     }
//     if(flag==0){
//       printf("%d is prime\n",i);
//     }
//   }
//   printf("\n");
// }

// Patterns
/* 
(i)
*
* *
* * *
* * * *
* * * * *
*/
// #include <stdio.h>
// int main(void){
//   int n;
//   scanf("%d", &n);
//   for (int i=0;i<n;i++){
//     printf("\n");
//     for (int j=0; j<=i; j++){
//       printf("* ");
//     }
//   }
//   printf("\n");
// }

/*
(ii)
    *
   **
  ***
 ****
*****
*/

// #include <stdio.h>
// int main(void){
//   int n,i,j,k;
//   scanf("%d", &n);
//   for(i=0; i<n; i++){
//     for(j=0; j<n-1-i; j++){
//       printf(" ");
//     }
//     for(k=0; k<n-j; k++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   printf("\n");
// }

/*
(iii)
    *
   * *
  * * *
 * * * *
* * * * *
*/

// #include <stdio.h>
// int main(void){
//   int n,i,j,k;
//   scanf("%d", &n);
//   for(i=0; i<n; i++){
//     for(j=0; j<n-1-i; j++){
//       printf(" ");
//     }
//     for(k=0; k<n-j; k++){
//       printf("* ");
//     }
//     printf("\n");
//   }
//   printf("\n");
// }

/*
(iv)
  b 
 bbb 
bbbbb
 bbb 
  b
*/
// #include <stdio.h>
// int main(void){
//   int n;
//   scanf("%d", &n);
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n-i-1; j++){
//       printf(" ");
//     }
//     for(int j=0; j<2*i+1; j++){
//       printf("b");
//     }
//     for(int j=0; j<n-i-1; j++){
//       printf(" ");
//     }
//     printf("\n");
//   }
//   for(int i=0; i<n; i++){
//     for(int j=0; j<=i; j++) printf(" ");
//     for(int j=0; j<2*n-(2*i+1)-2; j++){
//       printf("b");
//     }
//     for(int j=0; j<=i; j++) printf(" ");
//     printf("\n");
//   }
// }

/*
(v)

 d d    
d d d   
 d d    

   d d         
  d d d        
 d d d d       
d d d d d      
 d d d d       
  d d d        
   d d         
*/
// #include <stdio.h>
// int main(void){
//   int n;
//   scanf("%d",&n);
//   for(int i=0; i<n-1; i++){
//     for(int j=0; j<n-i-2; j++) printf(" ");
//     for(int j=0; j<i+2; j++) printf("d ");
//     for(int j=0; j<n-i-2; j++) printf(" ");
//     printf("\n");
//   }
//   for(int i=0; i<n-2; i++){
//     for(int j=0; j<=i; j++) printf(" ");
//     for(int j=n-i-1; j>0; j--) printf("d ");
//     for(int j=0; j<=i; j++) printf(" ");
//     printf("\n");
//   }
// }

#include <stdio.h>
int main(void) {
    char a[10];
    char abc[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZA";
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U') {
            for (int j = 0; j < 26; j++) {
                if (a[i] == abc[j]) {
                    a[i] = abc[j + 1];
                    break;
                }
            }
        }
    }
    printf("%s", a);
}