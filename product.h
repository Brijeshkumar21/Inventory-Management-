#ifndef PRODUCT_H
#define PRODUCT_H
#include"add_product.h"
#include"delete_Product.h"
#include"search_product.h"
#include"update_product.h"
#include"show_product.h"

class product : private addProduct, private deleteProduct, private updateProduct, private searchProduct, private showItem
{
public:
	product();
	~product();
	void dispalyprod();

private:

};



#endif // !PRODUCT_H

