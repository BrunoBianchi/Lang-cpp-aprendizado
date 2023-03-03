#include <bits/stdc++.h>

using namespace std;
int main() {
    int n = 0;
    
    cout << "Quantos numeros deseja nesse vetor?: \n";
    cin >> n;
    int vet[n];
    for(int i =0; i< n;i++) {
        cout<<"Adicione valor para a posicao [" << i << "] \n";
        cin>>vet[i];
    }
    cout<< "Vetor Criado: \n";
    for(int i = 0;i<n;i++) {
        cout<< vet[i] << " ";
    }
    puts("\n");
    system("pause");
}