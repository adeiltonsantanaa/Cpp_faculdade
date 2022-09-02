#include <iostream>
using namespace std;

void imprimir(int *ptr1);
int main() {
	int turmaAlunoDisciplina[3][3];
	int i =0;
	int y =0;
	
		for(y; y <= 3; y++){
			turmaAlunoDisciplina[y][0] =  1 + y;
			turmaAlunoDisciplina[y][1] =  3 * (y + 15);
			turmaAlunoDisciplina[y][2] =  30 * (y + 9);
		};
	
	imprimir(&turmaAlunoDisciplina[0][0]);
return 0;

}
void imprimir(int *ptr1) {
	int controle;
	for(controle = 0; controle < 3; controle++) {
		cout << "Turma: " << *(ptr1 + (controle * 3)) << endl;
		cout << "Alunos: " << *(ptr1 + (controle * 3) + 1) << endl;
		cout << "Disciplina: " << *(ptr1 + (controle * 3) + 2) << endl; cout << endl << endl;
	
	}
}


