# include <iostream>
# include "LRUCache.h"
using namespace std;

int main(){
    LRUCache cache(2);
    cache.put(1,10);
    cache.put(2,20);
    cache.printcachevalue();
    cout<<cache.get(2)<<endl;
    cout<<cache.get(1)<<endl;
    cache.printcachevalue();


    cache.put(4,30);

    cout<<cache.get(1)<<endl;
    cout<<cache.get(4)<<endl;
    cache.printcachevalue();
    

   
}