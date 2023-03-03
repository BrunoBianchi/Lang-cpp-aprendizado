
#include <bits/stdc++.h>

using namespace std;

int main() {

string nome1,nome2;
double salario1,salario2;
char sexo1,sexo2;
cout << "Nome da primeira pessoa \n";
getline(cin,nome1); // Pegar informacao da pessoa, porem essa informacao podera ter espacos!

cout << "Sexo \n ";
cin >> sexo1;

cout<< "Salario seu \n";
cin.ignore(INT_MAX,'\n'); //Ignorar a quebra de linha do texto anterior

cin>> salario1;

cout << "Nome da segunda pessoa \n";
cin.ignore(INT_MAX,'\n'); //Ignorar a quebra de linha do texto anterior

getline(cin,nome2); // Pegar informacao da pessoa, porem essa informacao podera ter espacos!

cout << "Sexo \n ";
cin >> sexo2;

cout<< "Salario seu \n";
cin.ignore(INT_MAX,'\n'); //Ignorar a quebra de linha do texto anterior

cin>> salario2;
cout << fixed << setprecision(2);
cout<< nome1 << " Esta Ganhando um salario de: " << salario1 << ". \nEnquanto " << nome2 << " Esta ganhando um salario de " << salario2 << endl;
cout<< sexo1 << " e " << sexo2<< endl;

system("pause");
}