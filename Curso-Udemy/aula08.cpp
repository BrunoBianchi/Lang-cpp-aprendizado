#include <bits/stdc++.h>
#include <new>
using namespace std;
int main() {
    int colunas = 3, linhas = 3;
    int **matriz;
    matriz = (int **) new int[linhas];
    for(int i = 0; i< colunas; i++) {
        matriz[i] = (int *) new int[colunas];
    }
    for(int i = 0; i<linhas;i++) {
        for(int j = 0 ; j< colunas; j++) {
            matriz[i][j] = i + j;
            cout<< matriz[i][j] << " ";

        }
        cout << "\n";
    }
 }