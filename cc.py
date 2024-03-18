#  ██████╗ ██████╗
# ██╔════╝██╔════╝
# ██║     ██║     
# ██║     ██║     
# ╚██████╗╚██████╗
#  ╚═════╝ ╚═════╝
print("What is the basic difference between a graph and a tree?")
# Answering this question is mandatory.
difference = "A graph is a collection of nodes connected by edges, while a tree is a type of graph where each node has exactly one parent node, i.e, a graph can have connections between any pair of nodes, forming a complex network, while a tree has a hierarchical structure with a specific direction from the root node to the leaf nodes. Additionally, a tree cannot have cycles (loops), meaning you cannot go from a node back to itself by following edges."
print("Time complexities revolve around O(n^2) to O(nlogn). List the sorting algorithms for each. Also explain how O(nlogn) is better than the other.")
# Answering this question is mandatory.
sortingAlgo = """ 
O(n^2) - Bubble Sort, Selection Sort, Insertion Sort
O(nlogn) - Quick sort, Merge Sort

O(nlogn) algorithms are better than O(n^2) algorithms because they work much faster with big sets of data.
 """
print("Explain the difference between a Linked List and an Array. Also list the operations for each data structure where one would be preferable over the other.")
# Answering this question is mandatory.
arrayLL = """ 
Linked List: A linked list is a data structure where each element (node) contains a value and a reference (pointer) to the next element in the sequence. It's like a chain where each link points to the next one.

Array: An array is a data structure that stores elements of the same type in contiguous memory locations. It's like a row of boxes where each box holds a value, and you can access them directly by their position.

Operations:
Linked List: Preferable for frequent insertion or deletion of elements, as it can be done in constant time O(1) by adjusting pointers. Suitable when the size of the data is unknown or can change frequently, as it can easily accommodate new elements without resizing.

Array: Preferable for fast random access to elements, as the time complexity for access is O(1) by using the index. More memory-efficient for storing large sequences of elements, as it does not require additional memory for pointers.
 """
print("What is a stable algorithm? Which sorting algorithms are said to be stable? Why do we need to bother if an algorithm is stable or not?")
# Answering this question is mandatory.
swap = """ 
A stable algorithm is one where the relative order of equal elements remains unchanged after sorting.

The stable sorting algorithms include:
Bubble Sort
Insertion Sort
Merge Sort

It's important to consider whether an algorithm is stable or not because in some scenarios, maintaining the original order of equal elements is important.
 """
print("You are provided with a string. Write an approach to Remove the most occurring character from the string. (Any language can be used)")
# Answering this question is mandatory.
problem_ques = """ 
def removeMostOccurringChar(string):
  charCount = {}
  for char in string:
    if char in charCount:
      charCount[char] += 1
    else:
      charCount[char] = 1
  mostOccurringChar = max(charCount, key=charCount.get)
  newString = string.replace(mostOccurringChar, '')

  return newString

string = "Helloo World"
result = removeMostOccurringChar(string)
print(result)
 """
print("Share your Leetcode/Hackerrank/Codechef account links.")
profile = "https://www.hackerrank.com/profile/jothishkamal"