#include "Floarea_soarelui.h"

Floarea_soarelui::Floarea_soarelui()
{
    nume=NULL;
    nr_tone_pe_hectar=0;
    pret_pe_tona=0;
    an=0;
    procent=0;

}

Floarea_soarelui::Floarea_soarelui(char* nume, float nr_tone_pe_hectar, int pret_pe_tona, int an, float procent)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);
    this->nr_tone_pe_hectar=nr_tone_pe_hectar;
    this->pret_pe_tona=pret_pe_tona;
    this->an=an;
    this->procent=procent;
}

void Floarea_soarelui::afisare()
{
    cout<<endl<<"Nume:"<<nume<<endl<<endl;
    cout<<"Nr_tone_pe_hectar:"<<nr_tone_pe_hectar<<endl;
    cout<<"Pret_pe_tona:"<<pret_pe_tona<<endl;
    cout<<"An:"<<an<<endl;
    cout<<"Procent:"<<procent<<endl;
}



float Floarea_soarelui::Profit_pe_tona()
{
    return nr_tone_pe_hectar*pret_pe_tona;
}

float Floarea_soarelui::Get_Venit()
{
    return procent*1000*Floarea_soarelui::Profit_pe_tona();
}



float Floarea_soarelui::Randament()
{
    return Floarea_soarelui::Get_Venit()/(procent*1000);
}



float Floarea_soarelui::Nr_tone_dupa_asociatie()
{
    return nr_tone_pe_hectar+0.3*nr_tone_pe_hectar;
}

float Floarea_soarelui::Profit_pe_tona_dupa_asociatie()
{
    return Floarea_soarelui::Nr_tone_dupa_asociatie()*pret_pe_tona;
}

float Floarea_soarelui::Get_Venit_dupa_asociatie()
{
    return procent*1000*Floarea_soarelui::Nr_tone_dupa_asociatie()*pret_pe_tona;
}



void Floarea_soarelui::Afisare_nume()
{
    cout<<nume;
}



float Floarea_soarelui::Pret_redus()
{
    return pret_pe_tona-0.4*pret_pe_tona;
}

float Floarea_soarelui::Profit_pe_tona_dupa_reducere()
{
    return (nr_tone_pe_hectar+0.3*nr_tone_pe_hectar)*Floarea_soarelui::Pret_redus();
}

float Floarea_soarelui::Get_Venit_dupa_reducere()
{
    return procent*1000*Floarea_soarelui::Nr_tone_dupa_asociatie()*Floarea_soarelui::Pret_redus();
}



Floarea_soarelui::~Floarea_soarelui()
{
    delete []nume;
}
