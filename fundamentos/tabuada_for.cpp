#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){

    cout << "Bem vindo a nossa tabuada!" << endl;
    cout << "Insira o número do qual se quer a tabuada!" << endl;
    int num, resultado;
    cin >> num;

    for (int i = 0; i<=10; i++){
        resultado = num * i;
        cout << "" << num << " x " << i << " = " << resultado << endl;
    }

    return 0;
}
