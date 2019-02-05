#include <iostream>
using namespace std;


int main()
{
    int T;
    
    //cout << "ingrese cantidad casos";
    cin >> T;
    for(int i=0;i<T;i++)
    {
          int n,m,V;
          //cout << "ingrese canditos y zonas";
          cin >> n >> m;
          int Cvotos [n];
          int  votosmax = 0;
          int ganador;
          for (int region=0;region<m;region++)
          {
              for(int candidato=0;candidato<n;candidato++)
              {
                  V=0;
                  //cout << "ingrese cantidad de votos";
                  cin >> V;
                  Cvotos[candidato] =+ Cvotos[candidato]+ V;
                }

        
            }
          
          for (int cand=0 ; cand<n;cand++)
          {
              int votosactuales = Cvotos[cand];
                if (votosmax < votosactuales) 
                {//toma el mayor numero de votos 
                    votosmax = votosactuales;
                    ganador = cand;

                }
                

        
        
            }
            cout << ganador+1<<endl;
            
            
       
        } 
    
    return 0;
}