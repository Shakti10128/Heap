#include<bits/stdc++.h>
#include"HeapClass.cc"
using namespace std;
/*-----------------------Max heap-----------------------*/


// for delete the element from heap use "remove"
int main(){
    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);
    h.remove();
    h.print();
}