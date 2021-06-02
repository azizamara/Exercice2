#ifndef LIFO_H
#define LIFO_H
#include <iostream>
#include <BaseListe.h>


class LIFO : public BaseListe
{
    public:
        LIFO(){}
         void operator>( int& s)
    {
        list<int> :: iterator itr = b.end();
        itr--;
        s = *itr ;
        b.pop_front();

    }
        virtual ~LIFO(){}

    protected:

    private:
};

#endif // LIFO_H



