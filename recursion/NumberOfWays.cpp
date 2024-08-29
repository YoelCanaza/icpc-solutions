#include <iostream>
using namespace std;

typedef long long Long;

int numberOfWays(int s, int e) {
    if (e == s) return 1;
    else if (e < s) return 0;
    
    return numberOfWays(s, e-1) + numberOfWays(s, e-2) + numberOfWays(s, e-3);
}

int main(void) {
    int s, e;
    cin >> s >> e;

    cout << numberOfWays(s, e) << endl;
}