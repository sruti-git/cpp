#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, remainder;
    cin >> dividend;
    cin >> divisor;
if (divisor == 0) {
        cout << "Division by zero is not allowed!" << endl;
    } else {
        remainder = dividend % divisor;
        cout << remainder << endl;
    }
return 0;
}
