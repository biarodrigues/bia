#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string joga1, joga2;
	int vida1 = 25, vida2 = 25;
	int Ataque1 = 4, Defesa1 = 5, Ataque2 = 4, Defesa2 = 5;


	cout << "Digite o nome do jogador 1:" << endl;
	cin >> joga1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> joga2;

	while (sair == false) {
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << joga1 << "             " << joga2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "Ataque:" << Ataque1 << "           " << "Ataque:" << Ataque2 << endl;
		cout << "Defesa:" << Defesa1 << "           " << "Defesa:" << Defesa2 << endl;

		system("pause");

		int dado6;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		//lancando o dado
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{
			vida1 = vida1 - dado6;
			cout << joga1 << " Dano:" << -dado6 << endl;
			cout << joga2 << " Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}

		else if (dado6 <= 4)
		{

			cout << joga2 << " voce errou!" << endl;
			cout << " proxima jogada (Digite enter): " << endl;
			cin.get();

		}


		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{

			vida2 = vida2 - dado6;
			cout << joga2 << " Dano:" << -dado6 << endl;
			cout << joga1 << " voce acertou!" << endl;
			cout << " Proxima jogada (Digite enter): " << endl;
			cin.get();
		}
		else if (dado6 <= 4) {

			cout << joga1 << " voce errou!" << endl;
			cout << " Proxima jogada (Digite enter): " << endl;
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		system("cls");


		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}

		else system("cls");
	}
	//encerrando o jogo

	cout << "Fim de jogo." << endl;


	if (vida1 > 0) cout << joga1 << " voce venceu!" << joga2 << "voce nao venceu! " << endl;
	else if (vida2 > 0) cout << joga2 << " voce venceu!" << joga1 << "voce nao venceu! " << endl;
	else cout << "ninguem venceu...!" << endl;

	return 0;

}

