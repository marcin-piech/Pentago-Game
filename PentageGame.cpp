#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;



string imie(string& imie1, string& imie2) {
	cout << "Imie gracza 1: ";
	cin >> imie1;
	cout << "Imie gracza 2: ";
	cin >> imie2;
	cout << endl;
	return(imie1, imie2);
}

void wyswietl_plansza(string& imie1, string& imie2, char pion_podw_linia, char poz_podw_linia, char lacznik,
	char lg_lacznik, char pg_lacznik, char ld_lacznik, char pd_lacznik,
	char ls_lacznik, char ps_lacznik, char gs_lacznik, char ds_lacznik,
	char znakX, char znak0, char q[3][3], char w[3][3], char a[3][3], char s[3][3]) {

	system("cls");
	cout << imie1 << " < " << znakX << " >  " << imie2 << " < " << znak0 << " >" << endl;
	cout << endl;


	//BOX DRAWINGS gorna krawedz
	cout << lg_lacznik;
	for (int i = 0; i < 11; i += 1) {
		cout << poz_podw_linia;
	}

	cout << gs_lacznik;

	for (int i = 0; i < 11; i += 1) {
		cout << poz_podw_linia;
	}
	cout << pg_lacznik;
	cout << endl;


	//uklad sektorow q i w
	for (int i = 0; i < 3; i += 1) {
		cout << pion_podw_linia;
		for (int j = 0; j < 3; j += 1) {
			cout << setw(3) << q[i][j];
		}
		cout << "  " << pion_podw_linia;
		for (int j = 0; j < 3; j += 1) {
			cout << setw(3) << w[i][j];
		}
		cout << "  " << pion_podw_linia;
		cout << endl;
	}


	//BOX DRAWINGS srodkowa krawedz
	cout << ls_lacznik;
	for (int i = 0; i < 11; i += 1) {
		cout << poz_podw_linia;
	}
	cout << lacznik;
	for (int i = 0; i < 11; i += 1) {
		cout << poz_podw_linia;
	}
	cout << ps_lacznik;
	cout << endl;


	//uklad sektorow a i s
	for (int i = 0; i < 3; i += 1) {
		cout << pion_podw_linia;
		for (int j = 0; j < 3; j += 1) {
			cout << setw(3) << a[i][j];
		}
		cout << "  " << pion_podw_linia;
		for (int j = 0; j < 3; j += 1) {
			cout << setw(3) << s[i][j];
		}
		cout << "  " << pion_podw_linia;
		cout << endl;
	}


	//BOX DRAWINGS dolna krawedz
	cout << ld_lacznik;
	for (int i = 0; i < 11; i += 1) {
		cout << poz_podw_linia;
	}

	cout << ds_lacznik;

	for (int i = 0; i < 11; i += 1) {
		cout << poz_podw_linia;
	}
	cout << pd_lacznik;
	cout << endl << endl;
}

