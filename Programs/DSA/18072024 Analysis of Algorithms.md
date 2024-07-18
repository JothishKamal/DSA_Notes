# Asymptotic Notations:
Consider an array of n elements.
Consider the first element is present in the first position => **Best Case(Ω notation)** - Least number of iterations (1)
Consider the first element is present in the last position => **Worst Case(Big O notation)** - Most number of iterations (n)
Consider the first element is present in between the first and last position => **Average Case(θ notation)**

*Example*: Searching an element - Ω(1) O(n) θ((1+n)/2)


# Time Complexity
## Iterative Program (Looping):

```cpp
// O(n)
for(int i=1; i<=n; i++){
  printf("vit\n");
}

// O(n^2)
for(int i=1; i<=n*n; i++){
  printf("vit\n");
}

// O(n^(1/2))
for(int i=1; i*i<=n; i++){ // i<=n^(1/2)
  printf("vit\n");
}
```

```cpp
// Q
int main(void){
  int i=1,s=1;
  while(s<=n){
    i+=1;
    s+=i;
  }
}

/*
i = 1 2 3 4 5 ... n
s = 1 3 6 10 15 ... k  
O((n(n+1))/2)=O(n^2)
*/
```

```cpp
// 2^k = n => O(log_2 n)
for(int i=1; i<=n; i*2){
  printf("vit\n");
}
```

```cpp
// O(n^2) [Focus on inner most loop]
for(int i=1; i<=n; i++){
  for(int j=1; j<=n; j++){
    printf("vit\n");
  }
}
```

```cpp
for(int i=1; i<=n; i++){
  for(int j=1; j<=i*2; j++){
    for(int k=1; k<=100; k++){
      printf("vit\n");
    }
  }
}
/*
i = 1 2 3 ... n
j = 1 2 3 ... n
k = 1*100 2*100 3*100 ... n*100
100((n(n+1))/2) => O(n^2)
*/
```

```cpp
for(int i=1; i<=n; i++){
  for(int j=1; j<=i; j++){
    for(int k=1; k<=100; k++){
      printf("vit\n");
    }
  }
}
/*
i = 1 2 3 ... n
j = 1 4 9 ... n^2
k = 1*100 4*100 9*100 ... n^2*100
100((n(n+1)(2n+1))/6) => O(n^3)
*/
```
## Recursive Program:

### Tree Method:
### Back Substitution Method:
# Master's Theorem:
