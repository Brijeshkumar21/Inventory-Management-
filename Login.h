#ifndef LOGIN_H
#define LOGIN_H
#include<string>
using namespace std;

class login
{
public:
    login();
    ~login();
    int display();
    bool input();
    bool verify(string, string, int*, int*);
    bool verify(string, string);
    void forget(int);

private:
    string uname, password;
    int f_un = 2, f_pwd = 2;

};


#endif // !LOGIN_H

