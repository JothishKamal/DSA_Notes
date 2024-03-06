#include<bits/stdc++.h>
using namespace std;
class test{
	public:
		int a;		
		
		test(){
			a=0;
			cout<<a;
		}
		
		test(int x){
			a=x;
			cout<<a;
		}

		test(test &t){
			a=t.a;
			cout<<a;
		}
};
int main(void){
	test t;
	test t1(t);

}