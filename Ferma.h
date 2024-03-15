#ifndef FERMA_H_INCLUDED
#define FERMA_H_INCLUDED

#include <iostream>
#include<cstring>
using namespace std;

class Ferma
{

public:
    virtual void afisare() = 0;
    virtual ~Ferma() = 0 ;
    virtual void  Afisare_nume() = 0;
    virtual float Get_Venit() = 0;
    virtual float Profit_pe_tona() = 0;
    virtual float Randament() = 0;


    virtual float Profit_pe_tona_dupa_asociatie() = 0;
    virtual float Nr_tone_dupa_asociatie() = 0;
    virtual float Get_Venit_dupa_asociatie() = 0;

    virtual float Pret_redus() = 0;
    virtual float Profit_pe_tona_dupa_reducere() = 0;
    virtual float Get_Venit_dupa_reducere() = 0;



};

#endif // FERMA_H_INCLUDED
