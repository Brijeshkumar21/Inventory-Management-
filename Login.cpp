#include "Login.h"
#include<iostream>
#include<string>

using namespace std;

login::login()
{
	cout << "\n\n\n\t\t\t\tWELCOME TO INVENTORY MANAGEMENT SYSTEM\n\n\n\n"
		<< endl;
}

login::~login()
{
}

bool login::input()
{
    cout << "username :: ";
    cin >> uname;
    cout << "Password :: ";
    cin >> password;
    bool x = verify(uname, password, &f_un, &f_pwd);

    if (x != true && f_un == 1) {
        int y;
        cout << "\t\t\t incorrect username!!!" << endl;
        cout << "1.\t retry" << endl;
        cout << "2.\t forgot Usernaame" << endl;
        cin >> y;
        if (y == 1) {
            input();
        }
        if (y == 2) {
            forget(1);
        }
    }
    else if (x != true && f_pwd == 1) {
        int y;
        cout << "\t\t\tincorect password!!!" << endl;
        cout << "1.\t retry" << endl;
        cout << "2.\t forgot Usernaame" << endl;
        cin >> y;

        if (y == 1) {
            input();
        }
        if (y == 2) {
            forget(2);
        }
    }
    else if (x == true && f_un == 0 && f_pwd == 0) {
        cout << "congratulations login successfull..." << endl;
        return true;
    }
    else {
        cout << "Something went wrong. " << endl;
        return false;
    }
}

bool login::verify(string name, string password, int* f_n, int* f_p)
{
    (name.compare("brijesh") == 0) ? *f_n = 0 : *f_n = 1;
    (password.compare("885131") == 0) ? *f_p = 0 : *f_p = 1;
    if (*f_n == 0 && *f_p == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool login::verify(string pass, string c_pass )
{
    return (pass.compare(c_pass) == 0) ? true : false;
}

void login::forget(int c)
{
    int forget_param = c;
    string ph, ans;
    if (forget_param == 1) {
        cout << "Enter your mobile number - ";
        cin >> ph;
        cout << "Answer the security question - \nWhat is the name of your school - ";
        cin >> ans;
        if (ph.compare("8851312980") == 0 && ans.compare("ipu") == 0) {
            cout << "Your user name is 'brijesh'.\n\n\n" << "Login to continue";
            input();
        }
    }
    else if(forget_param == 2)
    {
        cout << "Enter your mobile number - ";
        cin >> ph;
        cout << "Answer the security question - \nWhat is the name of your school - ";
        cin >> ans;
        if (ph.compare("8851312980") == 0 && ans.compare("ipu") == 0) {
            cout << "Your password is '885131'.\n\n\n"<<"Login to continue";
            input();
        }
        else
        {
            cout << "Invalid input!!!" << endl;
            input();
        }
    }
}

int login::display() {
	int x = 0;
	cout << "1.\t login to continue" << endl;
	cout << "2.\t Register now" << endl;
	cin >> x;
	return x;
}
