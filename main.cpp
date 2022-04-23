#include <iostream>
#include <cstdlib>

// Start
//     Declarations
//       num amount
//       num newAmount
//       num interestRate
//     output "Please enter the dollar amount.   "
//     input amount
//     output "Please enter the interest rate(e.g., nine percet should be
// entered as 9.0).   "
//     input interestRate
//     newAmount = FutureValue(amount,interestRate)
//     output "The new dollar amount is ", newAmount
// Stop
//
//
//
// num FutureValue(num initialAmount, num interestRate)
//     Declarations
//       num finalAmount
//     finalAmount = (1 + interestRate/100) * initialAmount
// return finalAmount

using namespace std;

double FutureValue(double initialAmount, double interestRate);

int main() {
    double amount;
    double newAmount;
    double interestRate;
    cout << "Please enter the dollar amount --> ";
    cin >> amount;
    cout << "Please enter the interest rate (e.g. percent should be entered as 9.0). ";
    cin >> interestRate;
    newAmount = FutureValue(amount, interestRate);
    cout << "The new dollar amount is " << newAmount << endl;
    system("PAUSE");
    return 0;
}

double FutureValue(double initialAmount, double interestRate) {
    double finalAmount;
    finalAmount = ((1 + (interestRate/100)) * initialAmount);
    return finalAmount;
}
