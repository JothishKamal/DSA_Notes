// 2. Develop a program to print an arrangement of its members into a sequence or linear 
// order, and the order is not repeated again. (Module-1, Hard)
// #include<stdio.h>
// #include<stdlib.h>
// int main(void){
//   int n,len;
//   scanf("%d",&n);
//   int *a=(int *)malloc(sizeof(int)*n);
//   for(int x=n; x!=0; len++,*(a++)=x%10,x/=10);
//   printf("%d",len);
//   for(int i=0; i<len; i++) printf("%d",*(a+i));
// }