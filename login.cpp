#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string user, un;
string password, pw;


bool isLoggedIn() {
cout << "Enter your username: " << endl;
cin >> user;
cout << "Enter a password: " << endl;
cin >> password;

ifstream read("data\\" + user + ".txt");
getline(read, un);
getline(read, pw);

if (un == user && pw == password){
    return true;
} else {
    return false;
}
}



int main (){
    int regchoice;
    cout << "1: Register" << "\n" << "2: Login\nYour choice: ";
    cin >> regchoice;

    if (regchoice == 1){
        string user, password;
        cout << "select a username: ";
        cin >> user;
        cout << "select a password: ";
        cin >> password;

        ofstream file;
        file.open("data\\" + user + ".txt");
        file << user << endl << password;
        file.close();
        main();
    } else if (regchoice == 2){
        bool status = isLoggedIn();

        if(!status){
            cout << "False Login" << endl;
            system("PAUSE");
            return 0;
        } else {
            cout<< "Successfully Logged In" << endl;
            system("PAUSE");
            return 1;
        }
    }
    
    
    return 0;
}