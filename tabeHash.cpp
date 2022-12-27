#include <iostream>

using namespace std;

int main (void){

   int teste;
   cin>>teste;
  
    while(teste){
      int posicao;
      int z;
      int n1;
      int n2;
      cin>>posicao;
      cin>>z;
      
      int vet[posicao][z], 
          colisao[posicao];
      
     
        for(int i = 0; i < posicao; i++){
            colisao[i] = 0;
        }
        
        for(int i = 0; i < z; i++){
            int n1, n2;
            cin>>n1;
            
            n2 = n1%posicao;
            vet[n2][colisao[n2]] = n1;
            colisao[n2]++;
        }
          
        for(int i = 0; i < posicao; i++){
          cout<<i;
            
            for(int j = 0; j < colisao[i]; j++){
              cout<<" -> "<<vet[i][j];
            }
            cout<<" -> \\";
            cout<<endl;
        }
       
    }
    return 0;
}
