#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin>>n;
  for(int i=0, x=1; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << " ";
    }
    for(int j=0; j<=i; j++){
      cout << x++ << " ";
    }
    cout << endl;
  }
}
