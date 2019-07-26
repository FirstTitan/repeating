#ifndef LIST_CPP
#define LIST_CPP

#include <iostream>
#include "Iterator.cpp"
#include "Item.cpp"

template <class Type>
class List {
    public:
        Item<Type> *last;
        size_t size;

        List() : last(NULL), size(0) {};
        ~List() {
            for ( ; this->last != NULL; ) {
                Item<Type> *prevItem = this->last->prev;

                delete this->last;
                this->last = prevItem;
                size -= 1;
            }
        }

        void append(Item<Type> *item) {
            if ( this->last == NULL ) {
                this->last = item;
            } else {
                this->last->next = item;
                item->prev = this->last;
                this->last = item;
            }
            size += 1;
        }
        void append(Type elem) {
            Item<Type> *item = new Item<Type>(elem);

            this->append(item);
        }
};

#endif //LIST_CPP