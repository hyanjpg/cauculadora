#include <iostream>
#include <stdlib.h>

using namespace std; 

//  eu apredi a funcionalida de alguns còdigos como por exemplo "cout" que imprimi na tela 
// uma sequência codigos dentro do stream e "endl" que è responsàvel por finalizar uma linha de còdigo

// auxilio git hub

//echo "# cauculadora" >> README.md
//git init
//git add README.md
//git commit -m "first commit"
//git branch -M main
//git remote add origin https://github.com/hyanjpg/cauculadora.git
//git push -u origin main

//git remote add origin https://github.com/hyanjpg/cauculadora.git
//git branch -M main
//git push -u origin main

int main() {
      
    int num1, num2, soma, sub, multi, div;

    cout << "seja bem vindo a nossa primeira calculadora" << endl;
    cout << "digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "digite o segundo numero: " << endl;
    cin >> num2;

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
      
    cout << "A Soma e: " << soma << endl;
    cout <<"A Subtração e: " <<sub << endl;
    cout << "A Multiplicação e: " << multi << endl;
    cout << "A divisao e: " << div << endl;


    system("pause");
    return 0;
}
