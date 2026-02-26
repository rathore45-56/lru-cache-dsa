# LRU Cache Implementation (C++)

This project implements an LRU (Least Recently Used) Cache using:
- Hash Map
- Doubly Linked List

## Progress Log
- Day 1: Designed LRUCache class and project structure
- Day 2: Implemented core doubly linked list operations (addToFront, removeNode)
- Day 3: Implemented moveToFront and LRU eviction logic
- Day 4:
a) Implemented full LRU Cache
b) Integrated HashMap + Doubly Linked List
c) Verified O(1) time complexity
d) Successfully compiled and executed using g++

## 🔄 Recent Enhancements (Post Initial Development)
- Implemented custom destructor to properly deallocate all dynamically allocated nodes
- Improved edge case handling (empty cache, capacity overflow, repeated key updates)
- Ensured complete memory cleanup to prevent leaks
- Refactored internal pointer handling for safer node removal
- Re-tested full workflow after enhancements

## 🧪 Edge Cases Tested

- Accessing non-existing keys
- Updating existing key values
- Inserting beyond capacity
- Capacity = 1 scenario
- Sequential access patterns

## 📊 Cache Visualization Feature

Added a utility function to visualize cache state:

printcachevalue()

This function displays cache contents from Most Recently Used → Least Recently Used.

Example output:

Current node key is 2 and current node value is 20  
Current node key is 1 and current node value is 10  

This helps in debugging and verifying correct cache ordering.

---

## 🧹 Memory Management

Implemented a custom destructor:

~LRUCache()

Responsibilities:

- Deletes all dynamically allocated nodes
- Prevents memory leaks
- Ensures safe cleanup when cache object goes out of scope

Example output during cleanup:

Destructor called

---

## 🧠 Internal Architecture

The cache is implemented using:

Hash Map (unordered_map)
- Provides O(1) access to cache elements

Doubly Linked List
- Maintains usage order
- Front → Most Recently Used
- End → Least Recently Used

---

## ⚡ Time Complexity Analysis

| Operation | Complexity |
|----------|------------|
| get()    | O(1) |
| put()    | O(1) |
| remove   | O(1) |
| insert   | O(1) |

---

## ▶️ How to Run

Step 1: Open terminal in project folder

Step 2: Compile

g++ src/LRUCache.cpp src/main.cpp -o lru

Step 3: Run

Windows:
.\lru.exe

Linux/Mac:
./lru

---

## 🚀 Restart Progress Log

Restart Day 1:
- Reviewed complete implementation
- Verified memory safety
- Improved destructor implementation

Restart Day 2:
- Implemented cache visualization function
- Tested linked list traversal

Restart Day 3:
- Verified full cache correctness
- Tested multiple edge cases
- Ensured stable execution

---

## 💼 Skills Demonstrated

- Advanced Data Structures
- Hash Map Integration
- Doubly Linked List Implementation
- Memory Management in C++
- Object-Oriented Programming
- System Design Fundamentals
- Debugging and Testing



