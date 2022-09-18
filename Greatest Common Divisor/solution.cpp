#include <iostream>

using namespace std;

int findGreatestCommonDivisor(int a, int b) {
    if(b == 0)
        return a;
    else
        return findGreatestCommonDivisor(b, a % b);
}

int main() {
    
    cout << findGreatestCommonDivisor(72, 9) << endl; // 9
    cout << findGreatestCommonDivisor(54, 8) << endl; // 2
    cout << findGreatestCommonDivisor(26, 5) << endl; // 1
    cout << findGreatestCommonDivisor(2, 1) << endl;  // 1
    cout << findGreatestCommonDivisor(1, 1) << endl;  // 1

    return 0;
}