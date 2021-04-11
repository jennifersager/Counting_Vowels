// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		cout << "Error with input agrs.." << endl;
		return 1;
	}

	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		cout << i << ":" << argv[i] << endl;
	}

	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
		return 1;
	}

	//read the lines in the file
	char c;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int b = 0;
	int f = 0;
	int s = 0;
	int index = 0;
	int total = 0;

	cout << setw(43) << "Welcome to my Letter Count Program" << endl;
	cout << " " << endl;
	
	cout << "Analyzing File " << "'" << argv[1] << "'" << endl;
	cout << " " << endl;

	while (!inFile.eof() && inFile >> c)
	{
		switch (c)
		{
		case'a':
			a++;
			break;
		case 'A':
			a++;
			break;
		case'e':
			e++;
			break;
		case 'E':
			e++;
			break;
		case'i':
			i++;
			break;
		case 'I':
			i++;
			break;
		case'o':
			o++;
			break;
		case 'O':
			o++;
			break;
		case'u':
			u++;
			break;
		case 'U':
			u++;
			break;
		case 'b':
			b++;
			break;
		case 'B':
			b++;
			break;
		case 'f':
			f++;
			break;
		case 'F':
			f++;
			break;
		case 's':
			s++;
			break;
		case 'S':
			s++;
			break;
		}
		index++;
	}
	total = total + a + e + i + o + u;
	cout << "The number of A's:" << "." << setw(34) << setfill('.') << a << endl;
	cout << "The number of E's:" << setw(35) << e << endl;
	cout << "The number of I's:" << setw(35) << i << endl;
	cout << "The number of O's:" << setw(35) << o << endl;
	cout << "The number of U's:" << setw(34) << u << endl;
	cout << "The vowel count is:" << setw(34) << total << endl;
	cout << "The number of B's:" << setw(35) << b << endl;
	cout << "The number of F's:" << setw(35) << f << endl;
	cout << "The number of S's:" << setw(35) << s << endl;

	inFile.close();

	return 0;
}

