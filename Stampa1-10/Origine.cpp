#include <iostream>
using namespace std;

int main()
{
	cout << "Buon giorno!" << endl;
	//il conflitto dovrebbe essere da queste parti
	for (int iNum=1; iNum <= 10; iNum++)
	{
		cout << iNum << endl;
	}
	system("pause");
}