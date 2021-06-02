#ifndef BASELISTE_H
#define BASELISTE_H
#include<list>
#include<iostream>
using namespace std;


class BaseListe
{

    public:
        list<int> b;
        BaseListe(){}
        BaseListe& operator <(int i){b.push_back(i);return *this;}
        friend ostream &operator << (ostream &out ,BaseListe l){
  list<int> ::iterator itr;

		for (itr=l.b.begin(); itr!=l.b.end(); itr++)
        {out << (*itr)<<" ";}
   return out;
}
        virtual ~BaseListe(){}
        virtual void operator> (int&) {}

    protected:

    private:
};


#endif // BASELISTE_H
