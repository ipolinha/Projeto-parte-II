#include <iostream>
#include "figurageografica.h"
#include "interpretador.h"
#include "cutvoxel.h"
#include "cutbox.h"
#include "putbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutbox.h"
#include "putellipsoid.h"
#include "putbox.h"
#include "putvoxel.h"
#include "putsphere.h"
#include <vector>
#include <string>
#include <sculptor.h>


using namespace std;

int main()
{
    /*sculptor *s1; //cria um ponteiro
    vector<figurageografica*>  figs;
    interpretador dados;
    //figs=dados.expr(diretorio)
  //  s1=new sculptor(dados.Dimx(),dados.Dimy(),dados.Dimz();

    for(size_t i=0;i<figs.size();i++){
    cout<<"Draw"<<endl;
    //fig[i]->draw(*s1);
    }
   // s1-> writeOFF((char*)"test.off");
    for(size_t i=0; i<figs.size();i++){
    delete figs[i];
    }

    delete s1;

   cout<< "acabou!";*/
    vector<figurageografica*> v;
    sculptor desenho(100,100,100);

    v.push_back(new putbox(0,30,0,30,0,15,0.19,0,0,1.000));
    v.push_back(new cutvoxel(15,20,25,0,0,0,1.000));
    v.push_back(new putsphere(39,39,39,20,1,1,1,0.6));
    v.push_back(new putellipsoid(30,40,15,45,15,40,0.888, 0.89, 0.23, 1.000));
    for(int i=0;i<v.size();i++){
        v[i]->draw(desenho);
    }
    desenho.writeOFF("Exemplo_01.OFF");


    return 0;
}
