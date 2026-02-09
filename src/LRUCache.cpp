#include "LRUCache.h"
// Node Constructor
LRUCache::Node::Node(int k,int v)
: key(k),value(v),prev(nullptr),next(nullptr){};

// LRUCache Constructor
LRUCache::LRUCache(int capacity) : capacity(capacity)
{
    head=new Node(-1,-1);
    tail=new Node(-1,-1);
    head->next=tail;
    tail->prev=head;
}
void LRUCache::insertAthead(Node* node) {
    node->next=head->next;
    node->prev=head;
    node->next->prev=node;
    head->next=node;
}
void LRUCache::moveNodetofront(Node *node)
{

}
void LRUCache::removeleastrecentlyusedNode()
{
    
}
void LRUCache::removeNode(Node *node)
{
    node->prev->next=node->next;
    node->next->prev=node->prev;
}
int LRUCache::get(int key) {
    // TODO: implement
    return -1;
}

void LRUCache::put(int key, int value) {
    // TODO: implement
}

