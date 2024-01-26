## Boilerplate Code

```cpp
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;

int main(void){}
```

## C++ STL

1. Algorithms
2. Containers
3. Functions
4. Iterators

## Pairs (kinda like map): #pairs
### Syntax:

```cpp
pair<int,int> p = {a,b};
pair<int, pair<int,int> p = {a,{b,c}}; // Nested Pair
```
### Methods:

```cpp
p.first, p.first.second, p.second, p.second.second
```
### Array Pair:

```cpp
pair<int,int> arr[]={{a,b},{c,d},{e,f}};
arr[1].second;
```

## Vectors (array of undefined size): #vectors
### Syntax:

```cpp
vector<int> v;
vector<int> v(a); // a instances of garbage value
vector<int> v(a,b); // a instances of b
vector<int> v2(v1); // Copying v1 to v2
```
### Methods:

```cpp
v.push_back(1); // Appends 1 to v

v.emplace_back; // Dynamically increases the size of the vector and appends 2
// emplace_back is faster than push_back

v.erase(from_memory_address, to_memory_address); // Ex: v.erase(v.begin());

v.insert(memory_address, number_of_values, value); // Ex: v.insert(v.begin(), 2);

v.size(); // Returns the size of the vector
v.pop_back(); // Pop
v1.swap(v2); // Swaps two vectors
v.clear(); // Erases the entire vector
v.empty(); // Returns true if v.size()=0
```
### Vector with Pair:

```cpp
vector<pair <int,int>> vec;
vec.push_back({1,2});
vec.emplace_back(1,2);
```

### Accessing Vectors:
#### 1. Index Method:

```cpp
cout << v[index];
cout << v.at(index); // Uncommon
```
#### 2. Iterator Method:

```cpp
// Ex: v={1,2,3,4}
vector<int>::iterator it = v.begin(); // 'it' is pointer. Points to the memory address of 1.
it++;
cout << *(it) << " ";

vector<int>::iterator it = v.end(); // Points to the memory address after 4. Must do it-- before iterating.
vector<int>::iterator it = v.rend(); // (Not used) Points to the memory address before 1.
vector<int>::iterator it = v.rbegin(); // (Not used) Points to the memory address of 4.

// Iterating a vector through for loop
for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
  cout << *it << " ";
}

// Another way (replace vector<int>::iterator with auto)
for(auto it = v.begin(); it!=v.end(); it++){
  cout << *it << " ";
}

// Iterating the values (like for i in lst)
for(auto it : v){
  cout << it << " ";
}
```

