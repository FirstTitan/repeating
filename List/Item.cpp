#ifndef ITEM_CPP
#define ITEM_CPP

#include <iostream>

template <class Type>
class Item {
    public:
        Type value;
        Item<Type> *prev;
        Item<Type> *next;

        Item(Type value) : value(value), prev(NULL), next(NULL) {};
};

#endif //ITEM_CPP