#include <iostream>
#include <windows.h>
using namespace std;

void lt1() {
	int speed = 100;
	for (int i = 0; i <= 4; ++i) {
		int repeats = 5 - i;
		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<---------->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<#--------->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<##-------->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<###------->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<####------>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<#####----->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<######---->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<#######--->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<########-->\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<-########->\n";
		Sleep(speed);
		
		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<--########>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<---#######>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<----######>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<-----#####>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<------####>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<-------###>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<-------###>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<--------##>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<---------#>\n";
		Sleep(speed);

		system("CLS");
		cout << "repeats: " << repeats << "\n";
		cout << "<---------->\n";
		Sleep(speed);









	}
}

void lt2() {
	int speed = 100;
	for (int i = 0; i <= 4; ++i) {
		int repeats = 5 - i;
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "0%\n";
		cout << "<---------->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "10%\n";
		cout << "<#--------->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "20%\n";
		cout << "<##-------->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "30%\n";
		cout << "<###------->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "40%\n";
		cout << "<####------>";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "50%\n";
		cout << "<#####----->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "60%\n";
		cout << "<######---->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "70%\n";
		cout << "<#######--->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "80%\n";
		cout << "<########-->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "90%\n";
		cout << "<#########->";
		Sleep(100);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "100%\n";
		cout << "<##########>";
		Sleep(100);
		system("CLS");
	}



}


void lt3() {
	int speed = 100;
	for (int i = 0; i <= 4; ++i) {
		int repeats = 5 - i;
		cout << "repeats: " << repeats << "\n\n";
		cout << "|";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "/";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "-";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "\\";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "|";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "/";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "-";
		Sleep(speed);
		system("CLS");
		cout << "repeats: " << repeats << "\n\n";
		cout << "\\";
		Sleep(speed);
		system("CLS");
	}
}


int main() {
	int option;
	system("CLS");
	cout << "1: long\n";
	cout << "2: accurate\n";
	cout << "3: spiral\n";
	cout << "option: ";
	cin >> option;
	if (option == 1) {
		lt1();
	}
	else if (option == 2) {
		lt2();
	}
	else if (option == 3) {
		lt3();
	}
	else {
		cout << "invalid option";
	}

	return main();

}