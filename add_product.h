#ifndef ADD_PRODUCT_H
#define ADD_PRODUCT_H
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class addProduct
{
public:
	addProduct();
	~addProduct();
	void add_product_page();

private:
	vector < pair<string, string>> item_details;
	string arr1[5] = { "Prduct cataegory", "product name" , "product cost price", "product mrp","product description"};
	addProduct* c;
	

};

#endif // !ADD_PRODUCT_H
