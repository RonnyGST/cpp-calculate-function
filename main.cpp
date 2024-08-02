#include <iostream>//Biblioteca para entrada e saída de dados
#include <math.h>//Biblioteca para operações matematicas

using namespace std;

char func;//Define qual funcao sera utilizada.
char continueProgram;//Define se o programa deve continuar ou nao.
double num1, num2, num3;
int num11;

/*.....................................*/
double funcA(double x){
  double result = (pow(x, 2)) - (3*x) + 5;

  cout << "Valor de x: \n" << result << endl;
  return result;
}


double funcB(double a, double b, double c){
  double result = (a + b + c) / 3;

  if(result < 5){
    cout << "Aluno abaixo da media\n";
  } else if (result == 5){
    cout << "Aluno na media\n";
  } else {
    cout << "Aluno acima da media\n";
  }

  cout << "Media do aluno: \n" << result << endl;
  return result;
}


int funcC(int x){
  int base = 1;
  for(int i = 1; i <= x; i++){
    base *= i;
  }

  cout << "O resultado de " << num11 << " fatorial e: \n" << base << endl;
  return 0;
}


void funcD(double x, int y){
  double z = x;//Necessario para nao se multiplicar o valor atual de x por ele mesmo, mas sim o valor inicial informado
  
  for(int i = 2; i <= y; i++){
    x *= z;
  }

  if (y <= 0){
    x = 1;
  }
  
  cout << "O resultado de " << num1 << " elevado a " << num11 << " e: \n" << x << endl;
}


void funcE(double x, int y){
  cout << "Estamos realizando um programa de moradia acessivel para pessoas de baixa renda! Por favor, informe sua idade: \n";
  cin >> y;
  cout << "Informe sua renda mensal: \n";
  cin >> x;

  if(y >= 21 && x < 1200){
    cout << "Voce pode participar do programa de moradia!\n";
  } else {
    cout << "Infelizmente voce nao se enquadra nos requisitos necessarios para participar do programa\n";
  }
}



/*...................................................*/
int main() {

  cout << "Escolha qual funcao deseja realizar: a | b | c | d | e\na: f(x) = x^2 - 3x + 5\nb: f(m) = (a + b + c) / 3 || Formato: a(0.0), b(0.0), c(0.0)\nc: x!\nd: x^y\ne: Programa de moradia\n";
  cin >> func;

  if(func == 'a'){
    cout << "Funcao de x\n";
    cout << "Digite o valor de x: \n";
    cin >> num1;
    funcA(num1);
  } else if (func == 'b'){
    cout << "Media do aluno\n";
    cout << "Digite as tres notas do aluno: \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    funcB(num1, num2, num3);
  } else if (func == 'c'){
    cout << "x fatorial\n";
    cout << "Digite um numero inteiro positivo\n";
    cin >> num11;
    if (num11 <= 0){
      cout << "O numero informado e negativo ou invalido.\n";
    } else {
      funcC(num11);
    }
  } else if (func == 'd'){
    cout << "Potencia de um numero\n";
    cout << "Digite um numero real\n";
    cin >> num1;
    cout << "Digite um numero inteiro\n";
    cin >> num11;
    funcD(num1, num11);
  } else if (func == 'e'){
    cout << "Programa de moradia\n";
    funcE(num1, num11);
  } else {
    cout << "Funcao invalida\n";
  }


  cout << "Voce gostaria de continuar no programa? [y(yes)/n(no)]" << endl;
  cin >> continueProgram;

  (continueProgram == 'y' || continueProgram == 'Y' || continueProgram == ' ') ? cout << "Obrigado por usar a calculadora de funcoes!" << endl << main() : cout << "Good bye! :D";
}