#include <iostream>
#include "List.cpp"

int main() {
    List<int> *list = new List<int>();

    for ( int i = 0; i < 10; i++ ) {
        list->append(i);
    }

    Iterator<int> it(list->last);

    it.begin();

    for ( ; !it.isOver(); it++ ) {
        std::cout << *it << ' ';
    }
    std::cout << *it << std::endl;

    return 0;
}
