#pragma once
#include <string>
using namespace std;

class Ceaser
{
private:
	int shift = 3;
	string Encryption(string text);
	string Decryption(string text);	
	
public:	
	~Ceaser();

	void RunTool();
};

