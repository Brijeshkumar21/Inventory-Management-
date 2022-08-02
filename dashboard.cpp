#include"dashboard.h"
#include<iostream>
#include"product.h"

using namespace std;


dashboard::dashboard()
{
	//system("cls");
	cout << "\t\t\t DASHBOARD\n\n\n\n\n" << endl;

	//displayDash();
}

dashboard::~dashboard()
{
}

void dashboard::displayDash()
{
	int y;
	cout << "1.\tProducts" << endl;
	cout << "2.\tCustomers" << endl;
	cout << "3.\tGenerate and search bills" << endl;
	cout << "4.\tProfile" << endl;
	while (true)
	{
		cout << "Enter your choice...  ";
		cin >> y;
		switch (y)
		{
		case 1: 
			{
			system("cls");
			product prod;
			prod.dispalyprod();
			}
			
			break;
		case 2:


			break;
		case 3:


			break;
		case 4:



			break;


		default:
			cout << "Invalid Input! \npress 1 for 'product', press 2 for 'Customers', press 3 for 'Generate and search bills', press 4 for 'Profile'" << endl;
			break;
		}
	}
	
}
