#include <iostream>
using namespace std;

typedef long long Long;

const char ZERO = '0';
const char ENDL = '\n';
const Long TEN = 10;

Long sumDigits(Long n) {
    if (n < TEN) return n;
    return n%10 + sumDigits(n/10);
}

int main(void) {
    string n;


    while (cin >> n) {
        if (n == "0") break;
        
        int count = 0;

        Long sumDig = 0;
        for (char c : n) {
            sumDig += c - ZERO;
        }
        count += 1;

        while (sumDig > TEN) {
            sumDig = sumDigits(sumDig);
            count += 1;
        }

        if (sumDig == 9) cout << n << " is a multiple of 9 and has 9-degree " << count << "." << endl;
        else cout << n << " is not a multiple of 9." << endl;

    }
}