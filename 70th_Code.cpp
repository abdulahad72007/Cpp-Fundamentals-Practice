#include <iostream>
using namespace std;
int main(){
    /*
    ---------- Containers in STL --------
    STL = Containers + Algorithm + Iterators
              ^             ^           ^
              |             |           |
        Object which    Procedure to    Object which points
        stores data     process data    to an element of a container

        Containers:-
        i) Sequence Containers -> Linear Fashion    [1]->[7]->[9]->[11] {Vector, List, Dequeue}
        ii) Associative Containers -> Direct Access --> Tree like Data Structure {Set/Multiset, Map/Multimap}
        iii) Derived Containers -> Real world Modeling --> {Stack [LIFO], Queue [FIFO], Proirity Queue} 

    ----- Sequence Containers -----
        1. Vector -> Random Access = Fast
            Intertion Del in middle = Slow
            Insertion at the end = Fast
        2. List -> Random Access = Slow
            Middle Insertion = Fast
            Insertion at the End = Fast
    ----- Associative Containers -----
    -> All operations fast except RA (Random Access)
    ----- Derived Containers -----
    -> Depends --> Data Structure
    */
    return 0;
}