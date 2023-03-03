#include <bits/stdc++.h>

using namespace std;

int main() {
    char matriz[3][3] ={' '};
    int n = 0;
    int aux1,aux2 = 0;
    aux1 = 0;
    cout << "    " << " || " << "    "<< " || " << "    " << "\n"  << "    " << " || " << "    " << " || " << "    " << "\n" << "    " << " || " << "    "<< " || " << "    " << "\n" ;
    for(int  i = 0; i<3 ; i++) {
        for(int j = 0; j<3 ; j++) {
            if((n%2) == 0) cout<< "Jogador 1: \n";
            else cout<< "Jogador 2: \n";
            n++;
            aux1++;
            aux2= aux2 + 2;
            cin >> matriz[i][j];
            cout << matriz[0][0] << " || " << matriz[0][1]<< " || " << matriz[0][2] << "\n"  << matriz[1][0] << " || " << matriz[1][1] << " || " << matriz[1][2] << "\n" << matriz[2][0]<< " || " << matriz[2][1]<< " || " << matriz[2][2]<< "\n" ;
           cout<< matriz[aux1][aux1];
            if(matriz[i][j] == matriz[aux1][aux1] == matriz[aux2][aux2]) cout<<"Temos um vencedor!";
        }
    }
    return 0;
}