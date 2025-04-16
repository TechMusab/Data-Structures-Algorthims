#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) {  // Check if the least significant bit is 1
            count++;
        }
        n = n >> 1;  // Right shift n to check the next bit
    }
    return count;  // Return the total number of 1s
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = hammingWeight(n);
    cout << "Hamming Weight: " << result << endl;
    
    return 0;
}
