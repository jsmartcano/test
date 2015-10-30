#include <iostream>

using namespace std;

//double &f(); esto no vale

//double valor=10.0; // nada

int main() {
	int i=12;
	int *px;

	px=&i;

	cout << *px;

}

//double &f() { return valor; }
