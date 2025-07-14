# 📘 Data Structures in C++

This repository contains implementations of fundamental data structures in C++:

- ✅ Dynamic Array
- ✅ Singly Linked List
- ✅ Stack (using Array)
- ✅ Stack (using Linked List)

Each structure is implemented manually without using STL, with emphasis on understanding of dynamic memory allocation, pointer manipulation, and algorithmic behavior.

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

### 📌 Description
A resizable array that dynamically expands when it reaches full capacity. Supports insertion at the beginning, end, or any index, along with deletion and searching operations.

### ⏱️ Time & Space Complexity

| Operation            | Time         | Space |
|----------------------|--------------|--------|
| Add (end/start/index)| O(1) / O(n)  | O(n)   |
| Remove               | O(n)         | O(n)   |
| Search / Update      | O(n)         | O(n)   |

### 🧪 Usage Examples
- Insert elements at different positions.
- Remove elements from start, end, or by index.
- Search and update values.
- Print the array contents.

### ▶️ How to Run Tests
Compile and run the file:
```bash
g++ "imolement daynamic array.cpp" -o dynamic_array && ./dynamic_array

---
# 📋 Singly Linked List in C++

## 📌 Description

A linear dynamic data structure consisting of nodes, where each node points to the next. It supports efficient insertion and deletion operations, especially at the beginning or end of the list. This makes it suitable for scenarios where frequent modifications of the list are needed.

---

## ⏱️ Time & Space Complexity

| Operation        | Time Complexity | Space Complexity |
|------------------|------------------|------------------|
| Insert/Delete    | O(1) - O(n)      | O(n)             |
| Search           | O(n)             | O(n)             |

---

## 🧪 Usage Examples

- Add elements at the beginning or end.
- Insert a new element after or before a specific value.
- Delete elements from the start or end of the list.
- Search for an element and print the contents of the list.

---

## ▶️ How to Run Tests

To compile and run the singly linked list implementation:

```bash
g++ "implement singly linked list.cpp" -o sll && ./sll

---

# 🧱 Stack (Using Array) in C++

## 📌 Description

A stack implemented using a dynamically resizing array. It follows the LIFO (Last-In, First-Out) principle, where the most recently added element is the first to be removed. When the array becomes full, its capacity is doubled automatically to accommodate more elements.

---

## ⏱️ Time & Space Complexity

| Operation | Time Complexity     | Space Complexity |
|-----------|---------------------|------------------|
| Push      | O(1) (amortized)    | O(n)             |
| Pop       | O(1)                | O(n)             |
| Print     | O(n)                | O(n)             |

---

## 🧪 Usage Examples

- Push multiple elements to the stack.
- Pop the top element from the stack.
- Display all elements in the stack from top to bottom.

---

## ▶️ How to Run Tests

To compile and run the stack implementation using arrays:

```bash
g++ "imolement Stack using array.cpp" -o stack_array && ./stack_array

# 🧱 Stack (Using Linked List) in C++

## 📌 Description

A stack implemented using a singly linked list, where all stack operations are performed at the head of the list. This approach ensures constant time operations for push, pop, and access to the top element. The stack follows the LIFO (Last-In, First-Out) principle.

---

## ⏱️ Time & Space Complexity

| Operation | Time Complexity | Space Complexity |
|-----------|------------------|------------------|
| Push      | O(1)             | O(n)             |
| Pop       | O(1)             | O(n)             |
| Top       | O(1)             | O(n)             |

---

## 🧪 Usage Examples

- Push and pop elements from the stack.
- Access the top element using `Top()`.
- Use `isEmpty()` to check whether the stack contains elements.

---

## ▶️ How to Run Tests

To compile and run the stack implementation using a linked list:

```bash
g++ "implement stack using linked list.cpp" -o stack_list && ./stack_list
