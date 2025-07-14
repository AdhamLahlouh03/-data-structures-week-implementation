# 📚 Data Structures in C++

This repository contains **C++ implementations** of core data structures, implemented from scratch to learn fundamental concepts. The work is based on the course:

> **Data Structures Easy to Advanced Course - Full Tutorial by a Google Engineer**  
> 🎥 [Watch the Course on YouTube](https://www.youtube.com/watch?v=RBSGKlAvoiM)

---

## 📌 Implemented Data Structures

### 1. Dynamic Array
- **File**: `imolement daynamic array.cpp`
- **Description**: A resizable array that automatically expands when full. Similar to `std::vector`.
- **Features**:
  - Add to front, back, or index
  - Remove from front, back, or index
  - Update/search elements
  - Shrink to fit
  - Access via index operator
- **Time Complexity**:
  - Access: `O(1)`
  - Insert/Delete at end: `O(1)` amortized
  - Insert/Delete at front/index: `O(n)`
  - Resize: `O(n)`
- **Space Complexity**:
  - `O(n)` for `n` elements
- **Usage Example**:
```cpp
ArrayList<int> list;
list.addToLast(10);
list.addToFirst(5);
list.removeFromFirst();
list.print();
