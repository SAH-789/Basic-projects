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
        cout<<"============================"<<endl;
        cout<< " Password Attempt Tracker" << endl;
        cout<<"============================"<<endl;
    }
    void Password()
    {
        while (attempts < max_attempts)
        {
            cout << endl;
            cout<<"Username : Hadi"<<endl;
            cout<<"Password : ";
            cin >> input;
            if (input == password)
            {
                logged_in = true;
                break;
            }
            else
            {
                attempts++;
                cout<<endl;
                cout<<"===== Authenticating ..........."<<endl;
                cout <<"You Are Entering Wrong Password You Have Remaining only : " << (max_attempts - attempts) << " Attempts ===== " << endl;
            }
        }
        if (logged_in)
        {
            cout << endl;
            cout<<"== Authenticating ..........."<<endl;
            cout<<"==================="<<endl;
            cout<<"  Login  Successful "<<endl;
            cout<<" =>=>=> Welcome =>=>=> "<<endl;
            cout<<"==================="<<endl; 
        }
        else
        {
            cout << endl;
            cout<<"======================="<<endl;
            cout << "You Have No Attempts\nYour Account Is Locked ! " << endl;
            cout<<"======================="<<endl;
        }
    }
};
int main()
{
    Tracker my;
    my.Password();
    return 0;
}
