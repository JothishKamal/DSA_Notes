//// PPS1.1
// #include<stdio.h>
// void print(int n){
//   if(n>0) 
//     printf("#");
//     print(n-1);
// }
// int main(void){
//   int n;
//   scanf("%d",&n);
//   print(n);
// }

//// PPS1.2
// #include<stdio.h>
// int main(void){
//     int n;
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++) printf(" ");
//         for(int j=0; j<n-i; j++){
//             if(i%2==0) printf("@ ");
//             else printf("& ");
//         }
//         for(int j=0; j<i; j++) printf(" ");
//         printf("\n");
//     }
// }

//// PPS1.3
// #include<stdio.h>
// int main(void){
//   int m,n;
//   scanf("%d %d",&m,&n);
//   int a[m][n];
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       scanf("%d",&a[i][j]);
//     }
//   }
  
//   for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//       printf("%d ",a[j][i]);
//     }
//     printf("\n");
//   }
// }

//// PPS1.4
// #include<stdio.h>
// #include<string.h>
// int main(void){
//   char name[20];
//   char digits[]={'1','2','3','4','5','6','7','8','9','0'};
//   fgets(name,20,stdin);
//   name[strlen(name)-1]='\0';
//   int flag=0;
//   for(int i=0; name[i]!='\0'; i++){
//     for(int j=0; j<10; j++){
//       if(name[i]==digits[j]){
//         flag=1;
//       }
//     }
//   }
//   if(flag==0) printf("Valid");
//   else printf("Invalid");
// }

//// PPS1.5
// #include<stdio.h>
// int main(void){
//   int m,n;
//   scanf("%d %d",&m,&n);
//   int a[m][n],b[m][n],avg=0;
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       scanf("%d",&a[i][j]);
//     }
//   }

//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       avg+=a[i][j];
//     }
//   }
//   avg=avg/(m*n);
  
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       b[i][j]=avg-a[i][j];
//     }
//   }

//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       printf("%d ",b[i][j]);
//     }
//     printf("\n");
//   }
// }

//// PPS1.6
// #include<stdio.h>
// int odd(int a[],int n){
//   int odd=0;
//   for(int *ptr=a,i=0; i<n; i++){
//     if(ptr[i]%2!=0) odd+=1;
//   }
//   return odd;
// }

// int even(int a[],int n){
//   int even=0;
//   for(int *ptr=a,i=0; i<n; i++){
//     if(ptr[i]%2==0) even+=1;
//   }
//   return even;
// }

// int main(void){
//   int n;
//   scanf("%d",&n);
//   int a[5];
//   for(int i=0; i<n; i++){
//     scanf("%d",&a[i]);
//   }
//   printf("%d %d",odd(a,n),even(a,n));
// }

//// PPS1.7
// #include<stdio.h>
// struct RowColumn
// {
//   int row, column;
// };
// typedef struct RowColumn Struct;
// Struct searchKey(int *a,int m, int n, int key){
//   struct RowColumn rc;
//   int *ptr=a;
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       if(*ptr==key){
//         rc.row=i;
//         rc.column=j;
//         return rc;
//       }
//       ptr++;
//     }
//   }
//   rc.row=NULL; rc.column=NULL;
//   return rc;
// }
// int main(void){
//   int m,n;
//   scanf("%d %d",&m,&n);
//   int a[m][n];
//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       scanf("%d", &a[i][j]);
//     }
//   }
//   int key; scanf("%d",&key);
//   Struct rc=searchKey(&a[0][0],m,n,key);
//   if(rc.row == NULL && rc.column == NULL) printf("Data not found");
//   else printf("%d %d",rc.row,rc.column);
// }

//// PPS1.8
// #include<stdio.h>
// #include<stdlib.h>
// int main(void){
//   int n,ct=0;
//   scanf("%d",&n);
//   int *a=(int *)malloc(sizeof(int)*n);
//   for(int i=0; i<n; i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0; i<n; i++){
//     if(a[i]%10==0) ct+=1;
//   }
//   printf("%d",ct);
//   free(a);
// }

//// PPS1.9
// #include<stdio.h>
// #include<stdlib.h>
// int main(void){
//   int n,temp;
//   scanf("%d",&n);
//   int *a=(int *)malloc(sizeof(int)*n);
//   for(int i=0; i<n; i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       if(j!=n-1){
//         if(a[j]<a[j+1]){
//           temp=a[j];
//           a[j]=a[j+1];
//           a[j+1]=temp;
//         }
//       }
//     }
//   }
//   for(int i=0; i<n; i++){
//     printf("%d ",a[i]);
//   }
//   free(a);
// }

//// PPS1.10
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(void){
//   char *s=(char *)malloc(20);
//   scanf("%s",s);
//   scanf(" ");
//   char c;
//   scanf("%c",&c);
//   int ct=0;
//   for(int i=0; s[i]!='\0'; i++){
//     printf("%c",s[i]);
//     if(s[i]==c){
//       ct+=1;
//     }
//   }
//   printf("%d",ct);
// }

//// PPS2.4
#include<stdio.h>
#include<string.h>
void numOfOccurences(char s1[],char s2[]){
  int l1=strlen(s1);
  int l2=strlen(s2);
  int ct,fct=0;
  for(int i=0; i<l1; i++){
    ct=0;
    for(int j=0; j<l2; j++){
      if(s1[i]==s2[j]){
        ct++;
        i=i+1;
      }
    }
    if(ct==l2){ fct++; i=i-1;}
  }
  printf("%d",fct);
}
int main(void){
  char s1[20],s2[20];
  scanf("%s",s1);
  scanf("%s",s2);
  void (*p)(char *, char *)=numOfOccurences;
  p(s1,s2);
}