// // A2
// 1
// #include<stdio.h>
// typedef struct{
//   float salary,gasBill,elecBill,fuelCharges,houseRent;
// }budget;

// int main(void){
//   budget person;
//   scanf("%f",&person.salary);
  
//   int ch;
//   printf("Press 1 to calculate gas bill charges\n");
//   printf("Press 2 to calculate electricity bill charges\n");
//   printf("Press 3 to calculate fuelling bill charges\n");
//   printf("Press 4 to calculate house rent bill charges\n");
//   scanf("%d",&ch);

//   switch (ch)
//   {
//   case 1:
//     person.gasBill=0.1*person.salary;
//     printf("Gas Bill: %.2f\n",person.gasBill);    
//     break;
//   case 2:
//     person.elecBill=0.05*person.salary;
//     printf("Electricity Bill: %.2f\n",person.elecBill);    
//     break;
//   case 3:
//     person.gasBill=0.1*person.salary;
//     printf("Fuelling Charges: %.2f\n",person.fuelCharges);    
//     break;
//   case 4:
//     person.gasBill=0.15*person.salary;
//     printf("House Rent: %.2f\n",person.houseRent);    
//     break;
//   default:
//     break;
//   }
// }

// // A1
//1
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct{
//   char name[20];
//   int runs;
// }player;

// int main(void){
//   int totalRuns=0;
  
//   int sizeOfTeam;
//   scanf("%d",&sizeOfTeam);

//   player *x=(player*)malloc(sizeof(player)*sizeOfTeam);
  
//   for(int i=0; i<sizeOfTeam; i++){
//     scanf("%s",&x[i].name);
//     scanf("%d",&x[i].runs);
//     totalRuns+=x[i].runs;
//   }

//   for(int i=0; i<sizeOfTeam; i++){
//     printf("%s\n",x[i].name);
//     printf("%d\n",x[i].runs);
//   }

//   printf("%d",totalRuns);
//   free(x);
// }

