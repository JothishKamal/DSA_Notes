#include<bits/stdc++.h>
using namespace std;
// Types of Constructors
class date{
  int d,m,y;
  public:
    date(){
      d=m=y=0;
      cout<<"Default Contructor"<<endl;
    }

    date(int a, int b, int c){
      d=a;m=b;y=c;
      cout<<"Parameterized Contructor"<<endl;
    }

    date(const date& t){
      d=t.d;
      m=t.m;
      y=t.y;
      cout<<"Copy Constructor"<<endl;
    }

    void putDate(){
      cout<<d<<"-"<<m<<"-"<<y<<endl;
    }
    
};
int main(void){
  date x;
  date y(12,10,2005);
  y.putDate();
  date z(y);
  z.putDate();
}