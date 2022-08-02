#include "product.h"
#include"add_product.h"
#include"delete_Product.h"
#include"search_product.h"
#include"delete_Product.h"
#include"show_product.h"
#include<iostream>

using namespace std;


product::product()
{
	//system("cls");
	cout << "\t\t\t PRODUCT\n\n" << endl;

	//dispalyprod();
}

product::~product()
{
}

void product::dispalyprod() 
{
	int x;
	cout << " 1.  Add product" << endl;
	cout << " 2.  Search product" << endl;
	cout << " 3.  Update product" << endl;
	cout << " 4.  Remove product" << endl;
	cout << " 5.  Show product" << endl;
	cout << " 6.  Back to dashboard" << endl;

	cout << "Enter your choice...  ";
	cin >> x;
	switch (x)
	{
	case 1:
	{ 
		
		add_product_page();
		
		break;
	}
	case 2:
		search_item_page();

		break;
	case 3:
		update_item_page();

		break;
	case 4:

		delete_item_page();

		break;
	case 5:

		show_item_page();

		break;


	default:
		cout << "Invalid Input! \npress 1 for 'Add product', press 2 for 'Search product'"
			<<"press 3 for 'Update product', press 4 for 'Remove product', press 6 for 'show product', press 5 for 'Back to dashboard'" 
			<< endl;
		break;
	}
}
