// https://codeforces.com/problemset/problem/460/B
#include <iostream>
#include <vector>
using namespace std;

typedef long long Long;

Long sumDigits(Long number) {
    if (number < 10) return number;
    return number%10 + sumDigits(number/10); 
}

int main(void) {
    Long a, b, c; cin >> a >> b >> c;

    Long numberSolutions = 0;
    vector<Long> solutions;

    for (Long i = 1LL; i <= 81LL; i++) {
        Long possibleSumDigits = i;

        Long possibleSumPowered = possibleSumDigits;
        for (int j = 0; j < a-1; j++) { // s(x) ^ a
            possibleSumPowered *= possibleSumDigits;
        }
        Long possibleX = b * possibleSumPowered + c;

        if (sumDigits(possibleX) == possibleSumDigits && possibleX < 1000000000 && possibleX > 0) {
            numberSolutions += 1;
            solutions.push_back(possibleX);
        }
    }

    cout << numberSolutions << endl;

    if (numberSolutions > 0) {
        for (Long solution : solutions) {
            cout << solution << " ";
        }
    }
}