#ifndef ITERATOR_CPP
#define ITERATOR_CPP

#include "Item.cpp"

template <class Type>
class Iterator {
    private:
        Item<Type> *current;
    public:
        Iterator(Item<Type> *item) : current(item) {};

        void prev() {
            if ( this->current->prev != NULL ) {
                this->current = this->current->prev;
            }
        }

        void operator--() {
            this->prev();
        }
        void operator--(int) {
            this->prev();
        }

        void next() {
            if ( this->current->next != NULL ) {
                this->current = this->current->next;
            }
        }

        void operator++() {
            this->next();
        }
        void operator++(int) {
            this->next();
        }

        void begin() {
            for ( ; this->current->prev != NULL; this->current = this->current->prev );
        }
        void end() {
            for ( ; this-current->next != NULL; this->current = this->current->next );
        }

        Type operator*() {
            return this->current->value;
        }

        bool isOver() {
            return this->current->next == NULL;
        }
};

#endif //ITERATOR_CPP