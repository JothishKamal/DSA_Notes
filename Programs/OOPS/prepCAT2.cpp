// // A2
// 2
// #include<iostream>
// using namespace std;
// class Employee{
//   int Employee_Id;
//   char Employee_Name[20],Position[20],Department[20];
//   float Basic_Pay,Deductions,Salary;
//   public:
//     void Accept(){
//       cin>>Employee_Id>>Employee_Name>>Position>>Department>>Basic_Pay>>Deductions;
//     }

//     void Total_Salary(){
//       Salary=Basic_Pay+0.25*Basic_Pay+0.12*Basic_Pay+0.15*Basic_Pay-Deductions;
//     }

//     void Display(){
//       cout<<Employee_Id<<endl<<Employee_Name<<endl<<Position<<endl<<Department<<endl<<Basic_Pay<<endl<<Deductions<<endl<<Salary<<endl;
//     }
// };
// int main(void){
//   int n;
//   cin>>n;
//   Employee emp[n];
//   for(int i=0; i<n; i++){
//     emp[i].Accept();
//     emp[i].Total_Salary();
//   }
//   for(int i=0; i<n; i++){
//     emp[i].Display();
//   }
// }

// 4
// #include<iostream>
// using namespace std;
// class Travel{
//   float speed,distance;
//   public:
//     void get(){
//       cin>>speed>>distance;
//     }

//     friend void calcTimeTaken(Travel &);
// };

// void calcTimeTaken(Travel &obj){
//   float time;
//   time=obj.distance/obj.speed;
//   cout<<time;
// }

// int main(void){
//   Travel jo;
//   jo.get();
//   calcTimeTaken(jo);
// }

// 5
// #include<iostream>
// using namespace std;
// class grandfather{
//   char name[20];
//   public:
//     void get(){
//       cin>>name;
//     }

//     void print(){
//       cout<<name<<endl;
//     }
// };

// class father: protected grandfather{
//   char name[20];
//   public:
//     void get(){
//       grandfather::get();
//       cin>>name;
//     }

//     void print(){
//       grandfather::print();
//       cout<<name<<endl;
//     }
// };

// class child: protected father{
//   char name[20];
//   public:
//     void get(){
//       father::get();
//       cin>>name;
//     }

//     void print(){
//       father::print();
//       cout<<name;
//     }
// };

// int main(void){
//   child x;
//   x.get();
//   x.print();
// }

// // A1
// 4
// #include<iostream>
// using namespace std;
// class Patient{
//   protected:
//     char pat_name[20];
//     int age;
//     int sex;
//   public:
//     Patient(){
//       cin>>pat_name>>age>>sex;
//     }
// };
// class IPD{
//   protected:
//     int ward_no,bed_no;
//     float charge_per_day;
//   public:
//     IPD(){
//       cin>>ward_no>>bed_no>>charge_per_day;
//     }
// };
// class IPD_Patient: public Patient, public IPD{
//   int no_of_days_admitted;
//   public:
//     IPD_Patient(){
//       cin>>no_of_days_admitted;
//     }

//     void print(){
//       cout<<pat_name<<endl;
//       cout<<age<<endl;
//       cout<<sex<<endl;
//       cout<<ward_no<<endl;
//       cout<<bed_no<<endl;
//       cout<<charge_per_day<<endl;
//       cout<<no_of_days_admitted<<endl;
//       cout<<charge_per_day*no_of_days_admitted;
//     }
// };
// int main(void){
//   IPD_Patient x;
//   x.print();
// }

// // C2
// #include<iostream>
// using namespace std;
// class Student{
//   protected:
//     int rno,age;
//     char name[20];
//   public:
//     void get(){
//       cin>>rno>>name>>age;
//     }
// };
// class Exam: public Student{
//   protected:
//     int marks[6];
//   public:
//     void get(){
//       Student::get();
//       for(int i=0; i<6; i++){
//         cin>>marks[i];
//       }
//     }
// };

// class Sports{
//   protected:
//     char sportsName[20];
//     int score;
//   public:
//     void get(){
//       cin>>sportsName>>score;
//     }
// };

// class Result: public Exam, public Sports{
//   float avg;
//   public:
//     void get(){
//       Exam::get();
//       Sports::get();
//     }
//     void checkEligibility(){
//       avg=0;
//       for(int i=0; i<6; i++) avg+=marks[i];
//       avg/=6;

//       if(avg>75 && score>75){
//         cout<<"Eligible";
//       } else {
//         cout<<"Not Eligible";
//       }
//     }
// };
// int main(void){
//   Result person;
//   person.get();
//   person.checkEligibility();
// }






// 7
#include <bits/stdc++.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int max = a[0], min = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  printf("Max:%d Min:%d\n", max, min);
}