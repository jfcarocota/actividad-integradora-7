#include <iostream>
#include "AvlTree.hh"
using namespace std;

    // Test program
int main( )
{
    /*AvlTree<int> t, t2;
    int NUMS = 400000;
    const int GAP  =   37;
    int i;*/

   /* cout << "Checking... (no more output means success)" << endl;

    for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
        t.insert( i );

    if( NUMS < 40 )
        t.printTree( );
    if( t.findMin( ) != 1 || t.findMax( ) != NUMS - 1 )
        cout << "FindMin or FindMax error!" << endl;

    t2 = t;

    for( i = 1; i < NUMS; i++ )
        if( !t2.contains( i ) )
            cout << "Find error1!" << endl;
    if( t2.contains( 0 ) )
        cout << "ITEM_NOT_FOUND failed!" << endl;

    cout << "Test finished" << endl;*/
    AvlTree<int> t;

    for(int i = 1; i <= 10; ++i)
    {
        t.insert( i );
    }

    cout << "*********************************" << endl;
    t.printTree();
    cout << "*********************************" << endl;
    cout << t.findMax() << endl;
    cout << "*********************************" << endl;
    cout << t.findMin() << endl;
    cout << "*********************************" << endl;
    if(t.contains(5))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    /*cout << "*********************************" << endl;
    cout << t.height(t->ele) << endl;*/
    //no encontre solución al problema del nivel de un nodo
    cout << "*********************************" << endl;
    t.remove(5);
     if(t.contains(5))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    cout << "*********************************" << endl;
    getchar();
    return 0;
}
