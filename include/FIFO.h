#ifndef FIFO_H
#define FIFO_H
#include <iostream>
#include <BaseListe.h>


class FIFO : public BaseListe
{
    public:
        FIFO(){}
         void operator>(int& s)
    {
        list<int> ::iterator itr=b.begin();
        s= *itr;
        b.pop_back();

    }
        virtual ~FIFO(){}

    protected:

    private:
};

#endif // FIFO_H