bool gracz_ruch(string& ruch, char z, char q[3][3], char w[3][3], char a[3][3], char s[3][3]) {				//z, od s³owa znak	
	bool wype³nione = true;

	//tablica q																		//tablica q
	//q1
	if (ruch == "q7") {
		if (q[0][0] == 'X' or q[0][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[0][0] = z;
			wype³nione = false;
		}
	}
	//q2
	else if (ruch == "q8") {
		if (q[0][1] == 'X' or q[0][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[0][1] = z;
			wype³nione = false;
		}
	}
	//q3
	else if (ruch == "q9") {
		if (q[0][2] == 'X' or q[0][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[0][2] = z;
			wype³nione = false;
		}
	}
	//q4
	else if (ruch == "q4") {
		if (q[1][0] == 'X' or q[1][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[1][0] = z;
			wype³nione = false;
		}
	}
	//q5
	else if (ruch == "q5") {
		if (q[1][1] == 'X' or q[1][1] == '0')
			cout << "Pole juz zajete. ";
		else q[1][1] = z;
		wype³nione = false;
	}
	//q6
	else if (ruch == "q6") {
		if (q[1][2] == 'X' or q[1][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[1][2] = z;
			wype³nione = false;
		}
	}
	//q7
	else if (ruch == "q1") {
		if (q[2][0] == 'X' or q[2][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[2][0] = z;
			wype³nione = false;
		}
	}
	//q8
	else if (ruch == "q2") {
		if (q[2][1] == 'X' or q[2][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[2][1] = z;
			wype³nione = false;
		}
	}
	//q9
	else if (ruch == "q3") {
		if (q[2][2] == 'X' or q[2][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			q[2][2] = z;
			wype³nione = false;
		}
	}

	//tablica w																	//tablica w
	//w1
	else if (ruch == "w7") {
		if (w[0][0] == 'X' or w[0][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[0][0] = z;
			wype³nione = false;
		}
	}
	//w2
	else if (ruch == "w8") {
		if (w[0][1] == 'X' or w[0][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[0][1] = z;
			wype³nione = false;
		}
	}
	//w3
	else if (ruch == "w9") {
		if (w[0][2] == 'X' or w[0][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[0][2] = z;
			wype³nione = false;
		}
	}
	//w4
	else if (ruch == "w4") {
		if (w[1][0] == 'X' or w[1][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[1][0] = z;
			wype³nione = false;
		}
	}
	//w5
	else if (ruch == "w5") {
		if (w[1][1] == 'X' or w[1][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[1][1] = z;
			wype³nione = false;
		}
	}
	//w6
	else if (ruch == "w6") {
		if (w[1][2] == 'X' or w[1][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[1][2] = z;
			wype³nione = false;
		}
	}
	//w7
	else if (ruch == "w1") {
		if (w[2][0] == 'X' or w[2][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[2][0] = z;
			wype³nione = false;
		}
	}
	//w8
	else if (ruch == "w2") {
		if (w[2][1] == 'X' or w[2][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[2][1] = z;
			wype³nione = false;
		}
	}
	//w9
	else if (ruch == "w3") {
		if (w[2][2] == 'X' or w[2][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			w[2][2] = z;
			wype³nione = false;
		}
	}

	//tablica a																	//tablica a
	//a1
	else if (ruch == "a7") {
		if (a[0][0] == 'X' or a[0][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[0][0] = z;
			wype³nione = false;
		}
	}
	//a2
	else if (ruch == "a8") {
		if (a[0][1] == 'X' or a[0][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[0][1] = z;
			wype³nione = false;
		}
	}
	//a3
	else if (ruch == "a9") {
		if (a[0][2] == 'X' or a[0][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[0][2] = z;
			wype³nione = false;
		}
	}
	//a4
	else if (ruch == "a4") {
		if (a[1][0] == 'X' or a[1][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[1][0] = z;
			wype³nione = false;
		}
	}
	//a5
	else if (ruch == "a5") {
		if (a[1][1] == 'X' or a[1][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[1][1] = z;
			wype³nione = false;
		}
	}
	//a6
	else if (ruch == "a6") {
		if (a[1][2] == 'X' or a[1][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[1][2] = z;
			wype³nione = false;
		}
	}
	//a7
	else if (ruch == "a1") {
		if (a[2][0] == 'X' or a[2][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[2][0] = z;
			wype³nione = false;
		}
	}
	//a8
	else if (ruch == "a2") {
		if (a[2][1] == 'X' or a[2][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[2][1] = z;
			wype³nione = false;
		}
	}
	//a9
	else if (ruch == "a3") {
		if (a[2][2] == 'X' or a[2][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			a[2][2] = z;
			wype³nione = false;
		}
	}

	//tablica s																		//tablica s
	//s1
	else if (ruch == "s7") {
		if (s[0][0] == 'X' or s[0][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[0][0] = z;
			wype³nione = false;
		}
	}
	//s2
	else if (ruch == "s8") {
		if (s[0][1] == 'X' or s[0][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[0][1] = z;
			wype³nione = false;
		}
	}
	//s3
	else if (ruch == "s9") {
		if (s[0][2] == 'X' or s[0][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[0][2] = z;
			wype³nione = false;
		}
	}
	//s4
	else if (ruch == "s4") {
		if (s[1][0] == 'X' or s[1][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[1][0] = z;
			wype³nione = false;
		}
	}
	//s5
	else if (ruch == "s5") {
		if (s[1][1] == 'X' or s[1][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[1][1] = z;
			wype³nione = false;
		}
	}
	//s6
	else if (ruch == "s6") {
		if (s[1][2] == 'X' or s[1][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[1][2] = z;
			wype³nione = false;
		}
	}
	//s7
	else if (ruch == "s1") {
		if (s[2][0] == 'X' or s[2][0] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[2][0] = z;
			wype³nione = false;
		}
	}
	//s8
	else if (ruch == "s2") {
		if (s[2][1] == 'X' or s[2][1] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[2][1] = z;
			wype³nione = false;
		}
	}
	//s9
	else if (ruch == "s3") {
		if (s[2][2] == 'X' or s[2][2] == '0')
			cout << "Pole juz zajete. ";
		else {
			s[2][2] = z;
			wype³nione = false;
		}
	}

	else {
		cout << "Wartosc nieznana. ";
	}

	return wype³nione;
}

char wygrana(char z, char q[3][3], char w[3][3], char a[3][3], char s[3][3]) {
	//poziomo
	if (q[0][0] == z && q[0][1] == z && q[0][2] == z && w[0][0] == z && w[0][1] == z)						//wiersz 1
		return z;
	if (q[0][1] == z && q[0][2] == z && w[0][0] == z && w[0][1] == z && w[0][2] == z)
		return z;
	if (q[1][0] == z && q[1][1] == z && q[1][2] == z && w[1][0] == z && w[1][1] == z)						//wiersz 2
		return z;
	if (q[1][1] == z && q[1][2] == z && w[1][0] == z && w[1][1] == z && w[1][2] == z)
		return z;
	if (q[2][0] == z && q[2][1] == z && q[2][2] == z && w[2][0] == z && w[2][1] == z)						//wiersz 3
		return z;
	if (q[2][1] == z && q[2][2] == z && w[2][0] == z && w[2][1] == z && w[2][2] == z)
		return z;
	if (a[0][0] == z && a[0][1] == z && a[0][2] == z && s[0][0] == z && s[0][1] == z)						//wiersz 4
		return z;
	if (a[0][1] == z && a[0][2] == z && s[0][0] == z && s[0][1] == z && s[0][2] == z)
		return z;
	if (a[1][0] == z && q[1][1] == z && q[1][2] == z && w[1][0] == z && w[1][1] == z)						//wiersz 5
		return z;
	if (a[1][1] == z && q[1][2] == z && w[1][0] == z && w[1][1] == z && w[1][2] == z)
		return z;
	if (a[2][0] == z && q[2][1] == z && q[2][2] == z && w[2][0] == z && w[2][1] == z)						//wiersz 6
		return z;
	if (a[2][1] == z && q[2][2] == z && w[2][0] == z && w[2][1] == z && w[2][2] == z)
		return z;

	//pionowo
	if (q[0][0] == z && q[1][0] == z && q[2][0] == z && a[0][0] == z && a[1][0] == z)						//kolumna 1
		return z;
	if (q[1][0] == z && q[2][0] == z && a[0][0] == z && a[1][0] == z && a[2][0] == z)
		return z;
	if (q[0][1] == z && q[1][1] == z && q[2][1] == z && a[0][1] == z && a[1][1] == z)						//kolumna 2
		return z;
	if (q[1][1] == z && q[2][1] == z && a[0][1] == z && a[1][1] == z && a[2][1] == z)
		return z;
	if (q[0][2] == z && q[1][2] == z && q[2][2] == z && a[0][2] == z && a[1][2] == z)						//kolumna 3
		return z;
	if (q[1][2] == z && q[2][2] == z && a[0][2] == z && a[1][2] == z && a[2][2] == z)
		return z;
	if (w[0][0] == z && w[1][0] == z && w[2][0] == z && s[0][0] == z && s[1][0] == z)						//kolumna 4
		return z;
	if (w[1][0] == z && w[2][0] == z && s[0][0] == z && s[1][0] == z && s[2][0] == z)
		return z;
	if (w[0][1] == z && w[1][1] == z && w[2][1] == z && s[0][1] == z && s[1][1] == z)						//kolumna 5
		return z;
	if (w[1][1] == z && w[2][1] == z && s[0][1] == z && s[1][1] == z && s[2][1] == z)
		return z;
	if (w[0][2] == z && w[1][2] == z && w[2][2] == z && s[0][2] == z && s[1][2] == z)						//kolumna 6
		return z;
	if (w[1][2] == z && w[2][2] == z && s[0][2] == z && s[1][2] == z && s[2][2] == z)
		return z;

	//na ukos
	if (q[0][0] == z && q[1][1] == z && q[2][2] == z && s[0][0] == z && s[1][1] == z)
		return z;
	if (q[1][1] == z && q[2][2] == z && s[0][0] == z && s[1][1] == z && s[2][2] == z)
		return z;
	if (a[2][0] == z && a[1][1] == z && a[0][2] == z && w[2][0] == z && w[1][1] == z)
		return z;
	if (a[1][1] == z && a[0][2] == z && w[2][0] == z && w[1][1] == z && w[0][2] == z)
		return z;

	return '-';
}

char wybor_gry() {
	char gra;
	cout << "Nacisnij 'k', zeby zagrac w KOLKO I KRZYZYK / nacisnij 'p', zeby zagrac w PENTAGO " << endl;
	while (1) {
		cin >> gra;
		if (gra == 'k' or gra == 'p') {
			system("cls");
			return gra;
			break;
		}
		else {
			cout << "Nieznana wartosc, wybierz jeszcze raz: ";
		}
	}
}

void predefiniowana_plansza(string& ruch, char znakX, char znak0, char q[3][3], char w[3][3], char a[3][3], char s[3][3]) {
	system("cls");

	if (ruch == "o") {

		q[1][0] = znakX;
		q[1][1] = znakX;
		q[2][1] = znakX;
		w[1][0] = znakX;
		w[0][1] = znakX;
		a[0][0] = znakX;
		a[0][1] = znakX;
		a[1][2] = znakX;

		q[0][1] = znak0;
		q[1][2] = znak0;
		w[1][1] = znak0;
		a[1][0] = znak0;
		a[2][1] = znak0;
		s[1][1] = znak0;
		s[2][1] = znak0;
		s[2][2] = znak0;
	}
}

bool obrót_planszy(string& ruch, char q[3][3], char w[3][3], char a[3][3], char s[3][3]) {
	bool obrócenie = false;

	char obr_buf;

	cin >> ruch;

	//obrot w lewo														//obrot w lewo
	if (ruch == "qx") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = q[2 - i][0];
			q[2 - i][0] = q[0][i];
			q[0][i] = q[i][2];
			q[i][2] = q[2][2 - i];
			q[2][2 - i] = obr_buf;
		}
		return true;
	}

	else if (ruch == "wx") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = w[2 - i][0];
			w[2 - i][0] = w[0][i];
			w[0][i] = w[i][2];
			w[i][2] = w[2][2 - i];
			w[2][2 - i] = obr_buf;
		}
		return true;
	}

	else if (ruch == "ax") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = a[2 - i][0];
			a[2 - i][0] = a[0][i];
			a[0][i] = a[i][2];
			a[i][2] = a[2][2 - i];
			a[2][2 - i] = obr_buf;
		}
		return true;
	}

	else if (ruch == "sx") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = s[2 - i][0];
			s[2 - i][0] = s[0][i];
			s[0][i] = s[i][2];
			s[i][2] = s[2][2 - i];
			s[2][2 - i] = obr_buf;
		}
		return true;
	}

	//obrot w prawo														//obrot w prawo
	else if (ruch == "qz") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = q[2 - i][2];
			q[2 - i][2] = q[0][2 - i];
			q[0][2 - i] = q[i][0];
			q[i][0] = q[2][i];
			q[2][i] = obr_buf;
		}
		return true;
	}

	else if (ruch == "wz") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = w[2 - i][2];
			w[2 - i][2] = w[0][2 - i];
			w[0][2 - i] = w[i][0];
			w[i][0] = w[2][i];
			w[2][i] = obr_buf;
		}
		return true;
	}

	else if (ruch == "az") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = a[2 - i][2];
			a[2 - i][2] = a[0][2 - i];
			a[0][2 - i] = a[i][0];
			a[i][0] = a[2][i];
			a[2][i] = obr_buf;
		}
		return true;
	}

	else if (ruch == "sz") {
		for (int i = 0; i < 2; i += 1) {
			obr_buf = s[2 - i][2];
			s[2 - i][2] = s[0][2 - i];
			s[0][2 - i] = s[i][0];
			s[i][0] = s[2][i];
			s[2][i] = obr_buf;
		}
		return true;
	}
	else cout << "Wartosc nieznana. ";

	return obrócenie;
}

void komendy_ruch(string& imie) {
	cout << "Wpisz 'help' po wskazowki " << endl << endl;
	cout << "Ruch gracza " << imie << ", wybierz pole/ komende: ";
}

void komendy_obrot(string& imie) {
	cout << "Wpisz 'help' po wskazowki " << endl << endl;
	cout << "Ruch gracza " << imie << ", wybierz obrot/ komende: ";
}

bool wybor_zetonow(string& imie1, string& imie2, char znakX, char znak0) {
	char z;
	char buf;
	system("cls");
	cout << imie1 << " wybierz zeton, ktorym bedziesz gral ('X' lub '0'): ";
	while (1) {
		cin >> z;
		if (z == znak0) {
			return false;
			break;
		}
		else if (z == znakX) {
			return true;
			break;
		}
		else
			cout << "Wartosc nieznana, sprobuj jeszcze raz: ";
	}
}

void zamiana_postawionych_zetonow(char znakX, char znak0, char q[3][3], char w[3][3], char a[3][3], char s[3][3]) {
	for (int i = 0; i < 3; i += 1) {
		for (int j = 0; j < 3; j += 1) {
			if (q[i][j] == 'X') {
				q[i][j] = '0';
			}
			else if (q[i][j] == '0') {
				q[i][j] = 'X';
			}
		}
	}

	for (int i = 0; i < 3; i += 1) {
		for (int j = 0; j < 3; j += 1) {
			if (w[i][j] == 'X') {
				w[i][j] = '0';
			}
			else if (w[i][j] == '0') {
				w[i][j] = 'X';
			}
		}
	}

	for (int i = 0; i < 3; i += 1) {
		for (int j = 0; j < 3; j += 1) {
			if (a[i][j] == 'X') {
				a[i][j] = '0';
			}
			else if (a[i][j] == '0') {
				a[i][j] = 'X';
			}
		}
	}

	for (int i = 0; i < 3; i += 1) {
		for (int j = 0; j < 3; j += 1) {
			if (s[i][j] == 'X') {
				s[i][j] = '0';
			}
			else if (s[i][j] == '0') {
				s[i][j] = 'X';
			}
		}
	}

}

void opis_pauza_opcje(string& ruch) {
	system("cls");
	if (ruch == "h") {
		cout << "Opis programu:" << endl << endl;
		cout << "Program powstal w ramach I projektu z podstaw programowania (2021)" << endl;
		cout << " * Politechnika Gdanska, Gdansk *" << endl << endl;
		cout << "Nacisnij dowolny przycisk, aby kontynuowac rozgrywke " << endl;
		system("pause");
	}

	else if (ruch == "p") {
		cout << "Pauza." << endl << endl;
		cout << "Nacisnij dowolny przycisk, aby kontynuowac rozgrywke " << endl << endl;
		system("pause");
	}
	else if (ruch == "m") {
		cout << "Opcje:" << endl << endl;
		cout << "Nacisnij dowolny przycisk, aby kontynuowac rozgrywke " << endl;
		system("pause");
	}
}

void help() {
	cout << "> q,w,a,s - wybor czesci planszy odpowiednio: lewej gornej, prawej gornej, lewej dolnej, prawej dolnej" << endl;
	cout << "> 1..9 - wybor pola na czesci planszy jak na klawiaturze numerycznej tj. 1 to dolne lewe pole" << endl;
	cout << "> z,x - obrot odpowiednio: zgodnie z ruchem wskazowek zegara, odwrotnie do ruchu wskazowek" << endl;
	cout << "> h - opis programu | p - pauza | m - wejscie do opcji | o - wczytanie predefiniowanej planszy | u - undo " << endl;
	cout << "> zamiana | zamiana zetonami" << endl << endl;
}



int main()
{
	string imie1, imie2, ruch;

	char q[3][3], w[3][3], a[3][3], s[3][3];
	char znakX = 'X', znak0 = '0', buf;

	for (int i = 0; i < 3; i += 1) {
		for (int j = 0; j < 3; j += 1) {
			q[i][j] = '_';
			w[i][j] = '_';
			a[i][j] = '_';
			s[i][j] = '_';
		}
	}

	char pion_podw_linia = 0xBA, poz_podw_linia = 0xCD, lacznik = 0xCE;
	char lg_lacznik = 0xC9, pg_lacznik = 0xBB, ld_lacznik = 0xC8, pd_lacznik = 0xBC;		//lg = lewy gorny | pg = prawy gorny | ld = lewy dolny | pd = prawy dolny
	char ls_lacznik = 0xCC, ps_lacznik = 0xB9, gs_lacznik = 0xCB, ds_lacznik = 0xCA;		//ls = lewy srodkowy | ps = prawy srodkowy | gs = gorny srodkowy | ds = dolny srodkowy



	//------------- KOLKO I KRZYZK -------------																	// KOLKO I KRZYZK = 'KiK'
	if (wybor_gry() == 'k') {

		imie(imie1, imie2);

		if (wybor_zetonow(imie1, imie2, znakX, znak0) == false) {
			znakX = '0';
			znak0 = 'X';
		}

		wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
			lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
			ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
			znakX, znak0, q, w, a, s);

		//-------------- GRACZ 1 ----------------																	//ruch gracza1 KiK

		while (1) {

			komendy_ruch(imie1);

			while (1) {
				cin >> ruch;
				if (gracz_ruch(ruch, znakX, q, w, a, s) == false)
					break;

				else if (ruch == "h" or ruch == "p" or ruch == "m") {
					opis_pauza_opcje(ruch);
					if (ruch == "h") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "p") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "m") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
				}

				else if (ruch == "o") {
					predefiniowana_plansza(ruch, znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}

				else if (ruch == "help") {
					help();
				}

				else if (ruch == "zamiana") {
					buf = znakX;
					znakX = znak0;
					znak0 = buf;
					zamiana_postawionych_zetonow(znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}
				else
					cout << "Sprobuj jeszcze raz: " << endl << endl;
			}

			wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
				lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
				ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
				znakX, znak0, q, w, a, s);

			if (wygrana(znakX, q, w, a, s) == znakX) {
				cout << imie1 << " wygral !!! " << endl;
				break;
			}

			//-------------- GRACZ 2 ----------------																//ruch gracza 2 KiK

			while (1) {
				komendy_ruch(imie2);
				cin >> ruch;
				if (gracz_ruch(ruch, znak0, q, w, a, s) == false)
					break;

				else if (ruch == "h" or ruch == "p" or ruch == "m") {
					opis_pauza_opcje(ruch);
					if (ruch == "h") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "p") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "m") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
				}

				else if (ruch == "o") {
					predefiniowana_plansza(ruch, znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}

				else if (ruch == "help") {
					help();
				}

				else if (ruch == "zamiana") {
					buf = znakX;
					znakX = znak0;
					znak0 = buf;
					zamiana_postawionych_zetonow(znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}
				else
					cout << "Sprobuj jeszcze raz: " << endl << endl;
			}

			wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
				lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
				ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
				znakX, znak0, q, w, a, s);

			if (wygrana(znak0, q, w, a, s) == znak0) {
				cout << imie2 << " wygral !!! " << endl;
				break;
			}
		}
	}



	//------------------ PENTAGO ----------------																// PENTAGO = 'P'
	else {

		imie(imie1, imie2);

		if (wybor_zetonow(imie1, imie2, znakX, znak0) == false) {
			znakX = '0';
			znak0 = 'X';
		}

		wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
			lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
			ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
			znakX, znak0, q, w, a, s);

		while (1) {

			//-------------- GRACZ 1 ----------------

			while (1) {
				komendy_ruch(imie1);
				cin >> ruch;
				if (gracz_ruch(ruch, znakX, q, w, a, s) == false)												//ruch gracza 1 P
					break;

				else if (ruch == "h" or ruch == "p" or ruch == "m") {
					opis_pauza_opcje(ruch);
					if (ruch == "h") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "p") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "m") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
				}

				else if (ruch == "o") {
					predefiniowana_plansza(ruch, znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}

				else if (ruch == "help") {
					help();
				}

				else if (ruch == "zamiana") {
					buf = znakX;
					znakX = znak0;
					znak0 = buf;
					zamiana_postawionych_zetonow(znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}
				else
					cout << "Sprobuj jeszcze raz: " << endl << endl;
			}

			wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
				lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
				ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
				znakX, znak0, q, w, a, s);

			while (1) {
				komendy_obrot(imie1);
				if (obrót_planszy(ruch, q, w, a, s) == true) {													//obrót gracz 1 P
					break;
				}
				else if (ruch == "h" or ruch == "p" or ruch == "m") {
					opis_pauza_opcje(ruch);
					if (ruch == "h") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "p") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "m") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
				}

				else if (ruch == "o") {
					predefiniowana_plansza(ruch, znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}

				else if (ruch == "help") {
					help();
				}

				else if (ruch == "zamiana") {
					buf = znakX;
					znakX = znak0;
					znak0 = buf;
					zamiana_postawionych_zetonow(znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}
				else
					cout << "Sprobuj jeszcze raz: " << endl << endl;
			}

			wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
				lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
				ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
				znakX, znak0, q, w, a, s);

			if (wygrana(znakX, q, w, a, s) == znakX) {
				cout << imie1 << " wygral !!! " << endl;
				break;
			}


			//-------------- GRACZ 2 ----------------															//ruch gracza 2 P

			while (1) {
				komendy_ruch(imie2);
				cin >> ruch;
				if (gracz_ruch(ruch, znak0, q, w, a, s) == false)
					break;

				else if (ruch == "h" or ruch == "p" or ruch == "m") {
					opis_pauza_opcje(ruch);
					if (ruch == "h") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "p") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "m") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
				}

				else if (ruch == "o") {
					predefiniowana_plansza(ruch, znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}

				else if (ruch == "help") {
					help();
				}

				else if (ruch == "zamiana") {
					buf = znakX;
					znakX = znak0;
					znak0 = buf;
					zamiana_postawionych_zetonow(znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}
				else
					cout << "Sprobuj jeszcze raz: " << endl << endl;
			}

			wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
				lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
				ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
				znakX, znak0, q, w, a, s);


			while (1) {																									//obrot gracz 2 P
				komendy_obrot(imie2);
				if (obrót_planszy(ruch, q, w, a, s) == true) {
					break;
				}
				else if (ruch == "h" or ruch == "p" or ruch == "m") {
					opis_pauza_opcje(ruch);
					if (ruch == "h") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "p") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
					else if (ruch == "m") {
						wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
							lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
							ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
							znakX, znak0, q, w, a, s);
					}
				}

				else if (ruch == "o") {
					predefiniowana_plansza(ruch, znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}

				else if (ruch == "help") {
					help();
				}

				else if (ruch == "zamiana") {
					buf = znakX;
					znakX = znak0;
					znak0 = buf;
					zamiana_postawionych_zetonow(znakX, znak0, q, w, a, s);
					wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
						lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
						ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
						znakX, znak0, q, w, a, s);
				}
				else
					cout << "Sprobuj jeszcze raz: " << endl << endl;
			}

			wyswietl_plansza(imie1, imie2, pion_podw_linia, poz_podw_linia, lacznik,
				lg_lacznik, pg_lacznik, ld_lacznik, pd_lacznik,
				ls_lacznik, ps_lacznik, gs_lacznik, ds_lacznik,
				znakX, znak0, q, w, a, s);

			if (wygrana(znak0, q, w, a, s) == znak0) {
				cout << imie2 << " wygral !!! " << endl;
				break;
			}
		}
	}
	return 0;
}