#include <iostream>
using namespace std;

int main() {
    
    cout << "Please enter temperature in Celsius Degrees: " <<endl;
    double celsius = 0;
    cin >> celsius;
    cout << celsius << " in Degrees Fahrenheit is: " <<endl;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << fahrenheit << endl;

    return 0;
}
