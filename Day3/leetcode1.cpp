#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int prod = 1;
    int sum = 0;
    while (n != 0) {
        prod *= (n % 10);  // Multiply prod by the last digit
        sum += (n % 10);   // Add the last digit to sum
        n = n / 10;        // Remove the last digit
    }
    return prod - sum;       // Return the difference between product and sum
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = subtractProductAndSum(n);
    cout << "Result: " << result << endl;
    
    return 0;
}
