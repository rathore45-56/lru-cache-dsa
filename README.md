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


