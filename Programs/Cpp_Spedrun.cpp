#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; // Inputting the number of test cases
  cin>>t;
  for(int i=0;i<t;i++){
    pair<int,int> x;
    cin>>x.first>>x.second;
	  int diff=x.second-x.first;
	  int ct=0;
	  while(diff>0){
      if(diff%2==1) ct++;
		  diff/=2;
    }
    cout<<ct; 
  }
}
