#include"registration.h"
#include<iostream>

using namespace std;

registration::registration()
{
    system("cls");
    cout << "\t\t\t Register to become a part of this family.\n\n\n"
        << endl
        << "Please provide the following information\n\n"
        << endl;
}

registration::~registration()
{
}

bool registration::regiPage()
{
    int k = 7, j = 0;
    for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
    {

        string s;
        cout << arr1[i] << " - ";
        cin >> s;
        if (i == 6) {
            s1[0] = s;
        }
        if (i == 7) {
            s1[1] = s;
        }
        
        v.push_back(make_pair(arr1[i], s));
    }
    if (s1[0].compare(s1[1]) == 0)
    {
        cout << "password match"
            << endl;
        v.push_back(make_pair(arr1[7], s1[0]));
        return true;
    }
    else
    {
        cout << "password not match"
            << endl;
        cout << "choose password" << s1[0] << "\tconfirm passsword" << s1[1] << endl;
        return false;
    }
}
