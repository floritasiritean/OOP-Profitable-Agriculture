#ifndef PORUMB_H_INCLUDED
#define PORUMB_H_INCLUDED

#include "Ferma.h"

class Porumb : public Ferma
{

    char* nume;
    int nr_tone_pe_hectar;
    int pret_pe_tona;
    int an;
    float procent;

public:
    Porumb();
    Porumb(char*, int, int, int, float);
    void afisare();
    float Get_Venit();
    float Randament();
    float Profit_pe_tona_dupa_asociatie();
    float Nr_tone_dupa_asociatie();
    float Get_Venit_dupa_asociatie();
    float Pret_redus();
    void Afisare_nume();
    float Profit_pe_tona();
    float Profit_pe_tona_dupa_reducere();
    float Get_Venit_dupa_reducere();
    ~Porumb();
} ;

#endif // PORUMB_H_INCLUDED
