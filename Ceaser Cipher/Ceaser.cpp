#include "Ceaser.h"
#include <iostream>
#include <string>
using namespace std;


Ceaser::~Ceaser() {
	cout << "\n\nDeveloped by Nour Elden Hany  at 7/11/2024\n";
}
string Ceaser::Encryption(string text)
{
	
	string Encrypted = "";

	for(char c : text) {
		if (isupper(c))
		{
			c = char(int(c + shift - 65) % 26 + 65);			
		}
		else if (islower(c)) {
			c = char(int(c + shift - 97) % 26 + 97);
		}

		Encrypted += c;
	}
	
	return Encrypted;
}

string Ceaser::Decryption(string text)
{
	
	string Decrypted = "";

	for (char c : text) {
		if (isupper(c))
		{
			c = char(int(c - shift - 65 ) % 26 + 65);
		}
		else if (islower(c)) {
			c = char(int(c - shift - 97 ) % 26 + 97);
		}
		Decrypted += c;

	}


	return Decrypted;
}

void Ceaser::RunTool() {
	cout << "======== Ceaser Cipher Tool ======== \n";

	while (true) {
		cout << "1) Encrypt Text\n";
		cout << "2) Decrypt Text\n";
		cout << "3) Exit\n";
		cout << "Your Choice : ";
	start:
		char Choice ; 
		cin >> Choice;
		char c;
		string text;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		switch (Choice) {
		case '1':
			cout << "Enter Text to be Encrypted : ";
			getline(cin, text);
			cout << "Text After Encryption: " << Encryption(text) << '\n';
		check:
			cout << "Continue : Y? N?\n";
			cin >> c;

			if (tolower(c) == 'y') {
				break;
			}
			else if (tolower(c) == 'n') {
				cout << "Thank You\n";
				return;
			}
			else {
				cout << "Wrong Input, Try again\n";
				goto check;
			}

		case '2':
			cout << "Enter Text to be Decrypted : ";
			getline(cin, text);
			cout << "Text After Decryption: " << Decryption(text) << '\n';
		check2:
			cout << "Continue : Y? N?\n";
			cin >> c;
			if (tolower(c) == 'y') {
				break;
			}
			else if (tolower(c) == 'n') {
				cout << "Thank You\n";
				return;
			}
			else {
				cout << "Wrong Input, Try again\n";
				goto check2;
			}
		case '3':
			cout << "Thank You";
			return;

		default:
			cout << "Wrong input,Try Again\n";
			goto start;
		}

	}
}