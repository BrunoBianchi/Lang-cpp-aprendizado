#include <bits/stdc++.h>
using namespace std;
void imprimirVetor(int *vetor,int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        cout<< vetor[i] << endl;
    }
    system("pause");
}
int main() {
    int n = 0;
    cout<< "Quantos numeros deseja ter no vetor? ";
    cin>> n;
     int vetor[n];
    for(int i = 0 ; i < n; i++) {
        cout<<"Numero para a posicao " << i << " ";
        cin>> vetor[i];
    }
    imprimirVetor(vetor,n);
    
    return 0;
}