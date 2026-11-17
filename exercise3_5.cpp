#include <iostream>

using namespace std;

int main() {
    double dec1 = 0;
    int int1 = 0;
    int int2 = 0;
    double dec2 = 0;

    cout << "Type: 56.50 67 48 62.72 and press Enter:\n";
    
    // This reads them in order
    cin >> dec1 >> int1 >> int2 >> dec2;

    cout << "\nSee what each variable caught:\n";
    cout << "dec1: " << dec1 << endl;
    cout << "int1: " << int1 << endl;
    cout << "int2: " << int2 << endl;
    cout << "dec2: " << dec2 << endl;

    return 0;
}
