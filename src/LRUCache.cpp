#include "LRUCache.h"
#include <iostream>
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
// Node Destructor
LRUCache::~LRUCache()
{
    cout << "Destructor called" << endl;
    Node *current=head;
    while(current!=nullptr)
    {
        Node *next=current->next;
        delete current;
        current=next;
    }
    
}
void LRUCache::insertAthead(Node* node) {
    node->next=head->next;
    node->prev=head;
    node->next->prev=node;
    head->next=node;
}
void LRUCache::moveNodetofront(Node *node)
{
     removeNode(node);
     insertAthead(node);
}
void LRUCache::removeleastrecentlyusedNode()
{
    Node *lru=tail->prev;
    if(lru==head)
    return;
    lru->prev->next=tail;
    tail->prev=lru->prev;
    cache.erase(lru->key);
    delete lru;
}
void LRUCache::removeNode(Node *node)
{
    node->prev->next=node->next;
    node->next->prev=node->prev;
}
int LRUCache::get(int key) {
    
    if(cache.find(key)==cache.end())
    return -1;

    Node *toget=cache[key];
    moveNodetofront(toget);
    int value1=toget->value;
    return value1;

}
void LRUCache::printcachevalue(){

    if(head->next==tail)
    {
        cout<<"Cache is Empty"<<endl;
        return;
    }
    Node*curr= head;
    while(curr->next!=nullptr && curr->next!=tail)
    {
        Node *temp=curr->next;
        cout<<"current node key is "<< temp->key<<" and current node value is "<< temp->value<<endl;
        curr=curr->next;
    }
   
}

void LRUCache::put(int key, int value) {
    if (capacity == 0) return;
    if(cache.find(key)!=cache.end())
    {
        Node *existing=cache[key];
        existing->value=value;
        moveNodetofront(existing);
    }
    else
    {
        Node *new1= new Node(key,NULL);
        cache[key]=new1;
        new1->value=value;
        insertAthead(new1);

        if(cache.size()>capacity)
        {
            removeleastrecentlyusedNode();
        }

    }
}

