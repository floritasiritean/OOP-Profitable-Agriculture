#include "Orz.h"

Orz::Orz()
{
    nume=NULL;
    nr_tone_pe_hectar=0;
    pret_pe_tona=0;
    an=0;
    procent=0;

}


Orz::Orz(char* nume, int nr_tone_pe_hectar, int pret_pe_tona, int an, float procent)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);
    this->nr_tone_pe_hectar=nr_tone_pe_hectar;
    this->pret_pe_tona=pret_pe_tona;
    this->an=an;
    this->procent=procent;
}

void Orz::afisare()
{
    cout<<"Nume:"<<nume<<endl<<endl;
    cout<<"Nr_tone_pe_hectar:"<<nr_tone_pe_hectar<<endl;
    cout<<"Pret_pe_tona:"<<pret_pe_tona<<endl;
    cout<<"An:"<<an<<endl;
    cout<<"Procent:"<<procent<<endl;
}



float Orz::Profit_pe_tona()
{
    return nr_tone_pe_hectar*pret_pe_tona;
}

float Orz::Get_Venit()
{
    return procent*1000*Orz::Profit_pe_tona();
}



float Orz::Randament()
{
    return Orz::Get_Venit()/(procent*1000);
}



float Orz::Nr_tone_dupa_asociatie()
{
    return nr_tone_pe_hectar+0.3*nr_tone_pe_hectar;
}

float Orz::Profit_pe_tona_dupa_asociatie()
{
    return Orz::Nr_tone_dupa_asociatie()*pret_pe_tona;
}

float Orz::Get_Venit_dupa_asociatie()
{
    return procent*1000*Orz::Nr_tone_dupa_asociatie()*pret_pe_tona;
}



void Orz::Afisare_nume()
{
    cout<<nume;
}



float Orz::Pret_redus()
{
    return pret_pe_tona-0.4*pret_pe_tona;
}

float Orz::Profit_pe_tona_dupa_reducere()
{
    return Orz::Nr_tone_dupa_asociatie()*Orz::Pret_redus();
}

float Orz::Get_Venit_dupa_reducere()
{
    return procent*1000*Orz::Nr_tone_dupa_asociatie()*Orz::Pret_redus();
}



Orz::~Orz()
{
    delete []nume;
}

