#include <iostream>

using namespace std;


int findNthTerm(int n) {
    if (n == 1) {
        return 10; 
    }
    return 4 * findNthTerm(n - 1); 
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = findNthTerm(n);
    cout << "The " << n << "-th term in the sequence is: " << result << endl;

    return 0;
}
