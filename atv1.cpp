#include <iostream>
using namespace std;

int soma = 10;
int subtracao = 0;
int divisao = 0;
int multiplicacao = 0;


int somar(int *ptr1, int *ptr2);
int subtrair(int *ptr1, int *ptr2);
int dividir(int *ptr1, int *ptr2);
int multiplicar(int *ptr1, int *ptr2);
int main() {
	

int num1 = 100, num2 = 2;

cout << soma << endl;
cout << somar(&num1, &num2) << endl;
cout << subtrair(&num1, &num2) << endl;
cout << dividir(&num1, &num2) << endl;
cout << multiplicar(&num1, &num2) << endl;




return 0;

}

int somar(int *ptr1, int *ptr2){
	return soma = *ptr1 + *ptr2;
}
int subtrair(int *ptr1, int *ptr2){
	return subtracao = *ptr1 - *ptr2;
}
int dividir(int *ptr1, int *ptr2){
	return divisao = *ptr1 / *ptr2;
}
int multiplicar(int *ptr1, int *ptr2){
	return multiplicacao = *ptr1 * *ptr2;
}







