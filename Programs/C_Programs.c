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
#include<stdio.h>
int main(void){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++){
    a[i]=NULL;
  }

  do{
    int ch,index,x,temp;
    printf("\n1. Insert an element at specified index");
    printf("\n2. Search and delete the first occurence element");
    printf("\n3. Display the array");
    printf("\n4. Search for an element");
    printf("\n5. Exit");
    scanf("%d",&ch);

    switch(ch){
      case 1:
        printf("Enter the element to be inserted: ");
        scanf("%d",&x);
        printf("Enter the index: ");
        scanf("%d",&index);
        if(index>n-1 || index<0) printf("Invalid index");
        else {
          if(a[index]==NULL) a[index]=x;
          else{
          }
        }
        
      break;

      case 2:
      break;
      
      case 3:
      break;
      
      case 4:
      break;
      
      case 5:
      break;
      
      default:
        printf("Invalid choice");
    }
  
  if (ch==5) break;

  } while(1);
}



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