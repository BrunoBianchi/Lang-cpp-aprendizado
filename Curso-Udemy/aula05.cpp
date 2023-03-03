#include <bits/stdc++.h>

using namespace std;
// Definindo uma funcao void com parametros para pegar o endereco da variavel
void adicionar10(int *ponteiro) {
    // Mudando o valor da variavel pelo seu endereco
*ponteiro = *ponteiro + 10;
}

int main() {

int a = 5;

cout<< a <<endl ;

adicionar10(&a);

cout<< a;
return 0;
}