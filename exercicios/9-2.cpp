#include <iostream>
#include <string>
using namespace std;

// Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.

int main()
{
  string nome_usuario, senha;
  bool x = true;

  while (x)
  {
    cout << "Digite o nome de usuario e depois a senha: ";
    cin >> nome_usuario;
    cin >> senha;

    if (nome_usuario == senha)
    {
      cout << "Usuario e senha iguais";
    }
    else
    {
      cout << "OK";
      x = false;
    }
  }

  cout << "\n\n\n";
}