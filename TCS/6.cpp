#include <bits/stdc++.h>
using namespace std;

// function to calculate final amount
double calculateAmount(double amt) {
    double discount = 0;

    if (amt < 1000) discount = 0.05 * amt;
    else if (amt < 5000) discount = 0.10 * amt;
    else discount = 0.15 * amt;

    return amt - discount;
}

int main() {
    double amt;

    if (!(cin >> amt) || amt < 0) {
        cout << "Invalid input";
        return 0;
    }

    double result = calculateAmount(amt);

    cout << fixed << setprecision(2) << result;

    return 0;

}
