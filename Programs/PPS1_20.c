  /*1. Construct a program to read the numbers until -1 is encountered. Find the average of
positive numbers and negative numbers entered by user. (Module-1, Easy) */
// #include<stdio.h>
// int main(void){
//   int np=0,nne=0;
//   float p=0,ne=0;
//   float pavg,navg;
//   printf("Enter -1 to exit...");
//   do{
//     float n;
//     printf("\nEnter the number: ");
//     scanf("%f",&n);
//     if(n>0){
//       p+=n;
//       np++;
//     } else {
//       ne+=n;
//       nne++;
//     }
//     if(n==-1) break;
//   } while(1);
//   pavg=(p/np);
//   navg=(ne/nne);
//   printf("The average of negative numbers is: %.2f",navg);
//   printf("The average of positive numbers is: %.2f",pavg);
// }

/* 2. Develop a program to print an arrangement of its members into a sequence or linear 
order, and the order is not repeated again. (Module-1, Hard)[UNFINISHED]*/
#include<stdio.h>

void swap(char* x, char* y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void permute(char* a, int l, int r) 
{ 
    int i; 
    if (l == r){
        printf("%s\n",a);
    }
    else { 
        for (i = l; i <= r; i++) { 
            swap((a + l), (a + i)); 
            permute(a, l + 1, r); 
            swap((a + l), (a + i)); // backtrack 
        } 
    } 
} 
int main(void){
  char a[5];
  int n;
  gets(a);
  for(n=0;a[n]!='\0';n++);
  permute(a,0,n-1);
}

/*3. Calculate tax given the following conditions:
If income is less than or equal to 1,50,000 then no tax 
If taxable income is 1,50,001 – 3,00,000 then charge 10% tax for the remaining slab 
If taxable income is 3,00,001 – 5,00,000 then charge 20% tax for the remaining slab 
If taxable income is above 5,00,001 then charge 30% tax for the remaining slab 
(Module -1, Medium)*/
// #include<stdio.h>
// int main(void){
//   float income,tax=0;
//   scanf("%f",&income);
//   if(income<=150000){
//     printf("no tax");
//   } else if(income>=150001 && income<=300000){
//     tax=(income-150000)*0.1;
//   } else if(income>=300001 && income<=500000){
//     tax=(income-150000)*0.2;
//   } else if(income>=500001){
//     tax=(income-150000)*0.3;
//   }
//   if(tax!=0) printf("Tax=%.2f",tax);
// }

/*4. In an organization they decide to give bonus to all the employees on New Year. A 
5% bonus on salary is given to the grade A workers and 10% bonus on salary to the 
grade B workers. Write a program to enter the salary and grade of the employee. If the 
salary of the employee is less than $10,000 then the employee gets an extra 2% bonus on 
salary Calculate the bonus that has to be given to the employee and print the salary that 
the employee will get. (Module-1 Hard)*/
// #include<stdio.h>
// int main(void){
//   char g;
//   float sal,bonus=0,total;
//   scanf("%c",&g);
//   scanf("%f",&sal);
//   if(g=='A'){
//     if(sal<=10000){
//       bonus=0.02;
//     } else {
//       bonus=0.05;
//     }
//     printf("%.2f\n",bonus);
//     total=sal+bonus*sal;
//     printf("%.2f",total);
//   } else if(g=='B'){
//     if(sal<=10000){
//       bonus=0.02;
//     } else {
//       bonus=0.1;
//     }
//     printf("%.2f\n",bonus);
//     total=sal+bonus*sal;
//     printf("%.2f",total);
//   } else {
//     printf("No such category");
//   }
// }

/*5. A company is recruiting persons base on daily wages. The wage is fixed based on 
the hours of service. For the first 5 hours the wage is Rs.500. for the additional hours his 
wage is 10% for 1 hour, 20% for two hours and 30% for three hours. The person can 
work upto 8 hours per day. Write C program to read the details of two workers and
calculate total payment of workers using structure.(Module-1, Medium) */
// #include<stdio.h>
// int main(void){
//   char name1[20],name2[20];
//   int hours1,hours2,f1=0,f2=0;
//   float sal1,sal2;
//   scanf("%s",name1);
//   scanf("%d", &hours1);
//   scanf("%s",name2);
//   scanf("%d", &hours2);
//   if(hours1<=8){
//     sal1=500+((hours1-5)/(float)10)*500;
//   } else {
//     f1=1;
//   }
//   if(hours2<=8){
//     sal2=500+(((hours2-5)/(float)10)*500);
//   } else {
//     f2=1;
//   }
//   printf("\n%s",name1);
//   if(f1==1) printf("\nna");
//   else printf("\n%.2f",sal1);
//   printf("\n%s",name2);
//   if(f2==1) printf("\nna");
//   else printf("\n%.2f",sal2);
// }

/*6. Write a C-Program to find the Number of ways of selecting words from n-consonants and m-vowels when r1-consonants and r2 vowels are chosen. 
i.e ncr1 * mcr2 
Make sure entered numbers are valid to calculate factorial.
(Module-1, Hard) */
// #include<stdio.h>
// int fact(int n){
//   if(n==0) return 1;
//   else if(n==1) return n;
//   else return n*fact(n-1);
// }
// int main(void){
//   int n,r1,m,r2;
//   scanf("%d",&n);
//   scanf("%d",&r1);
//   scanf("%d",&m);
//   scanf("%d",&r2);
//   int res1,res2;
//   res1=(fact(n)/(fact(r1)*fact(n-r1)));
//   res2=(fact(m)/(fact(r2)*fact(m-r2)));
//   printf("%d",res1*res2);
// }

/*7. Write a c-program to display the binary format of the user entered number if it is 
prime else display In hexadecimal format 
(Module-1, easy)*/
// #include<stdio.h>
// int isPrime(int n){
//   int ct=0;
//   for(int j=1; j<=n; j++){
//     if (n%j==0){
//       ct+=1;
//     }
//   }
//   if (ct==2) return 1;
//   else return 0;
// }

// int main(void){
//   int n,temp,len=0;
//   scanf("%d", &n);
//   for(temp=n;temp!=0;len++,temp/=2);
//   int b[len+1];
//   int x=0;
//   temp=n;
//   while(temp!=0){
//     b[x]=temp%2;
//     x++;
//     temp/=2;
//   }
//   if(isPrime(n)==1){
//     for(int i=len-1; i>=0; i--){
//       printf("%d",b[i]);
//     }
//   } else {
//     printf("%X",n);
//   }
// }

/*8. Write a c-program to determine the digital root of a second largest element in an array 
consisting of 6 elements. 
(Module-1, easy) 
*/
// #include<stdio.h>
// int digitalRoot(int n){
//   if(n/10==0){
//     return n;
//   } else {
//     int sum=0;
//     while(n!=0){
//       sum+=n%10;
//       n/=10;
//     }
//     return digitalRoot(sum);
//   }
// }
// int main(){
//   int a[6];
//   for(int i=0; i<6; i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0; i<6; i++){
//     for(int j=0,temp; j<6; j++){
//       if(j!=5){
//         if(a[j]>a[j+1]){
//           temp=a[j];
//           a[j]=a[j+1];
//           a[j+1]=temp;
//         }
//       }
//     }
//   }
//   printf("%d",digitalRoot(a[4]));
// }

/*9. A neon number is a number where the sum of digits of square of the number is equal to 
the number. Write a c program to check whether given number is neon numbers or not. 
(Module-1, Medium) */
// #include<stdio.h>
// int main(void){
//   int n,n2,sum;
//   scanf("%d",&n);
//   n2=n*n;
//   while(n2!=0){
//     sum+=n2%10;
//     n2/=10;
//   }
//   if(sum==n) printf("Neon");
// }

/*10. Write a c-program to find the smallest possible two digit sum of a 4 digit number.
e.g 5592 is the input 25+59=84 is the smallest two digit sum possible. 
(Module-1, easy) */
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

/*11. Complete the function void update(int *a,int *b). It receives two integer pointers, int* a 
and int* b. Set the value of to their product, and to their sum. There is no return value, 
and no return statement is needed.
(Module-3, easy) 
*/
// #include<stdio.h> 
// #include<stdlib.h>
// int main(void){ 
//   char str[100],ch,*ptr,*ptr2; 
//   ptr2=(char*)malloc(20); 
//   printf("Enter a String :"); 
//   gets(str); 
//   printf("Enter the Character you Want to Delete :"); 
//   scanf("%c",&ch);
//   ptr=str;
//   for(;*ptr!='\0';ptr++){
//     if(*ptr!=ch){
//       printf("%c",*ptr);
//     }
//   }
//   free(ptr2);
// }

/*12. Using pointer, write a C program that reads a character string and a character as 
input and deletes all occurrence of this character in the string. The program should 
display the corrected string with no holes. 
(Module-3, easy) */
// #include<stdio.h>
// #include<stdlib.h>
// int main(void){
//   char a[20],ch;
//   gets(a);
//   scanf("%c",&ch);
//   char *na=(char *)malloc(20);
//   int x=0;
//   for(int i=0; a[i]!='\0'; i++){
//     if(ch!=a[i]){
//       na[x]=a[i];
//       x++;
//     }
//   }
//   for(int i=0; i<x; i++){
//     printf("%c",na[i]);
//   }
// }

/*13. Suppose Richard wish to enter a list of country name into the computer, rearrange 
them into alphabetical order, and then display the rearranged list. Richard made the 
skeletal of the C program shown below. Complete the function reorder(int n, char *x[])to 
help Richard for his task. 
(Module-3, Medium) */
// #include<stdio.h>
// #include<string.h>
// int main(void){
//   int n;
//   scanf("%d",&n);
//   char a[n][20];
//   char temp[20];
//   for(int i=0; i<n; i++){
//     scanf("%s",&a[i]);
//   }
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n-1; j++){
//       if(a[j][0]>a[j+1][0]){
//         strcpy(temp,a[j]);
//         strcpy(a[j],a[j+1]);
//         strcpy(a[j+1],temp);
//       }
//     }
//   }
//   for(int i=0; i<n; i++){
//     printf("%s ",a[i]);
//   }
// }

/*15. Write a function day_name() that receive a number n and return a pointer to a 
character string containing the name of the corresponding day. The day names should be 
kept in a static table of character strings local to the function.
(Module-3, Medium) */
// #include<stdio.h>
// void day_name(int n){
//   static char a[7][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
//   for(int i=0; i<7; i++){
//     if(i==n-1) printf("%s",a[i]);
//   }
// }
// int main(void){
//   int n;
//   scanf("%d",&n);
//   day_name(n);
// }

/*16. Earthquake Research Institute of Japan has recorded earthquake occurred in the year 
2021 using Richter scale. Develop a program to get the ’n’ (number of times) the 
earthquake has occurred and print the number of times in which the magnitude was low, 
medium and high. The magnitude value is given in microns. If the value is less than 
5.4(inclusive) in microns then it is low, 5.4 to 7.0 (inclusive) it is medium and more than 7.0 
it is high. Also, if the number of times recorded is Zero, display as “No earthquake 
predicted” and if the number of times recorded is negative, display as “Invalid Input”. 
(Module-2, Medium)*/
// #include<stdio.h>
// int main(void){
//   int n,low=0,med=0,high=0;
//   scanf("%d",&n);
//   float mag[n];
//   if(n>0){
//     for(int i=0; i<n; i++){
//       scanf("%f",&mag[i]);
//       if(mag[i]<=5.4) low++;
//       else if(mag[i]>5.4 && mag[i]<=7) med++;
//       else if(mag[i]>7) high++;
//       }
//   }
//   else if(n==0) printf("No earthquake predicted");
//   else printf("Invalid Input");
//   printf("%d %d %d",low,med,high);
// }

