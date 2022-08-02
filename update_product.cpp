#include"update_product.h"
#include<iostream>
#include<string>
#include"product.h"
#include"dashboard.h"
using namespace std;

updateProduct::updateProduct()
{
}

updateProduct::~updateProduct()
{
}

void updateProduct::update_item_page()
{
	int x;
	cout << "\t\t\t update product from your inventory...\n\nfind the product to delete on the basis of";
	cout << " 1.  By type" << endl;
	cout << " 2.  By name\n\nEnter your choice...\n\n";
	cin >> x;


	if (x == 1) {

		cout << " 1.  By type" << endl;

		x = 0;
	}
	else if (x == 2) {

		cout << " 1.  By names" << endl;
		x = 0;
	}
	else
	{
		int l = 0;
		while (l < 1) {

			if (l != 1) {

				system("cls");
				update_item_page();
				l++;

			}
			else if (l == 2) {
				system("cls");
				product a;
				a.dispalyprod();
				l++;
			}
			else if (l == 3)
			{
				system("cls");
				dashboard d;
				d.displayDash();
				l++;
			}
			else {
				cout << "Invalid input....\n1. Retry\n2. Back to product page.\n3. Back to dashboard\n\nEnter your choice... ";
				cin >> x;
			}
		}

	}
}
