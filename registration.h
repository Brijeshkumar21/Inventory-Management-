#ifndef REGISTRATION_H
#define REGISTRATION_H
#include"Login.h"
#include<vector>
#include<string>

class registration : public login
{
public:
    registration();
    ~registration();
    bool regiPage();


private:
    string arr1[8] = { "First name", "Last name" , "Username", "mobile number","Email-ID", "Security question:: name of your school", "Choose password", "Confirm password" };
    string s1[2];
    int status = 0;
    vector<pair<string, string>> v;
    vector<pair<string, string>>::iterator it;

};

#endif // !REGISTRATION_H