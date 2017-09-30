#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
string textoi,textof,clavei,clave,buf;
vector <int> lnum;
vector <string> cadena;
cout << "pon el texto cifrado: "; getline(cin,textoi);
cout <<  "pon la clave: "; getline(cin,clavei);
clave = clavei;

stringstream ss(textoi);

while (ss >> buf)//separa la cadena
	cadena.push_back(buf);

int n;
for(auto i : cadena){
	n = stoi(i);
	lnum.push_back(n);
}

while (clave.length() < lnum.size())
	clave += clavei;

int dif = clave.length()-lnum.size();
if (dif > 0)
	clave.erase(clave.end()-dif,clave.end());

//while (clave.length() > lnum.size())
//	clave.pop_back();

int a = 0;
char letra=' ';
for (int num : lnum){
	letra = num - clave[a];
	textof.push_back(letra);
	a++;
}
cout << endl;
for (auto l : textof)
	cout << l;
cout << endl;
}
