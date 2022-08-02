#include"add_product.h"
#include"product.h"
#include<iostream>

using namespace std;

addProduct::addProduct()
{
}

addProduct::~addProduct()
{
}

void addProduct::add_product_page()
{
	cout << "\t\t\t Add product to your inventory...\n\n";
	cout << "Enter product details/nto enter the new product please provide 'product type'"
		<< ", 'product name', 'product cost price','product selling price'and  its 'description'\n\n " << endl;

	int x;
	
    for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
    {

        string s;
        cout << arr1[i] << " - ";
        cin >> s;

        item_details.push_back(make_pair(arr1[i], s));
    }

    cout << "\n\nitem added\n\n";
    for(auto var : item_details)
    {
        cout << var.first << " - " << var.second << endl;
    }

    cout << "\n\n1. Add more items" << endl;
    cout << "\n\n2. Back to products page." << endl;
    cin >> x;
    if (x==1)
    {
        system("cls");
        add_product_page();
    }
    else if (x==2)
    {
        system("cls");
        product c;
        c.dispalyprod();
    }
}
