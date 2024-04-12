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