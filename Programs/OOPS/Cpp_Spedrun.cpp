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

// PPS2.11
// #include<iostream>
// #include<stdlib.h>

// using namespace std;
// class Department;

// class Employee{
//     int eno;
//     char name[20],departmentCode[5];
//     public:
//         void getEmployee(){
//             cout<<"Enter Employee Number: ";
//             cin>>eno;
//             cout<<"Enter Employee Name: ";
//             cin>>name;
//             cout<<"Enter Employee's Department Code: ";
//             cin>>departmentCode;
//         }

//         friend void employeeDetails(Employee*, int, Department*, int);
// };

// class Department{
//     char departmentCode[5],departmentName[20];
//     public:
//         void getDepartmentDetails(){
//             cout<<"Enter Department Code: ";
//             cin>>departmentCode;
//             cout<<"Enter Department Name: ";
//             cin>>departmentName;
//         }

//         friend void employeeDetails(Employee*, int, Department*, int);
// };

// void employeeDetails(Employee* e, int n1, Department* d, int n2){
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++){
//             int flag=0;
//             for(int k=0; e[i].departmentCode[k] != '\0'; k++){
//                 if(e[i].departmentCode[k] != d[j].departmentCode[k]){
//                     flag=1;
//                     break;
//                 }
//             }

//             if(!flag){
//                 cout<<"Employee Number: "<<e[i].eno<<endl;
//                 cout<<"Employee Name: "<<e[i].name<<endl;
//                 cout<<"Department Code: "<<e[i].departmentCode<<endl;
//                 cout<<"Department Name: "<<d[j].departmentName<<endl;
//             }
//         }
//     }

// }

// int main(void){
//     int n1;

//     cout<<"Enter the number of Employees: ";
//     cin>>n1;

//     Employee *emp=(Employee*)malloc(sizeof(Employee)*n1);
//     for(int i=0; i<n1; i++){
//         emp[i].getEmployee();
//     }

//     int n2;
//     cout<<"Enter the number of Departments: ";
//     cin>>n2;

//     Department *dept=(Department*)malloc(sizeof(Department)*n2);
//     for(int i=0; i<n2; i++){
//         dept[i].getDepartmentDetails();
//     }

//     employeeDetails(emp,n1,dept,n2);

//     free(emp);
//     free(dept);
// }

// PPS2.12
// #include<stdio.h>
// class Circle{
//     float diameter,area,circumference;
//     protected:
//         float radius;
//     public:
//         void getRadius(){
//             scanf("%f",&radius);
//         }

//         void calc(){
//             diameter=2*radius;
//             area=3.14*radius*radius;
//             circumference=2*3.14*radius;
//         }

//         void print(){
//             printf("%.2f\n%.2f\n%.2f\n",diameter,area,circumference);
//         }
// };
// class Sphere: public Circle{
//     float surfaceArea,volume;
//     public:
//         void calc(){
//             Circle::calc();
//             surfaceArea=4*3.14*radius*radius;
//             volume=((float)4/3)*3.14*radius*radius*radius;
//         }

//         void print(){
//             Circle::print();
//             printf("%.2f\n%.2f",surfaceArea,volume);
//         }
// };
// int main(void){
//     Sphere sphere;
//     sphere.getRadius();
//     sphere.calc();
//     sphere.print();
// }

// PPS2.13
// #include<iostream>
// using namespace std;
// class Square{
//   protected:
//     float side,area,perimeter;
//   public:
//     void getSide(){
//       cout<<"Enter the Side: ";
//       cin>>side;
//     }

//     void calcArea(){
//       area=side*side;
//       cout<<"Area: "<<area<<endl;
//     }

//     void calcPerimeter(){
//       perimeter=4*side;
//       cout<<"Perimeter: "<<perimeter<<endl;
//     }
// };

// class Cube: public Square{
//   protected:
//     float surfaceArea,volume;
//   public:
//     void calcSurfaceArea(){
//       surfaceArea=6*side*side;
//       cout<<"Surface Area: "<<surfaceArea<<endl;
//     }

//     void calcVolume(){
//       volume=side*side*side;
//       cout<<"Volume: "<<volume<<endl;
//     }
// };

// class Cuboid: protected Cube{
//   float length,breadth,height;
//   public:
//     void getDimensions(){
//       cout<<"Enter Length, Breadth and Height of the Cuboid: ";
//       cin>>length>>breadth>>height;
//     }

//     void calcSurfaceArea(){
//       surfaceArea=2*(length*breadth+breadth*height+height*length);
//       cout<<"Surface Area: "<<surfaceArea<<endl;
//     }

//     void calcVolume(){
//       volume=length*breadth*height;
//       cout<<"Volume: "<<volume<<endl;
//     }
// };

// int main(void){
//   Square square;
//   square.getSide();
//   square.calcArea();
//   square.calcPerimeter();

//   Cube cube;
//   cube.getSide();
//   cube.calcSurfaceArea();
//   cube.calcVolume();

//   Cuboid cuboid;
//   cuboid.getDimensions();
//   cuboid.calcSurfaceArea();
//   cuboid.calcVolume();
// }

// PPS2.14
// #include<iostream>
// using namespace std;
// class Circle{
//   protected:
//     float radius;
//   public:
//     Circle(){
//       cout<<"Enter the Radius: ";
//       cin>>radius;
//     }
// };

// class Cone: public Circle{
//   float slantHeight, height,surfaceArea,volume;
//   public:
//     Cone(){
//       cout<<"Enter the Slant Height(l) and Height(h) of the Cone: ";
//       cin>>slantHeight>>height;
//     }

//     void calcSurfaceArea(){
//       surfaceArea=3.14*radius*slantHeight;
//       cout<<"Surface Area of the Cone: "<<surfaceArea<<endl;
//     }

//     void calcVolume(){
//       volume=((float)1/3)*3.14*radius*radius*height;
//       cout<<"Volume of the Cone: "<<volume<<endl;
//     }
// };

// class Hemisphere: public Circle{
//   float surfaceArea,volume;
//   public:
//     void calcSurfaceArea(){
//       surfaceArea=3*3.14*radius*radius;
//       cout<<"Surface Area of the Hemisphere: "<<surfaceArea<<endl;
//     }

//     void calcVolume(){
//       volume=((float)2/3)*3.14*radius*radius*radius;
//       cout<<"Volume of the Hemisphere: "<<volume<<endl;
//     }
// };

// class Cylinder: public Circle{
//   float height,surfaceArea,volume;
//   public:
//     Cylinder(){
//       cout<<"Enter the Height of the Cylinder: ";
//       cin>>height;
//     }

//     void calcSurfaceArea(){
//       surfaceArea=2*3.14*radius*(radius+height);
//       cout<<"Surface Area of the Cylinder: "<<surfaceArea<<endl;
//     }

//     void calcVolume(){
//       volume=3.14*radius*radius*height;
//       cout<<"Volume of the Cylinder: "<<volume<<endl;
//     }
// };

// int main(void){
//   Cone cone;
//   cone.calcSurfaceArea();
//   cone.calcVolume();
//   Hemisphere hemisphere;
//   hemisphere.calcSurfaceArea();
//   hemisphere.calcVolume();
//   Cylinder cylinder;
//   cylinder.calcSurfaceArea();
//   cylinder.calcVolume();
// }

// WAP to add
// void add(int x, int y){
//   cout<<x+y<<endl;
// }

// void add(float x, float y){
//   cout<<x+y<<endl;
// }

// void add(const char x[], const char y[]){
//   cout<<x<<y<<endl;
// }

// int main(void){
//   add(1,2);
//   add((float)4.20,(float)6.9);
//   add("Jo","Op");
// }

/*
s1+s2 (Concatentation)
s1-s2 (Removing s2 from s1)
s1=s2 (Copy s1 in s2)
!s1 (reverse s1)
*/
// #include<stdlib.h>
// #include<iostream>
// using namespace std;
// class String{
//   char *c;
//   int len;
//   public:
//     String(){
//       c=(char*)malloc(10);
//       len=0;
//     }

//     void input(){
//       cin>>c;
//       for(len=0; c[len]!='\0'; len++);
//     }

//     void operator+(String ob){
//       int newlen=len+ob.len;
//       char *tmp=(char*)malloc(newlen+1);

//       int x=0;
//       for(int i=0; i<newlen; i++){
//         if(i<len){
//           tmp[x++]=c[i];
//         } else {
//           tmp[x++]=ob.c[i-len];
//         }
//       }
//       tmp[newlen]='\0';
//       freeMem();
//       c=tmp;
//       len=newlen;
//     }

//     void operator=(String ob){
//       int newlen=ob.len;
//       c=(char*)realloc(c,newlen+1);
//       for(int i=0; i<newlen; i++){
//         c[i]=ob.c[i];
//       }
//       c[newlen]='\0';
//       len=newlen;
//     }

//     void display(){
//       cout<<c<<endl;
//       cout<<len<<endl;
//     }

//     void freeMem(){
//         free(c);
//     }
// };
// int main(void){
//   String s1,s2;
//   s1.input();
//   s2=s1;
//   s1+s2;
//   s1.display();

//   s1.freeMem();
//   s2.freeMem();
// }

// // IOstream Operator Overloading
// class employee{
//   int eno;
//   char name[20];
//   float sal;
//   public:
//     employee(){}
//     friend istream& operator>>(istream&,employee&);
//     friend ostream& operator<<(ostream&,employee);
// };
// istream& operator>>(istream &in, employee &emp){
//   in>>emp.eno>>emp.name>>emp.sal;
//   return in;
// }

// ostream& operator<<(ostream &out, employee emp){
//   out<<emp.eno<<endl<<emp.name<<endl<<emp.sal<<endl;
//   return out;
// }
// int main(void){
//   employee x;
//   cin>>x;
//   cout<<x;
// }

// // // PPS3 tarun
// // 1
// class db;
// class dm{
//   float m,cm;
//   public:
//     void get(){
//       cout<<"Enter the value in meter and centimeter:\n";
//       cout<<"Enter meter value:";
//       cin>>m;
//       cout<<"Enter centimeter value:";
//       cin>>cm;
//     }

//     friend void add(dm&,db&);    
    
//     void put(){
//       cout<<m;
//     }
// };

// class db{
//   float f,i;
//   public:
//     void get(){
//       cout<<"Enter the value in feet and incehs:\n";
//       cout<<"Enter feet value:";
//       cin>>f;
//       cout<<"Enter inches value:";
//       cin>>i;
//     }
//     friend void add(dm&,db&);
// };

// void add(dm& ob1, db& ob2){
//   ob1.m=(ob1.m + ob1.cm*0.01) + (ob2.f*0.3 + ob2.i*0.0254);
// }

// int main(void){
//   dm x; db y;
//   x.get(); y.get();
//   add(x,y);
//   x.put();
// }

// // 2
// inline float calcSalary(int basic, int hra, int da){
//   return basic+hra+da;
// }

// inline float calcSalary(int wph, int nh){
//   return wph*nh;
// }

// inline float calcSalary(const int consolidated){
//   return consolidated;
// }

// int main(void){
//   int basic, hra, da, wph, nh, consolidated;
//   cin>>basic>>hra>>da>>wph>>nh>>consolidated;
//   cout<<calcSalary(basic,hra,da)<<calcSalary(wph,nh)<<calcSalary(consolidated);
// }

// // 3
// class Point{
//   float x,y;
//   public:
//     friend istream& operator>>(istream&,Point&);
//     friend ostream& operator<<(ostream&,Point);

// };

// istream& operator>>(istream &in, Point &ob){
//   in>>ob.x>>ob.y;
//   return in;
// }

// ostream& operator<<(ostream &out,Point ob){
//   out<<ob.x<<" "<<ob.y;
//   return out;
// }

// int main(void){
//   Point first,second;
//   cin>>first;
//   cin>>second;
//   cout<<first<<endl;
//   cout<<second<<endl;
// }

// // 4
// class Matrix{
//   int rows,columns;
//   int **matrix;
//   public:
//     void get(){
//       cin>>rows>>columns;
//       matrix=(int**)malloc(sizeof(int*)*rows);
//       for(int i=0; i<rows; i++){
//         matrix[i]=(int*)malloc(sizeof(int)*columns);
//         for(int j=0; j<columns; j++){
//           cin>>matrix[i][j];
//         }
//       }
//     }

//     void operator+(Matrix ob){
//       if(rows==ob.rows && columns==ob.columns){
//         for(int i=0; i<rows; i++){
//           for(int j=0; j<columns; j++){
//             matrix[i][j]+=ob.matrix[i][j];
//           }
//         }
//       } else {
//         cout<<"Rows and Columns mismatch"<<endl;
//       }
//     }

//     void operator-(Matrix ob){
//       if(rows==ob.rows && columns==ob.columns){
//         for(int i=0; i<rows; i++){
//           for(int j=0; j<columns; j++){
//             matrix[i][j]-=ob.matrix[i][j];
//           }
//         }
//       } else {
//         cout<<"Rows and Columns mismatch"<<endl;
//       }
//     }

//     void put(){
//       for(int i=0; i<rows; i++){
//         for(int j=0; j<columns; j++){
//           cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//       }
//     }

// };

// int main(void){
//   Matrix m1,m2;
//   m1.get(); m2.get();
  
//   char ch;
//   cin>>ch;
//   switch(ch){
//     case '+':
//       m1+m2; 
//       break;
//     case '-':
//       m1-m2; 
//       break;
//     default:
//       cout<<"Invalid operation"<<endl;
//   }
//   m1.put();
// }

// // Vector
// #include <iostream> 
// #include <vector> 
// #include <string> 
// //#include <cstdlib> 
// using namespace std; 
// main(){ 
//     vector<int> ss,vec1; 
//     vector<int>::iterator it; 
//     int choice,item; 
//     do{ 
//         cout<<"Vector<int> Implementation in STL"<<endl; 
//         cout<<"---------------------------------"<<endl; 
//         cout<<"1.Insert Element into the Vector   "; 
//         cout<<"2.Delete Last Element of the Vector"<<endl; 
//         cout<<"3.Size of the Vector               "; 
//         cout<<"4.Display by Index"<<endl; 
//         cout<<"5.Display by Iterator              "; 
//         cout<<"6.Clear the Vector"<<endl; 
//         cout<<"7.Exit"<<endl; 
//         cout<<"Enter your Choice: "; 
//         cin>>choice; 
//         switch(choice){ 
//         case 1: 
//             cout<<"Enter value to be inserted: "; 
//             cin>>item; 
//             ss.push_back(item); 
//             //ss.push_front(item); 
//             break; 
//         case 2: 
//             cout<<"Delete Last Element Inserted:"<<endl; 
//             ss.pop_back(); 
//             break; 
//         case 3: 
//             cout<<"Size of Vector: "; 
//             cout<<ss.size()<<endl; 
//             break; 
//         case 4: 
//             cout<<"Displaying Vector by Index: "; 
//             int val; 
//             val=ss.size(); 
//             cout<<endl<<val<<endl; 
//             for (int i = 0; i < val; i++) 
//                 cout<<ss[i]<<" "; 
//             cout<<endl; 
//             break; 
//         case 5: 
//             cout<<"Displaying Vector by Iterator: "; 
//             for (it = ss.begin(); it != ss.end(); it++) 
//                 cout<<*it<<" "; 
//             cout<<endl; 
//             break; 
//         case 6: 
//             ss.clear(); 
//             cout<<"Vector Cleared"<<endl; 
//             break; 
//         case 7: 
//             //exit(1); 
//             break; 
//         default: 
//             cout<<"Wrong Choice"<<endl; 
//         } 
//         cout<<endl; 
//     }while(choice!=7); 
// }

// // List
// #include <iostream> 
// #include <list> 
// #include <string> 
// #include <cstdlib> 
// using namespace std; 
// main(){ 
//     int myints[] = {5, 6, 3, 2, 7}; 
//     list<int> l,l1(myints,myints+sizeof(myints)/sizeof(int)); 
//     list<int>::iterator it; 
//     int choice,item; 
//     while (1){ 
//         cout<<"List Implementation in Stl"; 
//         cout<<"\n---------------------"<<endl; 
//         cout<<"1.Insert Element at the Front    "; 
//         cout<<"2.Insert Element at the End"<<endl; 
//         cout<<"3.Delete Element at the Front    "; 
//         cout<<"4.Delete Element at the End"<<endl; 
//         cout<<"5.First Element of List          "; 
//         cout<<"6.Last Element of the List"<<endl; 
//         cout<<"7.Size of the List               "; 
//         cout<<"8.Resize List"<<endl; 
//         cout<<"9.Remove Elements any element    "; 
//         cout<<"10.Remove Duplicate Values"<<endl; 
//         cout<<"11.Reverse the order of elements "; 
//         cout<<"12.Sort Forward List"<<endl; 
//         cout<<"13.Merge Sorted Lists            "; 
//         cout<<"14.Display Forward List"<<endl; 
//         cout<<"15.Exit"<<endl; 
//         cout<<"Enter your Choice: "; 
//         cin>>choice; 
//         switch(choice){ 
//         case 1: 
//             cout<<"Enter value to be inserted at the front: "; 
//             cin>>item; 
//             l.push_front(item); 
//             break; 
//         case 2: 
//             cout<<"Enter value to be inserted at the end: "; 
//             cin>>item; 
//             l.push_back(item); 
//             break; 
//         case 3: 
//             item = l.front(); 
//             l.pop_front(); 
//      cout<<"Element "<<item<<" deleted"<<endl; 
//             break; 
//         case 4: 
//             item = l.back(); 
//             l.pop_back(); 
//      cout<<"Element "<<item<<" deleted"<<endl; 
//             break; 
//         case 5: 
//      cout<<"Front Element of the List: "; 
//      cout<<l.front()<<endl; 
//             break; 
//         case 6: 
//             cout<<"Last Element of the List: "; 
//             cout<<l.back()<<endl; 
//             break; 
//         case 7: 
//             cout<<"Size of the List: "<<l.size()<<endl; 
//             break; 
//         case 8: 
//             cout<<"Enter new size of the List: "; 
//             cin>>item; 
//             if (item <= l.size()) 
//                 l.resize(item); 
//             else 
//                 l.resize(item, 0); 
//             break; 
//         case 9: 
//             cout<<"Enter element to be deleted: "; 
//             cin>>item; 
//             l.remove(item); 
//             break; 
//         case 10: 
//             l.unique(); 
//             cout<<"Duplicate Items Deleted"<<endl; 
//             break; 
//         case 11: 
//             l.reverse(); 
//             cout<<"List reversed"<<endl; 
//             break; 
//         case 12: 
//             l.sort(); 
//             cout<<"List Sorted"<<endl; 
//             break; 
//         case 13: 
//             l1.sort(); 
//             l.sort(); 
//             l.merge(l1); 
//             cout<<"Lists Merged after sorting"<<endl; 
//             break; 
//         case 14: 
//             cout<<"Elements of the List:  "; 
//             for (it = l.begin(); it != l.end(); it++) 
//                 cout<<*it<<"  "; 
//             cout<<endl; 
//             break; 
//          case 15: 
//             exit(1); 
//         default: 
//             cout<<"Wrong Choice"<<endl; 
//         }    }    }

// // Map
// #include <iostream> 
// #include <map> 
// #include <string> 
// #include <cstdlib> 
// using namespace std; 
// main(){ 
//     map<char,int> mp; 
//     map<char,int>::iterator it; 
//     int choice, item; 
//     char s; 
//     while (1){ 
//         cout<<"Map<int> Implementation in STL"<<endl; 
//         cout<<"------------------------------"<<endl; 
//         cout<<"1.Insert Element into the Map   "; 
//         cout<<"2.Delete Element of the Map"<<endl; 
//         cout<<"3.Size of the Map               "; 
//         cout<<"4.Find Element at a key in Map"<<endl; 
//         cout<<"5.Display by Iterator           "; 
//         cout<<"6.Search for an Element with it's key"<<endl; 
//         cout<<"7.Exit"<<endl; 
//         cout<<"Enter your Choice: "; 
//         cin>>choice; 
//         switch(choice){ 
//         case 1: 
//             cout<<"Enter value to be inserted: "; 
//             cin>>item; 
//             cout<<"Enter the key: "; 
//             cin>>s; 
//             mp.insert(pair<char,int>(s,item)); 
//             break; 
//         case 2: 
//             cout<<"Enter the mapped key to be deleted: "; 
//             cin>>s; 
//             if (mp.count(s) != 0) 
//                 mp.erase(s); 
//             else 
//                 cout<<"\nData not found!"; 
//             break; 
//         case 3: 
//      cout<<"Size of Map: "; 
//      cout<<mp.size()<<endl; 
//             break; 
//         case 4: 
//      cout<<"Enter the key at which value to be found: "; 
//             cin>>s; 
//             if (mp.count(s) != 0) 
//                 cout<<mp.find(s)->second<<endl; 
//             else 
//                 cout<<"No Element Found"<<endl; 
//             break; 
//         case 5: 
//      cout<<"Displaying Map by Iterator: "<< endl; 
//             for (it = mp.begin(); it != mp.end(); it++){ 
//                 cout << (*it).first << ":" << (*it).second << endl; 
//             } 
//             break; 
//         case 6: 
//             cout<<"Enter the key of the value to be searched for: "; 
//             cin>>s; 
//             cout<<mp.count(s)<<endl; 
//             break; 
//        case 7: 
//             exit(1); 
//         default: 
//             cout<<"Wrong Choice"<<endl; 
//         } 
//         cout<<endl; 
//     }} 


// // DEque
// #include <deque> 
// #include <iostream> 
// using namespace std; 
// void show(deque<int> g){ 
//     deque<int>::iterator it; 
//     for (it = g.begin(); it != g.end(); ++it) 
//         cout << '\t' << *it; 
//     cout << '\n'; 
// } 
// main(){ 
//     deque<int> q; 
//     q.push_back(10); 
//     q.push_front(20); 
//     q.push_back(30); 
//     q.push_front(15); 
//     cout << "The deque Q is : "; 
//     show(q); 
//     cout << "\nq.size() : " << q.size(); 
//     cout << "\nq.max_size() : " << q.max_size(); 
//     cout << "\nq.at(2) : " << q.at(2); 
//     cout << "\nq.front() : " << q.front(); 
//     cout << "\nq.back() : " << q.back(); 
//     cout << "\nq.pop_front() : "; 
//     q.pop_front(); 
//     show(q); 
//     cout << "\nq.pop_back() : "; 
//     q.pop_back(); 
//     show(q); 
// }

// // Template Inheritance - 1
// #include <iostream> 
// using namespace std; 
// template <typename a> 
// class Test{ 
// protected: 
//     a x; 
// public: 
//     Test(a x) {this->x=x;} 
//     a MyMethod1() { return x; } 
// }; 
// template <typename T1,typename T2> 
// class Another : public Test<T1>{ 
//     T2 val; 
// public: 
//     Another(T1 x,T2 y):Test<T1>(x){val=y;} 
//     void MyMethod2(){ 
//         cout<<Test<T1>::MyMethod1(); 
//         cout<<endl<<val; 
//     } 
// }; 
// int main(){ 
//     Test<float> obj1(10.5); 
//     cout<<"obj1.x = "<<obj1.MyMethod1()<<endl; 
//     Test<int> obj2(100); 
//     cout<<"obj2.x = "<<obj2.MyMethod1()<<endl; 
//     Another<char,int> a('a',100); 
//     a.MyMethod1(); 
//     a.MyMethod2(); 
// }

// // Template Inheritance - 2
// #include <iostream> 
// using namespace std; 
// template <typename T> class parent{ 
// public: 
//     T a; 
// public: 
//     parent(T x){a=x;} 
//     void sqr(){cout<<endl<<a*a;} 
//     virtual void product(){}
// }; 
// template <typename S> class child:public parent<S>{ 
//     int b; 
// public: 
//     child(S x,int y):parent<S>(x)    { 
//         b=y; 
//     } 
//     void product()    { 
//         cout<<endl<<parent<S>::a*b; 
//         } 
// }; 
// main(){ 
//     parent<float> obj1(11.567); 
//     obj1.sqr(); 
//     child<int> obj2(10,20);
//     obj2.sqr(); 
//     obj2.product(); 
// }

// // Selection Sort
// void sort(int arr[],int n){
//   int maxIdx,tmp;
//   for(int i=0; i<n; i++){
//     maxIdx=0;
//     for(int j=0; j<n-i; j++){
//       if(arr[maxIdx]<arr[j]) maxIdx=j;
//     }
//     tmp=arr[maxIdx];
//     arr[maxIdx]=arr[n-i-1];
//     arr[n-i-1]=tmp;
//   }
// }

