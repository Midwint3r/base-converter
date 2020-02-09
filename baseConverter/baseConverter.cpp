
#include <iostream>
//#include <string.h>
#include <string>
#include <math.h> 
using namespace std;

//char base[36] = { '0','1','2','3','4','5','5','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ:&^%$#@=+-*/(){}[]~"; //55 max



void strUpper(string& value) {
	int compt = 0;
	while (value[compt] != '\0') {
		if (value[compt] <= 122 && value[compt] >= 97) {
			value[compt] -= 32;
		}
		compt++;
	}
}

string* init() {
	string values[3]; // binput, nbre, boutput

	cout << "saisir base nombre saisi (max 55)\n";
	//float base_a_convertir;
	cin >> values[0];
	cout << "Saisir nombre a comvertir\n";
	//string nombre_a_convertir;
	cin >> values[1];
	strUpper(values[1]);
	cout << "base de sortie: 10\n";
	/*string */values[2] = "10";
	//cin >> values[2];
	return values;
}







int stringlen(string nbre) {
	int taille = 0;
	while (nbre[taille] != '\0') {
		taille += 1;
	}
	return taille;
}




int indexofbase(char val) {
	return base.find(val);
}


int conversion(float b_input, float b_output, string nb) {
	int len = stringlen(nb);
	float total=0;
	float nasc;
	float valueadd;
	for (int compteur = 0; compteur < len; compteur++) {
		nasc = indexofbase((nb[(len - 1) - compteur]));
		valueadd= nasc * (pow(b_input, compteur));
		cout << nasc << " x " << b_input <<"^"<< compteur << " = " << valueadd << endl;
		total += valueadd;
	}
	return total;
}




int main()
{
    cout << "saisir base nombre saisi (max 55)\n";
	float base_input ;
	cin >> base_input;
	cout << "Saisir nombre a comvertir\n";
	string nombre_a_convertir;
	cin >> nombre_a_convertir;
	strUpper(nombre_a_convertir);
	cout << nombre_a_convertir << endl;
	cout << "base de sortie: 10\n";
	float base_output=10;
	//cin >> base_output; //

	//string valuess[3];
	/*string *values=init();
	float base_input = stof(values[0]);
	float base_output = stof(values[2]);*/
	float vtest0 = conversion(base_input, base_output, nombre_a_convertir);
	cout << "resultat: " << vtest0 << endl;
	//cout << "test: "<< endl;


}


