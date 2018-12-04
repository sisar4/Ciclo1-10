#include <iostream>
using namespace std;

int main()
{
	cout << "Buon giorno!" << endl;
<<<<<<< HEAD
	//il conflitto dovrebbe essere da queste parti
	for (int iNum=1; iNum <= 10; iNum++)
	{
		cout << iNum << endl;
	}
=======
	//cambiate delle righe di codice per creare conflitti
	int iNum;
	for (iNum = 0; iNum <= 10; iNum++)
	{
		cout << iNum << endl;
	}
	cout << "Arrivederci" << endl;
>>>>>>> FIX_BUG
	system("pause");
}