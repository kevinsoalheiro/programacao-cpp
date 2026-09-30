/*
DADOS:
nota, soma das notas, media

4 notas informadas pelo usuario

validar cada nota
somar as notas
calcular a media

media
status do aluno

*/

#include <iostream>
#include <windows.h>


using namespace std;

int main(){
  
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  
  int i;
  double nota, media, soma = 0;

  cout << "Seja bem vindo ao sistema! Vamos calcular a sua nota semestral:" << endl;

  for (i = 1; i<=4; i++){
        
      cout << "Insira sua nota " << i << ": " << endl;
      cin >> nota;

      while(nota < 0 or nota > 100){
          cout << "Nota INVÁLIDA! Por favor insira sua nota " << i << ": " << endl;
          cin >> nota;
      }
      soma += nota;
  }
  media = soma/4;

  if(media >= 59.5){

      cout << "PARABÉNS! VocÊ foi APROVADO com nota: " << media << endl;

  } else if (media >= 40 and media < 59.5){
        
      cout << "ATENÇÃO! Você está em recuperação! Sua nota atual é: " << media << endl;

  } else {

      cout << "Você esta REPROVADO! Sua nota " << media << ", foi inferior a 40 pontos!" << endl;
  }

  return 0;
}
