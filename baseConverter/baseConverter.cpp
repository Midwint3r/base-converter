
#include <iostream>
#include <string.h>
#include <math.h> 
using namespace std;

int stringlen(string nbre) {
	int taille = 0;
	while (nbre[taille] != '\0') {
		taille += 1;
	}
	return taille;
}




int conversion(float b_input, float b_output, string nb) {
	int len = stringlen(nb);
	float total=0;
	float nasc;
	float valueadd;
	for (int compteur = 0; compteur < len; compteur++) {
		nasc = (nb[(len - 1) - compteur]) - 48;
		valueadd= nasc * (pow(b_input, compteur));
		total += valueadd;
	}
	return total;
}




int main()
{
    cout << "saisir base nombre saisi\n";
	float base_a_convertir ;
	cin >> base_a_convertir;
	cout << "Saisir nombre a comvertir\n";
	string nombre_a_convertir;
	cin >> nombre_a_convertir;
	cout << "base de sortie: 10\n";
	float base_output=10;
	//cin >> base_output;
	float vtest0 = conversion(base_a_convertir, base_output, nombre_a_convertir);
	cout << "resultat: " << vtest0 << endl;


}


