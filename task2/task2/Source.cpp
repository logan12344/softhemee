#include <iostream>
#include <string>

using namespace std;





void main()
{
	int p = 0;
	string rez;
	cout << "Enter number:";
	cin >> p;
	for (int i = 1; i < p; i++)
	{
		if ((p % i) == 0)
		{
			
			rez+=to_string(i) + " ";
		}
	}
	
	cout << rez << endl;

	system("PAUSE");
}