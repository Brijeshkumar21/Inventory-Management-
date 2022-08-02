#include<iostream>
#include<istream>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <vector>
#include <string>
#include<cstdlib>
#include<fstream>
#include"Login.h"
#include"registration.h"
#include"dashboard.h"

using namespace std;

void saveInfo(string x, string a[]) {
	ofstream s;
	s.open(x, ios::out | ios::app);
	for (int i = 0; i < a->length(); i++) {
		s << a[i] << "," << endl;
	}
	s.close();
}


int main() {
     login log;
     switch (int x = log.display())
     {
         case 1:
             {
                 if (log.input()) {
                     system("cls");
                     dashboard dash;
                     dash.displayDash();
                 }
                 break;
             }
         case 2:
         {
             registration reg;
             bool b = reg.regiPage();
             if (b) 
             {
                 system("cls");
                 if (log.input()) {
                     system("cls");
                     dashboard dash;
                     dash.displayDash();
                 }
                 
             }
         }
             break;
             
     }
	
	
	return 0;
}