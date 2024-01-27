```cpp
// Binary Search [O(log n)]
bool res = binary_search(a,a+n,x); // Returns true if element is present else false

// lower_bound (Points to the index of the element if it is present in the array else points to the next index) [O(log n)]
int a[]={1,4,5,6,9,9};
int index=lower_bound(a,a+n,4)-a; // Returns 1
int index=lower_bound(a,a+n,7)-a; // Returns 4
int index=lower_bound(a,a+n,10)-a; // Returns 6
// For vectors
int index=lower_bound(a.begin(), a.end, x) - a.begin();

// upper_bound (Always points to the element next to the required element) [O(log n)]
int a[]={1,4,5,6,9,9};
int index=lower_bound(a,a+n,4)-a; // Returns 2
int index=lower_bound(a,a+n,7)-a; // Returns 4
int index=lower_bound(a,a+n,10)-a; // Returns 6
// For vectors
int index=lower_bound(a.begin(), a.end, x) - a.begin();
```