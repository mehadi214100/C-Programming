// code by mehadi 
#include<bits/stdc++.h>
using namespace std;

double my_sqrt(double x) {
    if (x < 0) {
        throw invalid_argument("Cannot compute square root of a negative number.");
    }
    return sqrt(x);
}

int main() {
    double x;
    cout << "Enter a number: ";
    cin >> x;
    try {
        double result = my_sqrt(x);
        cout << "The square root of " << x << " is " << result << endl;
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
