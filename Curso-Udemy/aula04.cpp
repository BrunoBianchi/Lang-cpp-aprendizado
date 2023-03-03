#include <bits/stdc++.h>
using namespace std;
int main() {

    // Variavel
    int a = 10;

    // Vendo o endereco da variavel a:
    cout<< &a << endl;

    // Ponteiro Armazenando a posicao da variavel a
    int *ponteiro = &a;

    // '*' pode ser lido como conteudo apontado por...;

    // Mundando a variavel a atravez do ponteiro 
    *ponteiro = 20;
    
    cout<< a << endl;
    /*
        As Variaveis Guardam um valor por ex int a = 20;
        a variavel 'a' guarda o valor inteiro 20;

        Os ponteiros Guardam o endereco da variavel a na nossa ram;
        por ex &a e' o endereco da variavel 'a', neste caso, ira mostrar 0x61ff0c;
    */
}