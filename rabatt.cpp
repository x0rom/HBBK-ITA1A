#include <iostream>

using namespace std;

int main()

{
	//********** Eingabe **********
	cout << "Geben Sie einen Betrag ein: ";
	float netto;
	cin >> netto;
	if (netto >= 2000)
	//********** Berechnung **********
	{
		netto = netto*0.9;
	}

	//********** Ausgabe **********
	cout << "Der Preis betr\x84 \bgt " << netto << endl;
	
	getchar();
	getchar();
	return(0);
}