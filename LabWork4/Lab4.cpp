
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "******Labaratorna robota 4******\n";
	cout << "*******Name_Array*******\n";
	string names[12] = { "Petro", "Vlad","Andrei","Sasha", "Lina", "Taras", "Max", "Miroslav", "Sashko", "Igor", "Pablo", "John" };
	char exOrwhat = 'c';
	while (true)
	{
		cout << "Enter(c) to display names! Enter (q) for exit!\n ";
		cin >> exOrwhat;
		if (toupper(exOrwhat) == 'Q') {
			break;
		}
		for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
		{
			(double)(i % 3) == 0 ? cout << "\n" : cout << " ";
			cout << names[i];

		}

		cout << "\n \nEnter a number of the Name you want to replace: \n";
		int numName;
		cin >> numMonth;
		cout << "You wanna change " << names[numName - 1] << " to: \n";
		cin >> names[numName - 1];

	}
}