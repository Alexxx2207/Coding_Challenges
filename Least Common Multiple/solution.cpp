#include <iostream>

using namespace std;

int findGreatestCommonDivisor(int a, int b) {
    if(b == 0)
        return a;
    else 
        return findGreatestCommonDivisor(b, a % b); 
}

int findLeastCommonMultiple(int a, int b) {
    return (a / findGreatestCommonDivisor(a, b)) * b;
}

int main() {

    cout << findLeastCommonMultiple(4, 5) << endl;
    cout << findLeastCommonMultiple(8, 12) << endl;
    cout << findLeastCommonMultiple(30, 65) << endl;
    cout << findLeastCommonMultiple(40, 5) << endl;

    return 0;
}