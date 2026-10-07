#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n;
    cin >> n;
    
    string invertido = n;
    reverse(invertido.begin(), invertido.end());
    
    if (n == invertido) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No es capicua" << endl;
    }
    
    return 0;
}
