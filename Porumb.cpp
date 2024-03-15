#include "Porumb.h"

Porumb::Porumb()
{
    nume=NULL;
    nr_tone_pe_hectar=0;
    pret_pe_tona=0;
    an=0;
    procent=0;

}


Porumb::Porumb(char* nume, int nr_tone_pe_hectar, int pret_pe_tona, int an, float procent)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);
    this->nr_tone_pe_hectar=nr_tone_pe_hectar;
    this->pret_pe_tona=pret_pe_tona;
    this->an=an;
    this->procent=procent;
}

void Porumb::afisare()
{
    cout<<endl<<"Nume:"<<nume<<endl<<endl;
    cout<<"Nr_tone_pe_hectar:"<<nr_tone_pe_hectar<<endl;
    cout<<"Pret_pe_tona:"<<pret_pe_tona<<endl;
    cout<<"An:"<<an<<endl;
    cout<<"Procent:"<<procent<<endl;
}



float Porumb::Profit_pe_tona()
{
    return nr_tone_pe_hectar*pret_pe_tona;
}

float Porumb::Get_Venit()
{
    return procent*1000*Porumb::Profit_pe_tona();
}



float Porumb::Randament()
{
    return Porumb::Get_Venit()/(procent*1000);
}



float Porumb::Nr_tone_dupa_asociatie()
{
    return nr_tone_pe_hectar+0.3*nr_tone_pe_hectar;
}

float Porumb::Profit_pe_tona_dupa_asociatie()
{
    return Porumb::Nr_tone_dupa_asociatie()*pret_pe_tona;
}

float Porumb::Get_Venit_dupa_asociatie()
{
    return procent*1000*Porumb::Nr_tone_dupa_asociatie()*pret_pe_tona;
}



void Porumb::Afisare_nume()
{
    cout<<nume;
}



float Porumb::Pret_redus()
{
    return pret_pe_tona-0.4*pret_pe_tona;
}

float Porumb::Profit_pe_tona_dupa_reducere()
{
    return (nr_tone_pe_hectar+0.3*nr_tone_pe_hectar)*Porumb::Pret_redus();
}

float Porumb::Get_Venit_dupa_reducere()
{
    return procent*1000*Porumb::Nr_tone_dupa_asociatie()*Porumb::Pret_redus();
}



Porumb::~Porumb()
{
    delete []nume;
}
