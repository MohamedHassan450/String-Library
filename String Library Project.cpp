#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<vector>
#include<cctype>
#include<fstream>
#include<cstdlib>
#include"clsString.h";

using namespace std;

int main()
{
	clsString String1;
	clsString String2("It is Construactor ");
	

	String1.sgValue = "Mohamed Hassan Mohy Eldin DVD@gmail.com ";

	cout << "____________________________________" << endl;
	cout << "____________________________________" << endl;
	cout << String1.sgValue << endl;
	cout << "____________________________________" << endl;
	cout << "____________________________________" << endl;

	cout << endl;
	String1.CountWord();
	String1.ReturnWordByNumber(2);
	String1.CountLetters();
	String1.CountVowels();
	String1.CountSpecialLetters();
	String1.UpperFirstLetter();
	String1.lowerFirstLetter();
	String1.CountUpperCase();
	String1.CountLowerCase();
	String1.RemoveNonLetters();


	system("pause>0");
	

}