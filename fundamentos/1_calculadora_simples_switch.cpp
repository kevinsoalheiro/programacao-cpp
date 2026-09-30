#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    double num1, num2, soma, subtracao, div, multi; 
    int operacao;

    cout << "Bem vindo a nossa calculadora!" << endl;
    cout << "Digite um numero: " << endl;
    cin >> num1;

    cout << "Digite outro número: " << endl;
    cin >> num2;

    soma = num1 + num2;
    subtracao = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;

    cout << "\nEscolha a operação:\n"
         << "1 - Soma\n" 
         << "2 - Subtração\n" 
         << "3 - Divisão\n"
         << "4 - Multiplicação\n" << endl;
    
    
    cin >> operacao;
    cout << "\n";

    switch (operacao)  {

        case 1:
        cout << "Resultado " << soma << endl;
        break;

        case 2:
        cout << "Resultado " << subtracao << endl;
        break;

        case 3:
            if (num2 != 0){
                cout << "Resultado " << div << endl;
                break;
            } else {
                cout << "ERRO: IMPOSSÍVEL DIVIDIR POR 0" << endl;
                break;
            }
        
        case 4:
        cout << "Resultado " << multi << endl;
        break;

        default:
        cout << "Operação Inválida" << endl;
    }


    system("pause");
    return 0;
}
