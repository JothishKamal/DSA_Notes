## Boilerplate Code

```cpp
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;

int main(void){}
```

## C++ STL

1. Algorithms - Learn more while solving questions
2. Containers - Covered below
3. Functions - Not required
4. Iterators - Covered below

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

## List (Similar to Vectors but allows front operations as well): #list
### Syntax:

```cpp
list<int> ls;
```
### Methods:

```cpp
ls.push_back(1);
ls.emplace_back(2);
ls.push_front(3); // Faster than vector insert
ls.emplace_front(4);
// begin, end , rbegin, rend, clear, insert, size, swap same as vector
```
## Deque: #dq
### Syntax:

```cpp
deque<int> dq;
```
### Methods:

```cpp
deque<int> dq;

dq.push_back(1);
dq.emplace_back(2);
dq.push_front(3);
dq.emplace_front(4);

dq.pop_back();
dq.pop_front();

dq.back();
dq.front();
// begin, end , rbegin, rend, clear, insert, size, swap same as vector
```



## Stack (LIFO - Last In First Out): #stack
### Syntax:

```cpp
stack<int> st;
```
### Methods:

```cpp
st.push(1); // {1}
st.push(2); // {2,1}
st.push(3); // {3,2,1}
st.push(4); // {4,3,2,1}
st.emplace(5); // {5,4,3,2,1}
st.pop();
st.top(); // Returns 4. st[index] is invalid

st.size();
st.empty();
st1.swap(st2);
```
## Queue (FIFO - First In First Out): #queue
### Syntax:

```cpp
queue<int> q;
```
### Methods:

```cpp
q.push(1); // {1}
q.push(2); // {1,2}
q.push(3); // {1,2,3}

q.back()+=5; 
q.back(); // Returns 8

q.front(); // Returns 1
q.pop(); // {2,8}

// size, swap, empty methods are similar to swap
```
## PriorityQueue (Largest Value stays at the top): #pq
### Syntax:

```cpp
// Maximum Heap
priority_queue<int> pq;
// Minimum at top (Minimum Heap)
priority_queue<int, vector<int>, greater<int>> pqr;
```
### Methods:

```cpp
pq.push(5); // {5} [O(log n)]
pq.push(4); // {5,4}
pq.push(7); // {7,5,4}
pq.emplace(1); // {7,5,4,1}

pq.top(); // Returns 7 [O(1)]
pq.pop(); // Removes 7 [O{log n}]

// pqr
pqr.push(5); // {5}
pqr.push(2); // {2,5}
pqr.push(8); // {2,5,8}
pqr.emplace(10); // {2,5,8,10}

pq.top(); // Returns 2
```
## Set (Sorted & Unique): #set
### Syntax:

```cpp
set<int> st;
```
### Methods:

```cpp
st.insert(1); // {1} // O(log n)
st.emplace(2); // {1,2}
st.insert(2); // {1,2}
st.insert(4); // {1,2,4}
st.insert(3); // {1,2,3,4}
// begin, end, rbegin, rend, size, empty and swap are same as those of vectors

auto it = st.find(3); // Points to the memory address of 3
auto it = st.find(5); // If the element is not present, it always returns st.end()

st.erase(a/it); // a can be address[O(log n)]/value[O(1)].
st.erase(it1,it2); // Also works

st.count(a); // Returns 1 if a is present else 0

// lower_bound & upper_bound - same as vec
auto it = st.lower_bound(x);
auto it = st.upper_bound(x);
```
Reference: [[Binary_Search]]
## MultiSet (Only Sorted): #multiset
### Syntax:

```cpp
multiset<int> ms;
```
### Methods:

```cpp
ms.insert(1); // {1}
ms.insert(1); // {1,1}
ms.insert(1); // {1,1,1}

ms.erase(1); // Erases all the occurences

int ct=ms.count(1); // Returns the number of occurences

ms.erase(ms.find(1)); // Erases only 1 occurence
ms.erase(it1,it2);

// Rest all functions are same as set
```
## Unordered Set (Only unique): #unordered_set
### Syntax:

```cpp
unordered_set<int> st;
```
### Methods:

```cpp
// Same as set but lower_bound and upper_bound functions don't work
// Time Complexity: O(1) [Worst Case: O(log n)]
```
## Map (Similar to dict): #map
### Syntax:

```cpp
// [O(log n)]
map<int, int> mpp; // Unique & Sorted keys
map<int, pair<int,int>> mpp;
map<pair<int,int>, int> mpp;
```
### Methods:

```cpp
mpp[1]=2; // map<int,int>
mpp.emplace({3,1});
mpp.emplace({2,4});

mpp[{2,3}]=10;
```
### Iterating Through Map:

```cpp
// {{1,2}:1, {2,4}:2, {3,1}:3}
for(auto it:mpp){
	cout << it.first << " " << it.second << endl;
}
```
### Accessing Elements in a map:
```cpp
cout << mpp[1];
cout << mpp[5]; // Returns 0 or NULL

auto it=mpp.find(3);
cout<< *(it).second;

auto it=mpp.find(5); // Points to mpp.end() if element isn't found

auto it = mpp.lower_bound(2);
auto it = mpp.upper_bound(3);
// erase, swap, size, empty are same as above
```
## Multimap (Duplicate keys but sorted): #multimap

```cpp
// mpp[key] can't be used here
```
## Unordered Map (Unique keys but not sorted): #unordered_map

```cpp
// Same as set and unordered_set difference [O(1), Worse case: O(n)]
```




# Important Algorithms:
## Sort (Most containers can be sorted): #sort
### Syntax:

```cpp
sort(it1, it2); // it1 is a(address of first element) and it2=a+(sizeOfContainer)
sort(v.begin(), v.end());
sort(a+2, a+4)

// Descending order
sort(it1, it2, greater<int>);

// Custom sort
bool comp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second<p2.second) return true;
	if(p1.second>p2.second) return false;
	// if p1 and p2 are ssame
	if(p1.first>p2.first) return true;
	return false;
}
pair<int,int> a[]={{1,2}, {2,1}, {4,1}}
sort(a,a+n,comp)
```
## Popcount: #popcount

### Syntax:

```cpp
int n=7;
int ct=__builtin_popcount(n); // Returns the number of binary ones present in a number
cout<<ct;

long long int n=6723546725;
int ct=__builtin_popcountll(n);
```
## String Permutation (Always sort before using): #string_permutation
### Syntax:

```cpp
string s="123";
sort(s.begin(), s.end());
do{
	cout<< s << endl;
} while(next_permutation(s.begin(), s.end()));
```

## Maximum & Minimum Element: #maximin_element
### Syntax:

```cpp
int max=*max_element(a,a+n);
int min=*min_element(a,a+n);
```

