#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string senha, tentativa;
    int chances;

    senha = "71";

    for (chances = 3; chances > 0; chances--) {

        cout << "Insira sua senha de 2 digitos: " << endl;
        cin >> tentativa;

        while (
            tentativa.length() != 2 ||
            !isdigit(tentativa[0]) ||
            !isdigit(tentativa[1])
        ) {
            cout << "TENTATIVA INVALIDA!" << endl;
            cout << "Insira sua senha de 2 digitos: " << endl;
            cin >> tentativa;
        }

        if (tentativa == senha) {

            cout << "Seja bem vindo ao meu perfil!" << endl;
            return 0;

        } else {

            cout << "Senha incorreta!" << endl;

            if (chances > 1) {
                cout << "Voce tem apenas "
                     << chances - 1
                     << " tentativa(s)!" << endl;
            }
        }
    }

    cout << "ACESSO NEGADO!" << endl;

    return 0;
}
