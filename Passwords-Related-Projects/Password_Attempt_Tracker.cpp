//Very Simple Basic Password Tracker

#include <iostream>
#include <string> 
using namespace std;
class Tracker
{

private:
    const string password = "mypass888"; //Enter Your Password Before Track
    const int max_attempts = 3;
    int attempts = 0;
    string input; 
    bool logged_in = false;

public:
    Tracker()
    {
        cout << "=*=*=* Password Attempt Tracker =*=*=*" << endl;
    }
    void Password()
    {
        while (attempts < max_attempts)
        {
            cout << endl;
            cout << "***** Enter Your Password : *****" << endl;
            cout << "Password : ";
            cin >> input;
            if (input == password)
            {
                logged_in = true;
                break;
            }
            else
            {
                attempts++;
                cout << "===== You Are Entering Wrong Password You Have Remaining only : " << (max_attempts - attempts) << " Attempts ===== " << endl;
            }
        }
        if (logged_in)
        {
            cout << endl;
            cout << "========== Login Successful ==========" << endl;
        }
        else
        {
            cout << endl;
            cout << "You Have No Attempts <=><=> Your Account Is Locked <=><=>" << endl;
        }
    }
};
int main()
{
    Tracker my;
    my.Password();
    return 0;
}