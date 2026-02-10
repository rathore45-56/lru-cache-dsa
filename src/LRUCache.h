#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <unordered_map>
using namespace std;

class LRUCache {
    private:
    struct Node{
        Node *prev;
        int key;
        int value;
        Node *next;

        Node(int k, int v);
    };

    int capacity;
    std::unordered_map<int,Node*>cache;
    Node *head; // top Node
    Node*tail;  // Last Node

    void insertAthead(Node *node);
    void moveNodetofront(Node *node);
    void removeleastrecentlyusedNode();
    void moveNodetofront(Node *node);

public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
};

#endif