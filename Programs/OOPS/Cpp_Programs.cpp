#include<bits/stdc++.h>
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

// // Inheritance
// class Shape{
//   protected:
//     float area;
//   public:
//     Shape(){
//       area=0;
//     }
// };

// class Triangle: public Shape{
//   protected:
//     float base,height;
//   public:
//     Triangle(){
//       cin>>base>>height;
//     }

//     void calcArea(){
//       area=((float)1/2)*base*height;
//     }
// };

// class Quadrilateral: public Shape{
//   protected:
//     float length,breadth;
//   public:
//     Quadrilateral(){
//       cin>>length>>breadth;
//     }

//     void calcArea(){
//       area=length*breadth;
//     }
// };


// // Virtual Base Class
// class A{
//   protected:
//     int a;
//   public:
//     A(){a=0;}
// };

// class B: virtual public A{
//   protected:
//     int b;
//   public:
//     B(){b=0;}
// };

// class C: virtual public A{
//   protected:
//     int c;
//   public:
//     C(){c=0;}
// };

// class X: virtual public A{
//   protected:
//     int x;
//   public:
//     X(){x=0;}
// };

// class D: public B, public C, public X{
//   protected:
//     int d;
//   public:
//     D(){d=0;}
    
//     void read(){
//       cin>>a>>b>>c>>d;
//     }

//     void display(){
//       cout<<a<<b<<c<<d<<x;
//     }
// };

// int main(void){
//   D obj;
//   obj.read();
//   obj.display();
// }

/*
Polymorphism
Supported in C as well

Types:-
  Compile Time(Operator Overloading, Function OVerloading)
  Runtime(Virtual Functions)

return type doesn't matter in function overloading because constructors
can be overloaded without having a return type
*/

// // Function Overloading in Inheritance
// class parent{
//   protected:
//     int a;
//   public:
//     parent(int a){ this->a = a;}
    
//     void display(int a){
//       cout<<"The sum is: "<<(this->a+a);
//     }
// };
// class child: public parent{
//   int b;
//   public:
//     child(int a, int b):parent(a){
//       this->b=b;
//     }
    
//     void display(){
//       cout<<"The sum is: "<<(a+b);
//     }

//     void display(int x){
//       cout<<"The sum is: "<<(a+b+x);
//     }
// };

// Operator Overloading
// class num{
//   int a;
//   public:
//     num(int a){this->a=a;}
    
//     void operator--(){ // Pre-increment
//       cout<<"Hello"<<endl;
//     }

//     void operator--(int){ // Post-increment
//       cout<<"Hi"<<endl;
//     }

//     void display(){
//       cout<<a;
//     }
// };
// int main(void){
//   num x(2);
//   --x;
//   x--;
// }

// Overloading []
// class sample1{
//   public:
//     int data;
// };
// struct sample2{
//   int data;
// };
// class abc{
//   int mem1;
//   float mem2;
//   double mem3;
//   char mem4;
//   char mem5[10];
//   sample1 mem6;
//   sample2 mem7;
//   public:
//     void getData(){
//       cin>>mem1;
//       cin>>mem2;
//       cin>>mem3;
//       cin>>mem4;
//       cin>>mem5;
//       cin>>mem6.data;
//       cin>>mem7.data;
//     }

//     void operator[](const char s[]){
//       if(s=="one") cout<<mem1;
//       else if(s=="two") cout<<mem2<<endl;
//       else if(s=="three") cout<<mem3<<endl;
//       else if(s=="four") cout<<mem4<<endl;
//       else if(s=="five") cout<<mem5<<endl;
//       else if(s=="six") cout<<mem6.data<<endl;
//       else if(s=="seven") cout<<mem7.data<<endl;
//       else cout<<"Invalid index"<<endl;
//     }
// };
// int main(void){
//   abc obj;
//   obj.getData();
//   obj["five"];
// }

// // Insertion(>>) and Extraction(<<) Operator Overloading
// class number{
//   int num;
//   public:
//     number(){}

//     number(int num){
//       this->num = num;
//     }

//     inline number operator+(number ob){
//       return number(num+ob.num);
//     }

//     inline number operator-(number ob){
//       return number(num-ob.num);
//     }
    
//     inline number operator-(){
//       return number(-num);
//     }

//     friend istream& operator>>(istream&, number &);
//     friend ostream& operator<<(ostream&, number);
// };

// istream& operator>>(istream &in, number &ob){
//   in>>ob.num;
//   return in;
// }

// ostream& operator<<(ostream &out, number ob){
//   out<<ob.num;
//   return out;
// }

// int main(void){
//   number r1,r2,r3;
//   cin>>r1;
//   cin>>r2;
//   r3=r1+r2;
//   cout<<r3<<endl;
//   cout<<(r1-r2)<<endl;
//   cout<<(-r1);
// }

// // Special Case of Operator Overloading - Type Casting
// class number{
//   int num;
//   public:
//     number(){num=0;}
//     number(int a){
//       num = a;
//     }
//     operator int(){
//       return num;
//     }
//     void display(){
//       cout<<num<<endl;
//     }
// };
// int main(void){
//   number x(69);
//   int y;
//   y=x; // Calls operator function
//   cin>>y;
//   x=y; // Calls parameterized constructor
//   x.display();
// }

// // Templates - Function Template
// template <typename a>
// void findData(a arr[], a ele, int len){
//   int flag=0;
//   for(int i=0; i<len; i++){
//     if(arr[i]==ele){
//       flag=1;
//       break;
//     }
//   } 
//   if(flag) cout<<"Data present"<<endl;
//   else cout<<"Data absent"<<endl;
// }
// int main(void){
//   int arr1[5],e1;
//   float arr2[5],e2;
//   char arr3[5],e3;
//   for(int i=0; i<5; i++){
//     cin>>arr1[i]>>arr2[i]>>arr3[i];
//   }
//   cin>>e1>>e2>>e3;
//   findData(arr1,e1,5);
//   findData(arr2,e2,5);
//   findData(arr3,e3,5);
// }

// // Templates - Class Template
// template <typename a1, typename a2>
// class student{
//   a1 rno;
//   a2 name;
//   public:
//     student(){
//       name=new a2[10];
//     }
//     void read(){
//       cin>>rno>>name;
//     }
//     void write(){
//       cout<<rno<<name<<endl;
//     }
//     ~student(){
//       delete[] name;
//     }
// };
// int main(void){
//   student<int,char*> x;
//   x.read();
//   x.write();
// }

// // STL
/*
Stack 
Queue
DEQueue
Priority Queue
Map
Vector
Iterator
List
*/