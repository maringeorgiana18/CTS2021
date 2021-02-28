#include<iostream>
#include<string>
#include <fstream>
#include "Header.h"
using namespace std;

void add();
void quit();
void search();
void deleteFile();
void editFile();

int main()
{
	Bilet b;
	Client c;
	system("cls");
	int choice;
	cout << "1. Inserati in baza de date" << endl;
	cout << "2. Cautati in baza de date" << endl;
	cout << "3. Afiseaza toate calatoriile din anul curent" << endl;
	cout << "4. Afiseaza clientii acestui an" << endl;
	cout << "5. Update" << endl;
	cout << "6. Delete" << endl;
	cout << "7. Exit" << endl;
	cin >> choice;


	switch (choice) {
	case 1:
		add();
		break;
	case 2:
		search();
		break;
	case 3:
		b.afiseazaCalatorii();
		break;
	case 4:
		c.afiseazaClientii();
	case 5:
		editFile();
		break;
	case 6:
		deleteFile();
		break;
	case 7:
		quit();
		break;

		cin.get();


	}
}


void quit()
{
	system("CLS");
	cout << "Ati parasit baza de date a agentiei noastre!" << endl;
	system("pause");
	cin.get();
}

void add() {
	int choice1;
	system("CLS");
	cout << "1. Adauga o noua calatorie" << endl;
	cout << "2. Adauga un nou avion" << endl;
	cout << "3. Adauga un nou client" << endl;
	cout << "4. Inapoi" << endl;
	cin >> choice1;
	Bilet b1;
	Avion a1;
	Client c1;
	switch (choice1) {
	case 1:
		b1.adaugaCalatorie();
		break;
	case 2:
		a1.adaugaAvion();
		break;
	case 3:
		c1.adaugaClient();
		break;
	case 4:
		main();
		break;
	}
}


void search()
{
	Bilet b1;
	Avion a1;
	Client c1;
	int choice2;
	system("CLS");

	cout << "1. Cauta biletul dupa id" << endl;
	cout << "2. Cauta avionul dupa id" << endl;
	cout << "3. Cauta clientul dupa id" << endl;
	cout << "4. Inapoi" << endl;
	cout << "5. Exit" << endl;
	cin >> choice2;

	switch (choice2) {
	case 1:
		b1.searchBiletById();
		break;
	case 2:
		a1.searchPlaneById();
		break;
	case 3:
		c1.searchClientById();
		break;
	case 4:
		main();
		break;
	case 5:
		quit();
		break;
	}
}

void editFile() {
	Bilet b1;
	Avion a1;
	Client c1;
	int choice4;
	cout << "1. Editeaza calatoria" << endl;
	cout << "2. Editeaza id-ul avionului" << endl;
	cout << "3. Editeaza datele clientului" << endl;
	cout << "4. Inapoi" << endl;
	cin >> choice4;

	switch (choice4) {
	case 1:
		b1.editBilet();
		break;
	case 2:
		a1.editAvion();
		break;
	case 3:
		c1.editClient();
		break;
	case 4:
		main();
		break;

	}

}

void deleteFile() {
	Bilet b1;
	Avion a1;
	Client c1;
	cout << "1. Sterge calatorii" << endl;
	cout << "2. Sterge avioane" << endl;
	cout << "3. Sterge clienti" << endl;
	cout << "4. Inapoi" << endl;
	int choice5;
	cin >> choice5;
	switch (choice5) {
	case 1:
		b1.deleteCalatorii();
		break;
	case 2:
		a1.deleteAvioane();
		break;
	case 3:
		c1.deleteClienti();
		break;
	case 4:
		main();
		break;
	}
}




















