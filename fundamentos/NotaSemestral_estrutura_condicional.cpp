#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

    float nota = 0;

    cout << "Digite sua nota semestral entre 0 e 100:  " << endl;
    cin >> nota;

    if (nota >= 59.5){
        cout << "Você foi APROVADO!" << endl;
    } else if (nota >= 39.45 and nota < 59.5) {
        cout << "Você está em RECUPERAÇÃO!" << endl;
    } else {
        cout << "Você esta REPROVADO!" << endl;
    }

    //system("pause");
    return 0;
}
