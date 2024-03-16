#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// // Types of Constructors
// class date{
//   int d,m,y;
//   public:
//     date(){
//       d=m=y=0;
//       cout<<"Default Contructor"<<endl;
//     }

//     date(int a, int b, int c){
//       d=a;m=b;y=c;
//       cout<<"Parameterized Contructor"<<endl;
//     }

//     date(const date& t){
//       d=t.d;
//       m=t.m;
//       y=t.y;
//       cout<<"Copy Constructor"<<endl;
//     }

//     void putDate(){
//       cout<<d<<"-"<<m<<"-"<<y<<endl;
//     }
    
// };
// int main(void){
//   date x;
//   date y(12,10,2005);
//   y.putDate();
//   date z(y);
//   z.putDate();
// }

// Q. Object arr with deep copy
// class arr{
//   int *a,size;
//   public:
//     arr(){}

//     arr(int *a, int n){
//       this->size = n;
//       this->a = new int(n);
//       for(int i=0; i<n; i++){
//         this->a[i]=a[i];
//       }
//     }

//     arr(arr &a){
//       this->size = a.size;
//       this->a = new int(a.size);
//       for(int i=0; i<a.size; i++){
//         this->a[i]=a.a[i];
//       }
//     }

//     void updArr(){
//       int size=0;
//       for(int i=0; i<this->size; i++){
//         if(this->a[i]%2!=0){
//           size++;
//         }
//       }

//       int *x=new int(size);
      
//       for(int i=0,tmp=0; i<this->size; i++){
//         if(this->a[i]%2!=0){
//           x[tmp++]=this->a[i];
//         }
//       }

//       a=x;
//       this->size=size;
//     }

//     void putArr(){
//       for(int i=0; i<this->size; i++){
//         cout<<this->a[i]<<" ";
//       }
//     }

//     ~arr(){
//       delete a;
//     }
// };

// int main(void){
//   int n;
//   scanf("%d",&n);
//   int x[n];
//   for(int i=0; i<n; i++){
//     scanf("%d",&x[i]);
//   }

//   arr y(x,n);
//   y.updArr();
//   y.putArr();

//   cout<<endl;
// }

// // Pre-Processor Directives
// #define PI 3.14
// #define add(x,y) (x+y) // Macro
// int main(void){
//   float radius;
//   scanf("%f",&radius);
//   float area=PI*radius*radius;
//   int a=6,b=9;
//   int z=add(a,b);
//   printf("%.2f %d",area,z);
// }

// // Static Members
// class testClass{
//   public:
//     int x;
//     static int y;
// };
// int testClass::y=1;
// int main(void){
//   cout<<testClass::y;
// }

// // Friend Functions

// // Friend Class
// class Square;

// class Rectangle{
//   int width,height;
//   public:
//     Rectangle(int x, int y){
//       width=x;
//       height=y;
//     }

//     void display(){
//       cout<<"Area of Rectangle: "<<width*height<<endl;
//     }

//     void morph(Square &);
// };

// class Square{
//   int side;
//   public:
//     Square(int x){
//       side=x;
//     }
//     void display(){
//       cout<<"Area of Square: "<<side*side<<endl;
//     }
//     friend class Rectangle;
// };

// void Rectangle::morph(Square &s){
//   width=s.side;
//   height=s.side;
// }

// int main(void){
//   Rectangle rec(5,10);
//   Square sq(5);

//   cout<<"Before: "<<endl;
//   rec.display();
//   sq.display();

//   rec.morph(sq);
//   cout<<"After: "<<endl;
//   rec.display();
//   sq.display();
  
// }

// // iostream
/*
cin - Object, >> - Function, n - Argument
>> - Insertion Operator
<< - Extraction Operator
*/


// // Multipath Inheritance
// class job{
//   protected:
//     int id;
//     char name[20];
//     float time;
//     float space;
//   public:
//     void get();
//     void print();
//     int getId();
//     float getTime();
//     float getSpace();
// };

// class jobScheduling{
//   protected:
//     int numOfJobs;
//     job *jobs;
//   public:
//     void get();
//     void print();
//     // Schedule based on id
//     void schedule();
// };

// class timeJobScheduling: public jobScheduling{
//   public:
//     // Schedule based on time
//     void schedule();
// };

// class spaceJobScheduling: public jobScheduling{
//   public:
//     // Schedule based on space
//     void schedule();
// };

// void job::get(){
//   cin>>id>>name>>time>>space;
// }

// void job::print(){
//   cout<<id<<endl<<name<<endl<<time<<endl<<space<<endl;
// }

// int job::getId(){
//   return id;
// }

// float job::getTime(){
//   return time;
// }

// float job::getSpace(){
//   return space;
// }

// void jobScheduling::get(){
//   cin>>numOfJobs;
//   jobs=new job[numOfJobs];
//   for(int i=0; i<numOfJobs; i++){
//     jobs[i].get();
//   }
// }

// void jobScheduling::print(){
//   for(int i=0; i<numOfJobs; i++){
//     jobs[i].print();
//   }
// }

// void jobScheduling::schedule(){
//   cout<<"Base class scheduling is called"<<endl;
//   job t;
//   for(int i=0; i<numOfJobs; i++){
//     for(int j=i+1; j<numOfJobs; j++){
//       if(jobs[i].getId()>jobs[j].getId()){
//         t=jobs[i];
//         jobs[i]=jobs[j];
//         jobs[j]=t;
//       }
//     }
//   }
// }

// void timeJobScheduling::schedule(){
//   cout<<"Time based scheduling is called"<<endl;
//   job t;
//   for(int i=0; i<numOfJobs; i++){
//     for(int j=i+1; j<numOfJobs; j++){
//       if(jobs[i].getTime()>jobs[j].getTime()){
//         t=jobs[i];
//         jobs[i]=jobs[j];
//         jobs[j]=t;
//       }
//     }
//   }
// }

// void spaceJobScheduling::schedule(){
//   cout<<"Space based scheduling is called"<<endl;
//   job t;
//   for(int i=0; i<numOfJobs; i++){
//     for(int j=i+1; j<numOfJobs; j++){
//       if(jobs[i].getSpace()>jobs[j].getSpace()){
//         t=jobs[i];
//         jobs[i]=jobs[j];
//         jobs[j]=t;
//       }
//     }
//   }
// }

// int main(){
//   jobScheduling *js;
//   timeJobScheduling tjs;
//   spaceJobScheduling sjs;
//   js=new jobScheduling();
//   int ch;
//   cin>>ch;
//   if(ch==1){
//     tjs.get();
//     js=&tjs;
//   } else if(ch==2){
//     sjs.get();
//     js=&sjs;
//   }

//   js->schedule();
//   js->print();
// }