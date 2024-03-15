#include "Grau.h"

Grau::Grau()
{
    nume=NULL;
    nr_tone_pe_hectar=0;
    pret_pe_tona=0;
    an=0;
    procent=0;

}

Grau::Grau(char* nume, int nr_tone_pe_hectar, int pret_pe_tona, int an, float procent)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);
    this->nr_tone_pe_hectar=nr_tone_pe_hectar;
    this->pret_pe_tona=pret_pe_tona;
    this->an=an;
    this->procent=procent;
}

void Grau::afisare()
{
    cout<<"---Grau---"<<endl<<endl;
    cout<<"Nume: "<<nume<<endl;
    cout<<"Nr_tone_pe_hectar:"<<nr_tone_pe_hectar<<endl;
    cout<<"Pret_pe_tona:"<<pret_pe_tona<<endl;
    cout<<"An:"<<an<<endl;
    cout<<"Procent:"<<procent<<endl;
}



float Grau::Profit_pe_tona()
{
    return nr_tone_pe_hectar*pret_pe_tona;
}

float Grau::Get_Venit()
{
    return procent*1000*Grau::Profit_pe_tona();
}



float Grau::Randament()
{
    return Grau::Get_Venit()/(procent*1000);
}



float Grau::Nr_tone_dupa_asociatie()
{
    return nr_tone_pe_hectar+0.3*nr_tone_pe_hectar;
}

float Grau::Profit_pe_tona_dupa_asociatie()
{
    return Grau::Nr_tone_dupa_asociatie()*pret_pe_tona;
}

float Grau::Get_Venit_dupa_asociatie()
{
    return procent*1000*Grau::Nr_tone_dupa_asociatie()*pret_pe_tona;
}



void Grau::Afisare_nume()
{
    cout<<nume;
}



float Grau::Pret_redus()
{
    return pret_pe_tona-0.4*pret_pe_tona;
}

float Grau::Profit_pe_tona_dupa_reducere()
{
    return (nr_tone_pe_hectar+0.3*nr_tone_pe_hectar)*Grau::Pret_redus();
}

float Grau::Get_Venit_dupa_reducere()
{
    return procent*1000*Grau::Nr_tone_dupa_asociatie()*Grau::Pret_redus();
}



Grau::~Grau()
{
    delete []nume;
}
