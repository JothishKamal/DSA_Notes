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

// Searching an array
// #include<stdio.h>
// int main(void){
//     int n,e;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0; i<n; i++) scanf("%d",&a[i]);
//     printf("Enter the Element to be searched: ");
//     scanf("%d",&e);
//     for(int i=0; i<n; i++){
//       if (a[i]==e){
//         printf("\n%d found at %d",e,i);
//       }
//     }
// }

/* HW
1. Insertion
2. Deletion (find and delete first occurence)
3. Display
4. Search
*/
// #include<stdio.h>
// int main(void){
//   int n;
//   printf("Enter the size of the array: ");
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0; i<n; i++){
//     a[i]=NULL;
//   }

//   do{
//     int ch,index,x,temp;
//     printf("\n1. Insert an element at specified index");
//     printf("\n2. Search and delete the first occurence of an element");
//     printf("\n3. Display the array");
//     printf("\n4. Search for an element");
//     printf("\n5. Exit");
//     printf("\nEnter your choice: ");
//     scanf("%d",&ch);

//     switch(ch){
//       case 1:
//         printf("Enter the element to be inserted: ");
//         scanf("%d",&x);
//         printf("Enter the index: ");
//         scanf("%d",&index);
//       break;

//       case 2:
//       break;
      
//       case 3:
//       for(int i=0; i<n; i++){
//         printf("%d ",a[i]);

//       }
//       break;
      
//       case 4:
//       break;
      
//       case 5:
//       break;
      
//       default:
//         printf("Invalid choice");
//     }
  
//   if (ch==5) break;

//   } while(1);
// }



/*
Char Arrays(Strings)
'\0' - NULL Character
*/
// #include<stdio.h>
// #include<string.h>
// int main(void){
//   char name[20],c1,c2;
//   fgets(name,20,stdin);
//   name[strlen(name)-1]='\0';
//   scanf("%c %c",&c1,&c2);
//   for(int i=0; name[i]!='\0'; i++) 
//     if(name[i]==c1){
//       name[i]=c2;
//     }
//   printf("%s",name);
// }


/* Sum,Avg,Max,Min of a matrix */
// #include<stdio.h>
// int main(void){
//   int m,n,sum=0,min,max;
//   scanf("%d %d", &m, &n);
//   int mat[m][n];
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       scanf("%d",&mat[i][j]);
//     }
//   }

//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       if(i==0 && j==0){
//         min=mat[i][j];
//         max=mat[i][j];
//       }
//       if(mat[i][j]>max){
//         max=mat[i][j];
//       }
//       if(mat[i][j]<min){
//         min=mat[i][j];
//       }
//       sum+=mat[i][j];
//     }
//   }

//   int avg=sum/(m*n);
//   printf("Sum=%d",sum);
//   printf("\nAvg=%d",avg);
//   printf("\nMax=%d",max);
//   printf("\nMin=%d",min);
//   // for(int i=0; i<m; i++){
//   //   for(int j=0; j<n; j++){
//   //     printf("%d",mat[i][j]);
//   //   }
//   // }
// }

// #include<stdio.h>
// int main(void){
//   int m,n;
//   scanf("%d %d",&m,&n);

//   int a[m][n];
//   for(int i=0;i<m;i++){
//     for(int j=0; j<n;j++){
//       scanf("%d",&a[i][j]);
//     }
//   }
  
//   // // Minor/Left Diagonal
//   // for(int i=0;i<m;i++){
//   //   for(int j=n-1; j>=0;j--){
//   //     printf("%d",a[i][j]);
//   //   }
//   // }

//   // Outer Elements
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       if(i==0 || i==m-1) printf("%d",a[i][j]);
//     } 
//     printf("%d %d ",a[i][0],a[i][n-1]);
//     printf("\n");
//   }
// }

// Sparse matrix = Number of zero elements>Number of elements
// #include<stdio.h>
// int main(void){
//   int m,n,ct,zct=0;
//   scanf("%d %d", &m,&n);
//   int a[m][n];
  
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       scanf("%d",&a[i][j]);
//     }
//   }

//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       if(a[i][j]==0) zct+=1;
//     }
//   }

//   if(zct>=((float)2/3)*m*n) printf("Sparse Matrix");
//   else printf("Not a Sparse Matrix");
// }

// Function Pointer
// #include<stdio.h>
// int fact(int n){
//   if(n==1 || n==0){
//     return 1;
//   } else return n*fact(n-1);
// }
// int main(void){
//   int (*p)(int)=fact;
//   int n=5;
//   p=fact;
//   printf("%d ",p(n));
//   printf("%d",(*p)(n+1));
// }

// #include<stdio.h>
// int main(void){
//   float a[4]={1,2,2,3},b[3];
//   for(int i=0,x=0; i<4; i++){
//      int k=0;
//     //  if (i==0){
//     //      printf("%.2f ",a[i]);
//     //  }
//     for(int j=0; j<=i; j++){
//       if(a[i]!=a[j]){
//           k+=1;
//         }
//           if (k==i){
//             b[x]=a[i];
//             x++;
//             break;
//           }
        
//     }
//   }
//    for(int i=0; i<8; i++){
//      printf("%.2f ",b[i]);
//    }
// }

#include<stdio.h>
#include<stdlib.h>
void sqr(int *a, int n){
  for(int i=0; i<n; i++){
    a[i]=a[i]*a[i];
  }
}
int main(void){
  int n;
  scanf("%d",&n);
  int *a=(int *)malloc(n*sizeof(int));
  void (*f)(int*,int)=sqr;
  for(int i=0; i<n; i++) scanf("%d",&a[i]);
  f(a,n);
  for(int i=0; i<n; i++) printf("%d",a[i]);
}
