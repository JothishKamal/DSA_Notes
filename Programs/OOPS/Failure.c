#include<stdio.h>
#include<stdlib.h>
struct arrSize{
  int n;
  float *a;
};
typedef struct arrSize aS;
aS remDuplicate(float *a, int n){
  aS new;
  int ct;
  float *b=(float *)malloc(n*sizeof(float));
  int x=0;
  for(int i=0; i<n; i++){
    ct=0;
    for(int j=0; j<n; j++){
      if(a[i]==b[j]){
        ct+=1;
      }
    }
    if(ct==0){
      b[x]=a[i];
      x++;
    }
  }
  new.n=x;
  new.a=b;
  return new;
}
int search(float *a, int n, float se){
  for(int i=0; i<n; i++){
    if(a[i]==n){
      return 1;
    } else return 0;
  }
}
int main(void){
  int n;
  scanf("%d",&n);
  float *a=(float *)malloc(n*sizeof(float));
  for(int i=0; i<n; i++) scanf("%f",&a[i]);
  float se;
  scanf("%f",&se);
  aS arr=remDuplicate(a,n);
  for(int i=0; i<arr.n; i++){
    printf("%.2f ", arr.a[i]);
  }
  int val=search(arr.a,arr.n,se);
  if(val==1){
    printf("\nData present");
  } else {
    printf("\nData not present");
  }
  free(arr.a);
  free(a);
}
