#include<iostream>

using namespace std;

// Function
double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

// Function 
double nterm(int n) {
    return 1.0 / power(n, n);
}

// Function
double calculateSum(int term) {
    double sum = 0.0;

    cout << fixed;

    for (int i = 1; i <= term; ++i) {
        double term = nterm(i);
        sum += term;
        cout << "1/" << i << "^" << i << " = " << term << endl;
    }
    return sum;
}

int main() {
    int term;

    cout << "enter the value for nth term: ";
    cin >> term;

    double sum = calculateSum(term);

    cout << "the sum of the series up to " << term << " terms is: " << sum << endl;

    return 0;
}
