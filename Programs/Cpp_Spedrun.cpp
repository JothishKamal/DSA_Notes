#include <bits/stdc++.h>
using namespace std;


// // 1
// class Student{
//   private:
//     int numOfSGrades;
//     int attendance;
//     int sportsActivity;
//   public:
//     Student(){}
//     Student(int x, int y, int z){
//       numOfSGrades=x;
//       attendance=y;
//       sportsActivity=z;
//     }

//     void appreciation(){
//       if(numOfSGrades>=3 && attendance>=90 && sportsActivity>=2){
//         cout<<"\nExcellent";
//       }
//       else if(numOfSGrades>=3 && attendance>=90){
//         cout<<"\nVery Good";
//       }
//       else if(numOfSGrades>=3 && sportsActivity>=2){
//         cout<<"Good";
//       }
//     }
// };
// int main(void){
//   Student x(3,90,1);
//   x.appreciation();
// }


// // 2
// class Student{
//   int numOfTreesPlanted;
//   public:
//     static int totalTreesPlanted;
//     void plantTrees(int x){
//       numOfTreesPlanted=x;
//       totalTreesPlanted+=x;
//     }
// };
// int Student::totalTreesPlanted=0;
// int main(void){
//   int n;
//   cin>>n;
//   Student x[n];
//   for(int i=0; i<n; i++){
//     int y;
//     cin>>y;
//     x[i].plantTrees(y);
//   }
//   cout<<Student::totalTreesPlanted;
// }


// // 3
// class user{
//   char name[30];
//   int numOfUnitsConsumed;
//   float eBill=500;
//   float unitCost=0;
//   public:
//     void getUserDetails(){
//       cin>>name;
//       cin>>numOfUnitsConsumed;
//     }

//     void calculateElectricityBill(){
//       if(numOfUnitsConsumed>0 && numOfUnitsConsumed<100){
//         unitCost+=0.4*(numOfUnitsConsumed%100);
//       }
//       else if(numOfUnitsConsumed==100){
//         unitCost+=0.4*100;
//       }
//       else if(numOfUnitsConsumed>100 && numOfUnitsConsumed<300){
//         unitCost+=0.4*100+0.5*((numOfUnitsConsumed-100)%200);
//       }
//       else if(numOfUnitsConsumed==300){
//         unitCost+=0.4*100+0.5*200;
//       }
//       else if(numOfUnitsConsumed>300){
//         unitCost+=0.4*100+0.5*200+0.6*((numOfUnitsConsumed-300)%300);
//       }

//       if(unitCost>250){
//         unitCost+=0.15*unitCost;
//       }

//       eBill+=unitCost;
//     }

//     void displayBill(){
//       cout<<name<<' '<<eBill;
//     }
// };
// int main(void){
//   user x;
//   x.getUserDetails();
//   x.calculateElectricityBill();
//   x.displayBill();


// }

// // 4 
// class Customer{
//   protected:
//     int phNo;
//     char name[30];
//   public:
//     Customer(){
//       cin>>this->phNo;
//       cin>>this->name;
//     }

//     void displayCustomerDetails(){
//       cout<<"Phone Number: "<<this->phNo<<" ";
//       cout<<"Name: "<<this->name<<endl;
//     }
// };

// class Depositor: public Customer{
//   protected:
//     int accNo;
//     float balance;
//   public:
//     Depositor(){
//       cin>>this->accNo;
//       cin>>this->balance;
//     }

//     void displayDepositorDetails(){
//       cout<<"Account Number: "<<this->accNo<<" ";
//       cout<<"Balance: "<<this->balance<<endl;
//     }
// };

// class Borrower: public Depositor{
//   protected:
//     int loanNo;
//     float loanAmount;
//   public:
//     Borrower(){
//       cin>>this->loanNo;
//       cin>>this->loanAmount;
//     }

//     void displayBorrowerDetails(){
//       cout<<"Loan Number: "<<this->loanNo<<" ";
//       cout<<"Loan Amount: "<<this->loanAmount<<endl;
//     }
// };

// int main(void){
//   int n;
//   cin>>n;
//   Borrower x[n];

//   for(int i=0; i<n; i++){
//     cout<<"Customer "<<i<<":\n";
//     x[i].displayCustomerDetails();
//     x[i].displayDepositorDetails();
//     x[i].displayBorrowerDetails();

//   }
// }

// // 5
// #include<stdio.h>
// class Student{
//   protected:
//     float m1,m2,m3;
//   public:
//     void getMarks(){
//       cin>>m1>>m2>>m3;
//     }
// };

// class totalMarks: public Student{
//   protected:
//     float totalMarks=0;
//   public:
//     void totalMarksObtained(){
//       totalMarks+=m1+m2+m3;
//     }
// };

// class studentPercentage: public totalMarks{
//   public:
//     void calcPercentage(){
//       printf("%.2f",totalMarks/3);
//     }
// };

// int main(void){
//   studentPercentage x;
//   x.getMarks();
//   x.totalMarksObtained();
//   x.calcPercentage();
// }

// // 6
class Player{
  protected:
    int pNo;
    string name;
    int numOfMatches;
    int *numOfGoals;
  public:
    Player(int pNo, string name, int numOfMatches, int *numOfGoals){
      this->pNo=pNo;
      this->name=name;
      this->numOfMatches=numOfMatches;
      this->numOfGoals=new int(numOfMatches);
      for(int i=0; i<numOfMatches; i++){
        this->numOfGoals[i]=numOfGoals[i];
      }
    }

    void putPlayerInfo(){
      cout<<"Player Info: "<<endl;
      cout<<pNo<<endl;
      cout<<name<<endl;
      cout<<numOfMatches<<endl;
      for(int i=0; i<numOfMatches; i++){
        cout<<numOfGoals[i]<<" ";
      }
    }

    ~Player(){
      delete numOfGoals;
    }
};

int main(void){
  int goals[]={1,2,3,4};
  Player x(1,"Jo",4,goals);
  
  x.putPlayerInfo();
}