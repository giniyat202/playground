#include <iostream>

using namespace std;

int main(){
    string n;
    while (cin >> n){
        if (n == "42")
            break;
        cout << n << endl;
    }
    return 0;
}