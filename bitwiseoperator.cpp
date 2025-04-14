#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a & b = " << (a & b) << endl; // Bitwise AND
    cout << "a | b = " << (a | b) << endl; // Bitwise OR
    cout << "!a = " << (!a) << endl;       // Logical NOT
    cout << "a ^ b = " << (a ^ b) << endl; // Bitwise XOR
    cout << (17 << 2) <<endl; //left shift
    cout<< (17>>2) <<endl;  //right shift
    return 0;
}
