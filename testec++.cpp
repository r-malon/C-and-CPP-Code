#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;
int gl = 89; //global

// &:endere�o da vari�vel; *: conte�do do endere�o

int main(){ //s� em C pode ser void main()!!!
	setlocale(LC_ALL, "");
	char oi[] = "0lap3s5oas";
	float ola = 17;
	int num, x;
	int nab = 2;
	char bla[20];
	int gl = 15; //local
	int ar[] = {5, 6, 7, 8, 2, 9, 4, 3, 65, 23, 2145};
	int arlen = sizeof(ar)/sizeof(int);/* int tem 4 bits,
	4*11 itens = 44 bytes */
	::gl++; //global
	gl--;  //local
	cout << "global: " << ::gl << "  local: " << gl << endl;
	cout << endl << oi << endl << endl;
	cout << sizeof(ar) << " tamanho da lista em bytes e tamanho de int eh " << sizeof(int) << endl;
	cout << "Digite uma frase: ";
	cin.getline(bla, 20);
	cout << "Tamanho de " << bla << " � " << strlen(bla) << endl;
	cout << "Agora � diferente!\n\n";
	for(int x = 0; x < arlen; x++){
		cout << "O " << x+1 << "* elemento da lista eh " << ar[x] << endl;
	}
	/*LOOP:do{
		if (num == 3){
			cout << num;
			num = num + 2;
			goto LOOP;
		}
	}
	while(num < 30);*/
	//system("pause"); --> (geralmente) in�til!!!
	return 0;
}
