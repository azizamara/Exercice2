#include <iostream>
#include<BaseListe.h>
#include<LIFO.h>
#include<FIFO.h>
#include <list>
using namespace std;

int main()
{BaseListe *ptListe;
FIFO fifo;
LIFO lifo;
ptListe=&fifo;
*ptListe<0<1; //on empile 0 puis 1
cout<<"Liste="<<*ptListe; //� l'�cran : Liste = 0 1
int i;
*ptListe>i; //on d�pile dans i
cout<<"Liste="<<*ptListe<<"i="<<i; //� l'�cran Liste=1 i=0
ptListe=&lifo;
*ptListe<0<1; //on empile 0 puis 1
cout<<"Liste="<<*ptListe; //� l'�cran : Liste = 0 1
*ptListe>i; //on d�pile dans i
cout<<"Liste="<<*ptListe<<"i="<<i; //� l'�cran Liste=0 i=1
}
