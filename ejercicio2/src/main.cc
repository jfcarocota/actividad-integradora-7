#include <iostream>
#include "BTree.hh"

int main() {
    BTree bt;
    srand(time(NULL));
    for(int i = 1; i <= 10; i++) {
        bt.addNode(i);
    }
    bt.print();
  
    getchar();
    return 0;
}