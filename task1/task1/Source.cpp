#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int f1(string y)
{
	int c = 0, j = 0;
	for (int g : y)
	{
		if (g == '1')
		{
			c++;
		}
		else
		{
			c = 0;
		}
		if (c > j)
		{
			j = c;
		}
	}
	return j;
}

void main()
{
	int rez = 0;
	string y, h;
	ifstream fi("INPUT.txt");
	if (fi.is_open())
	{
		getline(fi, y);
		//cout << y << endl;
		rez = f1(y);
		cout << rez << endl;
		h = to_string(rez);
		fi.close();
	}
	else
	{
		cout << "Unable to open file";
	}

	ofstream fu;
	fu.open("OUTPUT.txt");
	fu << h;
	fu.close();
}