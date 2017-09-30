#include <iostream>
#include <vector>

using namespace std;

int main(){
string textoi,clavei,clave;
vector <int> resultado;
cout << "pon el texto a cifrar: "; getline(cin,textoi);
cout << "pon la clave: "; getline(cin,clavei);
clave = clavei;

while (clave.length() < textoi.length())
	clave += clavei;

int dif = clave.length()-textoi.size();
if (dif > 0)
	clave.erase(clave.end()-dif,clave.end());

//while (clave.length() > textoi.length())
//	clave.pop_back();

int a = 0;
for (unsigned char letra : textoi){
	letra += clave[a];
	resultado.push_back(letra);
	a++;
}

cout << endl;
for (int n : resultado)
	cout << n << " ";
cout << endl;
}
