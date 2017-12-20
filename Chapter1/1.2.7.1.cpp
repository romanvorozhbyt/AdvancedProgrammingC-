#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	vector<vector<int>>ATM;
	ATM.push_back(vector<int>(10, 5));
	ATM.push_back(vector<int>(20, 6));
	ATM.push_back(vector<int>(50, 3));
	ATM.push_back(vector<int>(100, 4));
	ATM.push_back(vector<int>(200, 5));
	
	cout << "Input 2  amount of money : ";
	int money1,money2;
	cin >> money1;
	cin >> money2;
	int *moneyInATM = new int;
	for (vector<int> banknote : ATM)
	{
		moneyInATM += banknote[0] * banknote[1];
	}
	if (money1 % 10 != 0)
	{
		cout << "Incorrect amount of money. - i.e., if the amount is not a multiple of ten" << endl;
		
	}
	if (money2 % 10 != 0)
	{
		cout << "Incorrect amount of money. - i.e., if the amount is not a multiple of ten" << endl;
		return 0;
	}
	if (money1 < *moneyInATM)
	{
		cout << "Enough money." << endl;
		moneyInATM -= money1;
	}
	else
	{
		cout << "Not enough money." << endl;
	}
	if(money2 < *moneyInATM)
	{
		cout << "Enough money." << endl;
		moneyInATM -= money2;
	}
	else
	{
		cout << "Not enough money." << endl;
	}
	return 0;
}