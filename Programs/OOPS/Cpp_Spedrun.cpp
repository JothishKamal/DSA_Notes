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

// // PPS3 tarun
// 1
class db;
class dm{
  float m,cm;
  public:
    void get(){
      cout<<"Enter the value in meter and centimeter:\n";
      cout<<"Enter meter value:";
      cin>>m;
      cout<<"Enter centimeter value:";
      cin>>cm;
    }

    friend void add(dm&,db&);    
    
    void put(){
      cout<<m;
    }
};

class db{
  float f,i;
  public:
    void get(){
      cout<<"Enter the value in feet and incehs:\n";
      cout<<"Enter feet value:";
      cin>>f;
      cout<<"Enter inches value:";
      cin>>i;
    }
    friend void add(dm&,db&);
};

void add(dm& ob1, db& ob2){
  ob1.m=(ob1.m + ob1.cm*0.01) + (ob2.f*0.3 + ob2.i*0.0254);
}

int main(void){
  dm x; db y;
  x.get(); y.get();
  add(x,y);
  x.put();
}
// 2
// 3
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

// 4