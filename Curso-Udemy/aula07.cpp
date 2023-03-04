#include <bits/stdc++.h>
#include <new>
using namespace std;
int main() {
    int tamanho;
   cout<< "Qual tamanho do vetor?" << endl;
   cin>> tamanho;
    int *vetor = new  int[tamanho];
    for(int i = 0; i< tamanho; i ++) {
        vetor[i] = i;
        cout<< vetor[i] << endl;
    }
    free(vetor);
    return 0 ;
}