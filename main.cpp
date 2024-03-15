#include "Ferma.h"
#include "Grau.h"
#include "Porumb.h"
#include "Floarea_soarelui.h"
#include "Orz.h"

int main()
{
    Ferma **v_anul_1;
    Ferma **v_anul_2;

    v_anul_1 = new Ferma*[4];
    v_anul_2 = new Ferma*[4];

    Ferma *aux;

    v_anul_1[0] = new Grau("Grau", 3, 2000, 1, 0.4);
    v_anul_1[1] = new Porumb("Porumb", 5, 1300, 2, 0.4);
    v_anul_1[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 2, 0.2 );


    /*cout << "afisare Ferma: " << endl << endl;
    for(int i = 0 ; i < 3 ; i ++)
        v_anul_1[i]->afisare();*/

    cout<<endl<<"Cerinta 1. Ce venit are fermierul daca cultiva 40% suprafata cu porumb, 40% cu grau si 20% cu floarea soarelui?"<<endl<<endl;
    cout<<"Venitul este de: ";

    float venit=0;
    for(int i = 0; i < 3; i++)
        venit=venit+v_anul_1[i]->Get_Venit();
    cout<<venit<<endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<endl<<"Cerinta 2. Calculati venitul optim pentru fermier pe parcursul a 2 ani."<<endl<<endl;

    for(int i=0; i<2; i++)
        for(int j=i+1; j<3; j++)
            if(v_anul_1[i]->Profit_pe_tona() < v_anul_1[j]->Profit_pe_tona())
            {
                aux = v_anul_1[i];
                v_anul_1[i] = v_anul_1[j];
                v_anul_1[j] = aux;
            }


    cout << "Culturile vor fi puse in urmatoarea ordine: ";
    for(int i = 0 ; i < 3 ; i ++)
    {
        v_anul_1[i]->Afisare_nume();
        cout<<"  ";
    }

    v_anul_1[0] = new Grau("Grau",3, 2000, 1, 0.1);
    v_anul_1[1] = new Porumb("Porumb", 5, 1300, 1, 0.3);
    v_anul_1[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 1, 0.6);

    v_anul_2[0] = new Grau("Grau", 3, 2000, 2, 0.3);
    v_anul_2[1] = new Porumb("Porumb", 5, 1300, 2, 0.3);
    v_anul_2[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 2, 0.4);

    /*Pentru a avea un venit optim pe parcursul a doi ani suprafata de pamant se va imparti astfel:
    Anul 1:    60% Floarea soarelui
               30% Porumb
               10% Grau

    Anul 2:    40% Floarea soarelui
               30% Porumb
               30% Grau
     */
    cout<<endl<<"Venitul optim pe parcursul a doi ani este: ";
    venit=0;
    for(int i = 0; i < 3; i++)
        venit=venit+v_anul_1[i]->Get_Venit()+v_anul_2[i]->Get_Venit();
    cout<<venit<<endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<endl<<"Cerinta 3. Fermierul doreste sa introduca o noua cultura, de orz, productia este de 4 tone pe Ha si pretul este de 1700 lei pe tona si doreste sa o planteze pe 20% din suprafata in fiecarean, care este venitul optim realizat pe 2 ani?"<<endl;

    v_anul_1[0] = new Grau("Grau",3, 2000, 1, 0.1);
    v_anul_1[1] = new Porumb("Porumb", 5, 1300, 1, 0.1);
    v_anul_1[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 1, 0.6);
    v_anul_1[3] = new Orz("Orz", 4, 1700, 1, 0.2);

    v_anul_2[0] = new Grau("Grau",3, 2000, 2, 0.1);
    v_anul_2[1] = new Porumb("Porumb", 5, 1300, 2, 0.1);
    v_anul_2[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 2, 0.4);
    v_anul_2[3] = new Orz("Orz", 4, 1700, 1, 0.4);

    /*Pentru a avea un venit optim pe parcursul a doi ani suprafata de pamant se va imparti astfel:
    Anul 1:   60% Floarea soarelui
              20% Orz
              10% Porumb
              10% Grau

    Anul 2:   40% Floarea soarelui
              40% Orz
              10% Porumb
              10% Grau
    */
    for(int i=0; i<3; i++)
        for(int j=i+1; j<4; j++)
            if(v_anul_1[i]->Profit_pe_tona_dupa_asociatie() < v_anul_1[j]->Profit_pe_tona_dupa_asociatie())
            {
                aux = v_anul_1[i];
                v_anul_1[i] = v_anul_1[j];
                v_anul_1[j] = aux;
            }


    cout<<endl<< "Culturile vor fi puse in urmatoarea ordine: ";
    for(int i = 0 ; i < 4 ; i ++)
    {
        v_anul_1[i]->Afisare_nume();
        cout<<"  ";
    }

    cout<<endl<<"Venitul optim pe parcursul a doi ani (se adauga si Orz) este: ";
    venit=0;
    for(int i = 0; i < 4; i++)
        venit=venit+v_anul_1[i]->Get_Venit()+v_anul_2[i]->Get_Venit();
    cout<<venit<<endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<endl<<"Cerinta 4. Afisati randamentul pe an al fiecarei culturi(pret/Ha obtinut de la fiecare cultura), inclusiv orz"<<endl<<endl;
    cout<<"Randamente, Anul 1:"<<endl<<endl;
    for(int i = 0; i < 4; i++)
    {
        v_anul_1[i]->Afisare_nume();
        cout<<" - "<<v_anul_1[i]->Randament()<<" lei/Ha"<<endl;
    }

    cout<<endl<<"Randamente, Anul 2:"<<endl<<endl;
    for(int i = 0; i < 4; i++)
    {
        v_anul_2[i]->Afisare_nume();
        cout<<" - "<<v_anul_2[i]->Randament()<<" lei/Ha"<<endl;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<endl<<"Cerinta 5. Fermierul intra intr-o asociatie de fiermieri unde invata cum sa produca cu 30% mai mult pe Ha din fiecare cultura, cum este optim sa isi puna culturile pe urmatorii 2 ani? si ce venit va avea fermierul produce si orz"<<endl<<endl;

    /*Pentru a avea un venit optim pe parcursul a doi ani suprafata de pamant se va imparti astfel,
    luand in calcul faptul ca putem pune mai mult sau mai putin orz, nu doar 20%:
    Anul 1:  60% Floarea soarelui
             20% Orz
             10% Porumb
             10% Grau

    Anul 2:  40% Floarea soarelui (puse pe 20% Orz, 10% Porumb, 10% Grau )
             40% Orz
             10% Porumb
             10% Grau

    Ordinea pe care am respectat-o este: Floarea soarelui, Orz, Porumb, Grau, dupa care am pus procentajele.
    Venitul creste.
    */

    for(int i=0; i<3; i++)
        for(int j=i+1; j<4; j++)
            if(v_anul_1[i]->Profit_pe_tona_dupa_asociatie() < v_anul_1[j]->Profit_pe_tona_dupa_asociatie())
            {
                aux = v_anul_1[i];
                v_anul_1[i] = v_anul_1[j];
                v_anul_1[j] = aux;
            }


    cout << "Culturile vor fi puse in urmatoarea ordine: ";
    for(int i = 0 ; i < 4 ; i ++)
    {
        v_anul_1[i]->Afisare_nume();
        cout<<"  ";
    }


    v_anul_1[0] = new Grau("Grau",3, 2000, 1, 0.1);
    v_anul_1[1] = new Porumb("Porumb", 5, 1300, 1, 0.1);
    v_anul_1[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 1, 0.6);
    v_anul_1[3] = new Orz("Orz", 4, 1700, 1, 0.2);

    v_anul_2[0] = new Grau("Grau",3, 2000, 2, 0.1);
    v_anul_2[1] = new Porumb("Porumb", 5, 1300, 2, 0.1);
    v_anul_2[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 2, 0.4);
    v_anul_2[3] = new Orz("Orz", 4, 1700, 1, 0.4);

    cout<<endl<<"Venitul optim pe parcursul a doi ani este: ";
    venit=0;
    for(int i = 0; i < 4; i++)
        venit=venit+v_anul_1[i]->Get_Venit_dupa_asociatie()+v_anul_2[i]->Get_Venit_dupa_asociatie();
    cout<<venit<<endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<endl<<"Cerinta 6. desi fermierul reuseste sa produca cu 30% mai mult, preturile au scazut cu 40% cum ii impacteaza venitul pe urmatorii 2 ani?  produce si orz"<<endl;

    /*Venitul scade*/

    for(int i=0; i<3; i++)
        for(int j=i+1; j<4; j++)
            if(v_anul_1[i]->Profit_pe_tona_dupa_reducere() < v_anul_1[j]->Profit_pe_tona_dupa_reducere())
            {
                aux = v_anul_1[i];
                v_anul_1[i] = v_anul_1[j];
                v_anul_1[j] = aux;
            }


    cout<<endl<<"Culturile vor fi puse in urmatoarea ordine: ";
    for(int i = 0 ; i < 4 ; i ++)
    {
        v_anul_1[i]->Afisare_nume();
        cout<<"  ";
    }


    v_anul_1[0] = new Grau("Grau",3, 2000, 1, 0.1);
    v_anul_1[1] = new Porumb("Porumb", 5, 1300, 1, 0.1);
    v_anul_1[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 1, 0.6);
    v_anul_1[3] = new Orz("Orz", 4, 1700, 1, 0.2);

    v_anul_2[0] = new Grau("Grau",3, 2000, 2, 0.1);
    v_anul_2[1] = new Porumb("Porumb", 5, 1300, 2, 0.1);
    v_anul_2[2] = new Floarea_soarelui("Floarea soarelui", 2.5, 3200, 2, 0.4);
    v_anul_2[3] = new Orz("Orz", 4, 1700, 1, 0.4);

    cout<<endl<<"Venitul optim pe parcursul a doi ani este: ";
    venit=0;
    for(int i = 0; i < 4; i++)
        venit=venit+v_anul_1[i]->Get_Venit_dupa_reducere()+v_anul_2[i]->Get_Venit_dupa_reducere();
    cout<<venit<<endl;



    for(int i=0; i < 4; i++)
    {
        delete v_anul_1[i];
        delete v_anul_2[i];
    }

    delete []v_anul_1;
    delete []v_anul_2;





    return 0;
}
