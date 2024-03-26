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
// class Player{
//   protected:
//     int pNo;
//     string name;
//     int numOfMatches;
//     int *numOfGoals;
//   public:
//     Player(int pNo, string name, int numOfMatches, int *numOfGoals){
//       this->pNo=pNo;
//       this->name=name;
//       this->numOfMatches=numOfMatches;
//       this->numOfGoals=new int(numOfMatches);
//       for(int i=0; i<numOfMatches; i++){
//         this->numOfGoals[i]=numOfGoals[i];
//       }
//     }

//     void putPlayerInfo(){
//       cout<<"Player Info: "<<endl;
//       cout<<pNo<<endl;
//       cout<<name<<endl;
//       cout<<numOfMatches<<endl;
//       for(int i=0; i<numOfMatches; i++){
//         cout<<numOfGoals[i]<<" ";
//       }
//     }

//     ~Player(){
//       delete numOfGoals;
//     }
// };

// int main(void){
//   int goals[]={1,2,3,4};
//   Player x(1,"ko",4,goals);
  
//   x.putPlayerInfo();
// }

// // 7
// class Worker{
//   protected:
//     int code;
//     char name[20];
//     float salary;
//   public:
//     Worker(){
//       cin>>code;
//       cin>>name;
//       cin>>salary;
//     }
// };

// class Officer{
//   protected:
//     float da, hra;
//   public:
//     Officer(){
//       cin>>da;
//       cin>>hra;
//     }
// };

// class Manager: public Worker, public Officer{
//   float ta, grossSalary;
//   public:
//     Manager(){
//       ta=0.1*salary;
//     }

//     void calcGrossSalary(){
//       grossSalary=da+hra+ta;
//     }

//     void putDetails(){
//       cout<<code<<endl;
//       cout<<name<<endl;
//       cout<<grossSalary<<endl;
//     }
// };

// int main(void){
//   Manager x;
//   x.calcGrossSalary();
//   x.putDetails();
// }

// // 10


// // 11
// class Vaccine{
//   public:
//     virtual void putVaccine(){
//       cout<<"COVID Vaccine"<<endl;
//     }
// };

// class Covaxin: public Vaccine{
//   public:
//     void putVaccine() override{
//       cout<<"COVAXIN Vaccine"<<endl;

//     }
// };

// class Covishield: public Vaccine{
//   public:
//     void putVaccine() override{
//       cout<<"COVISHIELD Vaccine"<<endl;
//     }
// };

// int main(void){
//   Covaxin cx;
//   Covishield cs;
//   Vaccine *pCx, *pCs;
//   pCx=&cx;
//   pCs=&cs;
//   pCx->putVaccine();
//   pCs->putVaccine();
// }

// // Student-Course
// class course;
// class student{
//   int sId,numOfCoursesRegistered;
//   int *cc;
//   static int numOfStudents;
//   public:
//     student(){
//       cout<<"Enter Student "<<(numOfStudents)<<"'s details: "<<endl;
//       cout<<"Student ID: "; cin>>sId;
//       cout<<"Number of Courses Registered by the Student: "; cin>>numOfCoursesRegistered;
//       cc=new int[numOfCoursesRegistered];
//       cout<<"Enter the Course Code(s) Registered by the Student: ";
//       for(int i=0; i<numOfCoursesRegistered; i++){
//         cin>>cc[i];
//       }
//       numOfStudents++;
//     }

//     friend void studentDetails(student*,course*);
// };


// class course{
//   int cc;
//   static int numOfCourses;
//   char title[20];
//   public:
//     course(){
//       cout<<"Course ID: "; cin>>cc;
//       cout<<"Course Title: "; cin>>title;
//       numOfCourses++;
//     }

//     friend void studentDetails(student*,course*);
    
// };

// void studentDetails(student *x, course *y){
//   for(int i=0; i<x[0].numOfStudents-1; i++){
//     cout<<"Student ID: "<<x[i].sId<<endl;
//     cout<<"No. of Courses Registered: "<<x[i].numOfCoursesRegistered<<endl;
//     cout<<"Course Details: "<<endl;
//     for(int k=0; k<x[i].numOfCoursesRegistered; k++){
//       for(int k=0; k<y[0].numOfCourses-1; k++){
//         if(x[i].cc[k]==y[k].cc){
//           cout<<"Course ID: "<<y[k].cc<<endl<<"Course Title: "<<y[k].title<<endl;
//         }
//       }
//     }
//     if(x[i].numOfCoursesRegistered==0) cout<<"N/A"<<endl;
//   }
// }

// int student::numOfStudents=1;
// int course::numOfCourses=1;

// int main(void){
//   int numOfStudents;
//   cout<<"Enter the number of students: ";  cin>>numOfStudents;
//   student *students=new student[numOfStudents];

//   int numOfCourses;
//   cout<<"Enter the number of courses offered: "; cin>>numOfCourses;
//   course *courses=new course[numOfCourses];

//   studentDetails(students,courses);

//   delete students;
//   delete courses;
  
// }

