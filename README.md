# 📘 Data Structures in C++

This repository contains implementations of fundamental data structures in C++:

- ✅ Dynamic Array
- ✅ Singly Linked List
- ✅ Stack (using Array)
- ✅ Stack (using Linked List)

Each structure is implemented manually without STL, demonstrating understanding of memory management, dynamic resizing, and pointer manipulation.

---

## 📁 File Structure

- DataStructuresCpp/
- │
- ├── imolement daynamic array.cpp
- ├── implement singly linked list.cpp
- ├── imolement Stack using array.cpp
- ├── implement stack using linked list.cpp
- └── README.md


---

## 🔹 1. Dynamic Array

### Description
A resizable array that automatically expands its capacity when full. Supports insertion at start, end, or index, as well as deletion and searching.

### Operations
- `addToFirst(value)`
- `addToLast(value)`
- `addToIndex(index, value)`
- `removeFromFirst()`, `romoveLast()`, `removeByIndex(index)`
- `updateElement(index, value)`
- `search(value)`, `clear()`, `shrink_to_fit()`

### Time & Space Complexity
| Operation            | Time         | Space |
|----------------------|--------------|--------|
| Add (end/start/index)| O(1)/O(n)    | O(n)   |
| Remove               | O(n)         | O(n)   |
| Search / Update      | O(n)         | O(n)   |

### Example
```cpp
ArrayList<int> myList;
myList.addToLast(10);
myList.addToFirst(5);
myList.addToIndex(1, 15);
myList.print();  // Output: 5 15 10

# 📋 Singly Linked List in C++

## 📌 Description
A singly linked list is a dynamic data structure made up of nodes, where each node contains data and a pointer to the next node in the sequence. It is efficient for insertions and deletions, especially at the beginning or end.

---

## 🔧 Operations

- `addAtBegining(value)` – Add a new node at the beginning.
- `addToLast(value)` – Add a new node at the end.
- `addAfter(existingValue, newValue)` – Add a node after a specific node.
- `addBefore(existingValue, newValue)` – Add a node before a specific node.
- `deleteFromBeginning()` – Remove the first node.
- `deleteFromEnd()` – Remove the last node.
- `search(value)` – Search for a node with a specific value.
- `print()` – Display all elements in the list.

---

## ⏱️ Time & Space Complexity

| Operation        | Time Complexity | Space Complexity |
|------------------|------------------|------------------|
| Insert/Delete    | O(1) - O(n)      | O(n)             |
| Search           | O(n)             | O(n)             |

---
- Stack<int> s;
- s.push(10);
- s.push(20);
- s.pop();
- s.print();

# 🧱 Stack (Using Linked List) in C++

## 📌 Description
A stack is a Last-In-First-Out (LIFO) data structure. This implementation uses a **singly linked list** where new elements are pushed to the head of the list, allowing efficient `O(1)` time complexity for core operations.

---

## 🔧 Operations

- `push(value)` – Add element to the top of the stack.
- `Pop()` – Remove and return the top element.
- `Top()` – Return the top element without removing it.
- `isEmpty()` – Check if the stack is empty.
- `getSize()` – Return the number of elements in the stack.

---

## ⏱️ Time & Space Complexity

| Operation | Time Complexity | Space Complexity |
|-----------|------------------|------------------|
| Push      | O(1)             | O(n)             |
| Pop       | O(1)             | O(n)             |
| Top       | O(1)             | O(n)             |

---
- Stack<int> stk;
- stk.push(5);
- stk.push(10);
- cout << stk.Top();  // Output: 10
- stk.Pop();
