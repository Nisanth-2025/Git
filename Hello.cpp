#include <iostream>
using namespace std;

int Calc(int a, int b, int c) {
    return a * b * c;
}

int main() {
    int num1, num2, num3, sum;
    
    cout << "Enter the 1st Number: ";
    cin >> num1;
    cout << "Enter the 2nd Number: ";
    cin >> num2;
    cout << "Enter the 3rd Number: ";
    cin >> num3;
    cout << "The product is: " << Calc(num1, num2, num3) << endl;
    
    return 0;
}
