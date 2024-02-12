#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin>>n;
	int sum=0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	cout<<sum;
}