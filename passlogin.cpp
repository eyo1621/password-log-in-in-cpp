#include <iostream>
#include <string> 

using namespace std;

int main() {
    
    cout << "====================eyobs software====================" << endl;

    string password = "11234";
    string x;

    for (int i = 0; i < 5; i++) {
        cout << "Enter your password: ";
        cin >> x;

        if (password == x) {
            cout << "Welcome yane qonjo" << endl;
            break; 
        } 
        else {
            
            cout << "tasasteshal leba hula" << endl;

            if (i == 4) {
                cout << "Sorry, you are limited." << endl;
            }
        } 
    }

    return 0;
}