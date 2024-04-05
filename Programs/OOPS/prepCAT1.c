#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// int *Score(int *,int);
// // Testing Code
// int main(void){
// 	int n;
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0; i<n; i++) scanf("%d",&a[i]);
//   int *maxScore=Score(a,n); 
//   printf("%d",*maxScore);
// }
// int *Score(int *a,int n){
//   int temp;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n-1; j++){
//       if(a[j]>a[j+1]){
//         temp=a[j];
//         a[j]=a[j+1];
//         a[j+1]=temp;
//       }
//     }
//   }
//   return &a[n-1];
// }


// // Number to word
// int main(void){
//   char n[20];
//   scanf("%s",n);
//   for(int i=0; n[i]!='\0'; i++){
//     if(n[i]=='0') printf("zero ");
//     else if(n[i]=='1') printf("one ");
//     else if(n[i]=='2') printf("two ");
//     else if(n[i]=='3') printf("three ");
//     else if(n[i]=='4') printf("four ");
//     else if(n[i]=='5') printf("five ");
//     else if(n[i]=='6') printf("six ");
//     else if(n[i]=='7') printf("seven ");
//     else if(n[i]=='8') printf("eight ");
//     else if(n[i]=='9') printf("nine ");
//   }
// }

// Next greater
// int main(void){
//   int n,next;
//   scanf("%d",&n);
//   int a[n],b[n];
//   for(int i=0; i<n; i++){
//     scanf("%d",&a[i]);
//     b[i]=a[i];
//   }
//   for(int i=0; i<n; i++){
//     next=-1;
//     for(int j=i+1; j<n; j++){
//       if(a[j]>a[i]){
//         next=a[j];
//         break;
//       }
//     }
//     b[i]=next;
//   }
//   for(int i=0; i<n; i++){
//     printf("%d ",b[i]);
//   }
// }

// // First char of each word in the string entered
// int main(void){
//   char s[100],abc[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',};
//   gets(s);
//   for(int i=0; s[i]!='\0'; i++){
//     for(int j=0; j<26; j++){
//       if(s[i]==abc[j]){
//         printf("%c ",abc[j]);
//         break;
//       }
//     }
//   }
// }

// // Hailstone Sequence
// void hailS(int n){
//   if(n==1){
//     return;
//   } else if(n%2==0){
//     printf("%d ",n/2);
//     hailS(n/2);
//   } else {
//     printf("%d ",(3*n)+1);
//     hailS((3*n)+1);
//   }
// }
// int main(void){
//   int n;
//   scanf("%d",&n);
//   hailS(n);
// }

// // Max and Min using malloc
// int main(void){
//   int n,max,min;
//   scanf("%d",&n);
//   int *a=(int *)malloc(n*sizeof(int));
//   for(int i=0; i<n; i++){
//     scanf("%d",&a[i]);
//     if(i==0){
//       min=a[i];
//       max=a[i];
//     }
//     if(a[i]<min){
//       min=a[i];
//     }
//     if(a[i]>max){
//       max=a[i];
//     }
//   }
//   printf("%d %d",min,max);
//   free(a);
// }

// // Student struct 
// struct student{
//   int reg_no,age;
//   char name[20];
// };
// typedef struct student stdt;
// void age_fourteen(stdt s[]){
//   for(int i=0; i<10; i++){
//     if(s[i].age==14) printf("%s\n",s[i].name);
//   }
// }
// void even_rno(stdt s[]){
//   for(int i=0; i<10; i++){
//     if(s[i].reg_no%2==0) printf("%s\n",s[i].name);
//   }
// }
// void student_records(stdt s[],int rn){
//   for(int i=0; i<10; i++){
//     if(s[i].reg_no==rn){
//       printf("%d %s %d",s[i].reg_no,s[i].name,s[i].age);
//     }
//   }
// }
// int main(void){
//   stdt s[10];
//   for(int i=0; i<10; i++){
//     scanf("%d",&s[i].reg_no);
//     scanf("%s",&s[i].name);
//     scanf("%d",&s[i].age);
//   }
//   int rn;
//   scanf("%d",&rn);

//   // age_fourteen(s);
//   // even_rno(s);
//   // student_records(s,rn);
// }

// // Lift
// int main(void){
//   printf("We have 5 floors, you can move from 0 to 5");
//   do{
//     int ch;
//     printf("\nEnter the floow number where you want to go :- (0 to 5) ");
//     printf("\nPress -1 if you reached your destination\n");
//     scanf("%d",&ch);
//     if(ch==-1) break;
//     else if(ch>=0 && ch <=5) printf("\nYou are now on %drd floor",ch);
//     else printf("\nInvalid floor number");
//   } while(1);
//   printf("\n\tHope you reached your destination\n\tVisit Again");
// }

// Substring
// int main(void){
// }

// // Telephone Bill
// int main(void){
//   int n;
//   float bill=0;
//   scanf("%d",&n);
//   if(n<=50){
//     bill=100;
//   } else if(n>50 && n<=100){
//     bill=100+(n-50)*1.75;
//   } else if(n>100 && n<=150){
//     bill=100+(n-50)*1.75+(n-100)*1.50;
//   } else if(n>200){
//     bill=100+(n-50)*1.75+(n-100)*1.50+(n-200)*1;
//   }
//   printf("%.2f",bill);
// }

// Swap using bitwise
// void swap(int *x, int *y){
//   *x=(*x)^(*y);
//   *y=(*x)^(*y);
//   *x=(*x)^(*y);
// }

// int main(void){
//   int x=1,y=2;
//   swap(&x,&y);
//   printf("%d %d",x,y);
// }

