#include <iostream>
using namespace std;

int main()
{
  float imc, peso, altura;

  cout << "Qual seu peso em kg? ";
  cin >> peso;
  cout << "Qual sua altura em metros? ";
  cin >> altura;

  imc = peso / (altura * altura);
  cout << "Seu IMC é de: " << imc << "\n";

  if (imc < 18.5)
  {
    cout << "Abaixo do peso";
  }
  else
  {
    if (imc >= 18.5 && imc < 25)
    {
      cout << "Peso normal";
    }
    else
    {
      if (imc >= 25 && imc < 30)
      {
        cout << "Acima do peso";
      }
      else
      {
        if (imc >= 30 && imc < 35)
        {
          cout << "Obesidade I";
        }
        else
        {
          if (imc >= 35 && imc < 40)
          {
            cout << "Obesidade II";
          }
          else
          {
            cout << "Obesidade III";
          }
        }
      }
    }
  }
}