#include <iostream>
#include <string>
#include <vector>
using namespace std;
void generarLenguaje(int n, int X, vector<char>& alfabeto, string palabra) {
if (palabra.length() == X) {
cout << palabra << endl;
return;
}
for (int i = 0; i < n; i++) {
generarLenguaje(n, X, alfabeto, palabra + alfabeto[i]);
}
}
int main() {
int n, X;
cout << "ingrese la cantidad de elementos del alfabeto (n): ";
cin >> n;
cout << "ingrese la longitud maxima del lenguaje (X): ";
cin >> X;
vector<char> alfabeto;
cout << "ingrese los elementos del alfabeto:\n";
for (int i = 0; i < n; i++) {
char elemento;
cout << "elemento " << (i + 1) << ": ";
cin >> elemento;
alfabeto.push_back(elemento);
}

cout << "Lenguaje generado:" << endl;
generarLenguaje(n, X, alfabeto, "");
return 0;
}
