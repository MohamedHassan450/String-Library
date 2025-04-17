#pragma once
#include<iostream>

using namespace std;


class clsString
{
private:
	string _Value;
public:
	clsString()
	{
		_Value = "";
	}
	clsString(string Value)
	{
		_Value = Value;
	}

	void SetString(string Value)
	{
		_Value = Value;
	}
	string GetString()
	{
		return _Value;
	}
	__declspec( property(get = GetString, put = SetString) ) string sgValue;

private:

	int _CountWord()
	{
		string Read = _Value;
		int Counter = 0;
		int Position=0;
		string Space = " ";
		string Word;
		

		while((Position= Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				Counter++;
			}

			Read.erase(0, Position + Space.length());
		}

		if(Read != "")
		{
			Counter++;
		}
		return Counter;
	}

	vector <string> _ReturnWordByNumber()
	{
		string Read = _Value;
		
		int Position = 0;
		string Space = " ";
		string Word;
		vector <string> vWord;

		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				vWord.push_back(Word);
			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			vWord.push_back(Read);
		}
		return vWord;
	}

	int _CountLetters()
	{
		string Read = _Value;
		int Counter = 0;
		int Position = 0;
		string Space = " ";
		string Word;


		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				Counter = Counter + Word.length();
			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			Counter = Counter + Read.length();
		}
		return Counter;
	}

	int _CountVowelLetters()
	{
		string Read = _Value;
		int Counter = 0;
		int Position = 0;
		string Space = " ";
		string Word;


		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				for (int i = 0; i <= Word.length(); i++)
				{
					if (Word[i] == 'a' || Word[i] == 'i' || Word[i] == 'e' || Word[i] == 'o' || Word[i] == 'u' || Word[i] == 'A' || Word[i] == 'I' || Word[i] == 'E' || Word[i] == 'O' || Word[i] == 'U')
					{
						Counter++;
					}
				}

			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			for (int i = 1; i <= Word.length(); i++)
			{
				if (Word[i] == 'a' || Word[i] == 'i' || Word[i] == 'e' || Word[i] == 'o' || Word[i] == 'u' || Word[i] == 'A' || Word[i] == 'I' || Word[i] == 'E' || Word[i] == 'O' || Word[i] == 'U')
				{
					Counter++;
				}
			}
		}
		return Counter;
	}

	int _CountSpecialLetters()
	{
		string Read = _Value;
		int Counter = 0;
		int Position = 0;
		string Space = " ";
		string Word;


		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				for (int i = 0; i < Word.length(); i++)
				{

					if(!isalnum(Word[i]))
					{
						Counter++;
					}
				}

			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
		
				for (int i = 0; i < Read.length(); i++)
				{

					if (!isalnum(Read[i]))
					{
						Counter++;
					}
				}
			
		}
		return Counter;
	}

	vector <string> _UpperFirstLetter()
	{
		string Read = _Value;
	
		int Position = 0;
		string Space = " ";
		string Word;
		vector <string> vWord;

		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
					if (islower(Word[0]))
					{
						Word[0] = toupper(Word[0]);
					}

					vWord.push_back(Word);
			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			if (islower(Read[0]))
			{
				Read[0] = toupper(Read[0]);
			}

			vWord.push_back(Read);
		}
	
		return vWord;
	}

	vector <string> _LowerFirstLetter()
	{
		string Read = _Value;

		int Position = 0;
		string Space = " ";
		string Word;
		vector <string> vWord;

		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				if (isupper(Word[0]))
				{
					Word[0] = tolower(Word[0]);
				}

				vWord.push_back(Word);
			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			if (isupper(Read[0]))
			{
				Read[0] = tolower(Read[0]);
			}

			vWord.push_back(Read);
		}

		return vWord;
	}

	int _CountUpperCase()
	{
		string Read = _Value;

		int Position = 0;
		string Space = " ";
		string Word;
		int Counter=0;

		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				for (int i = 0; i <= Word.length(); i++)
				{
					if (isupper(Word[i]))
					{
						Counter++;
					}
				}
			
			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			for (int i = 0; i <= Read.length(); i++)
			{
				if (isupper(Read[0]))
				{
					Counter++;
				}
			}
			
		}

		return Counter;
	}

	int _CountLowerCase()
	{
		string Read = _Value;

		int Position = 0;
		string Space = " ";
		string Word;
		int Counter = 0;

		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				for (int i = 0; i <= Word.length(); i++)
				{
					if (islower(Word[i]))
					{
						Counter++;
					}
				}

			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{
			for (int i = 0; i <= Read.length(); i++)
			{
				if (islower(Read[0]))
				{
					Counter++;
				}
			}

		}

		return Counter;
	}

	vector <string> _RemoveNonLetters()
	{
		string Read = _Value;
		
		int Position = 0;
		string Space = " ";
		string Word;
		vector <string> vWord;


		while ((Position = Read.find(Space)) != std::string::npos)
		{
			Word = Read.substr(0, Position);
			if (Word != "")
			{
				for (int i = 0; i < Word.length(); i++)
				{

					if (!isalnum(Word[i]))
					{
						Word.erase(i,1);
					}
				}

				vWord.push_back(Word);
			}

			Read.erase(0, Position + Space.length());
		}

		if (Read != "")
		{

			for (int i = 0; i < Read.length(); i++)
			{

				if (!isalnum(Read[i]))
				{
					Read.erase(i,1);

				}
			}
			vWord.push_back(Read);

		}

		return vWord;
		
	}



public:


	void CountWord()
	{
		
		cout << "Number of Words = " << _CountWord() << endl;
	}

	void ReturnWordByNumber(short Number)
	{
		cout << endl;

		vector <string> Word = _ReturnWordByNumber();
		Number--;
		if (Number >= Word.size())
		{
			cout << "No Word try lower number :-( " << endl;
		}
		else
		{
			cout << "Word number " << Number + 1 << " = " << Word[Number]<<endl;
		}

	}

	void CountLetters()
	{
		int NumberOfLetters = _CountLetters();
		cout << endl;
		cout <<"Number of Letters = "<<NumberOfLetters << endl;

	}

	void CountVowels() 
	{
		cout << endl;
		cout << "Number Of Vowels Letters = " << _CountVowelLetters() << endl;
	}

	void CountSpecialLetters() 
	{
		cout << endl;
		cout << "Number Of Special Letters = " << _CountSpecialLetters() << endl;
	}

	void UpperFirstLetter()
	{
		vector <string> vWord = _UpperFirstLetter();

		cout << endl;
		cout << "Change First Letter to UpperCase= ";

		for(int i = 0;i < vWord.size() ; i++ )
		{
			cout << vWord[i]<<" ";
		}
		cout << endl;

	}

	void lowerFirstLetter()
	{
		vector <string> vWord = _LowerFirstLetter();

		cout << endl;
		cout << "Change First Letter to LowerCase = ";

		for (int i = 0; i < vWord.size(); i++)
		{
			cout << vWord[i] << " ";
		}
		cout << endl;

	}

	void CountUpperCase()
	{
		cout << endl;
		cout << "UpperCase Letters = " << _CountUpperCase() << endl;
	}

	void CountLowerCase()
	{
		cout << endl;
		cout << "UpperCase Letters = " << _CountLowerCase() << endl;
	}

	void  RemoveNonLetters()
	{
		vector <string> vWord = _RemoveNonLetters();
		cout << endl;
		cout << "After Remove Non-Letters = ";
		for (int i = 0; i < vWord.size(); i++)
		{
			cout << vWord[i] << " ";
		}
		cout << endl;
	}


};

