# Asymptotic Notations:

Consider an array of n elements.
Consider the first element is present in the first position => **Best Case(Ω notation)** - Least number of iterations (1)
Consider the first element is present in the last position => **Worst Case(Big O notation)** - Most number of iterations (n)
Consider the first element is present in between the first and last position => **Average Case(θ notation)**

_Example_: Searching an element - Ω(1) O(n) θ((1+n)/2)

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
for(int i=1; i<=n; i*=2){
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
  for(int j=1; j<=i; j++){
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
  for(int j=1; j<=i*2; j++){
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

````cpp
// Q
for(int i=1; i<=n/2; i++){ // n/2
  for(int j=n; j<=n/2; j++){ // n/2
    for(int k=1; k<=n; k=k*2){ // log_2 n
      printf("vit\n");
    }
  }
}
/*
Check dependent or independent. Check innermost loop
(n/2).(n/2).(log_2 n) = O(n^2.log_2 n)
*/```

```cpp
for(int i=1; i<=n; i++){
  for(int j=1; j<=n; j+i){
    for(int k=1; k<=100; k++){
      printf("vit\n");
    }
  }
}
/*
Dependent
i = 1 2 3 ... n
j = n n/2 n/3 ... 1
k = n*100 (n/2)*100 (n/3)*100 ... 100
100*n*(1+1/2+1/3+1/4+...+ 1/n) = O(n.logn)
*/
````

## Recursive Program:

Termination condition for a recursive program => Stack becomes empty.

Steps:

1. Convert to Recurrence Relation
2. Back Substitution/Tree Method

```cpp
vit(n){
  if(__){
    return vit(n/2)+vit(n/2);
  }
}
/*
T(n) = c + 2*T(n/2) -> n>1
     = c -> n=1
*/
```

```cpp
vit(n){
  if(n>1){
    return vit(n-1);
  }
}
/*
T(n)=1+T(n-1); n>1 -(eq.1)
T(1)=1; n=1

T(n-1)=1+T(n-2)
T(n-2)=1+T(n-3)

T(n)=1+1+T(n-2)
    =2+T(n-2)
    =3+T(n-3)
    ...
    =k+T(n-k)
  n-k=1
  k=n-1
  => T(n)=n-1 + T(n-(n-1))
     T(n)=n
  => O(n)
*/
```

```cpp
/*
Q. T(n)=n+T(n-1); n>1
   T(1)=1; n=1
*/
T(n-1)=n-1 + T(n-2)
T(n-2)=n-2 + T(n-3)

T(n)=n+T(n-1)
    =n+n-1+T(n-2)
    =n+n-1+n-2+T(n-3)
    ...
    =n+n-1+n-2+n-k+...+T(n-(k+1))

n-(k+1)=1 => k=n-2

    =n+n-1+n-2+...+2+1
    =(n(n+1))/2
  => O(n^2)
```

### Tree Method:

```cpp
/*
Q.
T(n)=c+2.T(n/2); n>1
T(1)=c; n=1
*/
```

### Back Substitution Method:

# Master's Theorem:
