// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2842
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

void constraints(int n, int m) {
    vector<int> teens(n);
    iota(teens.begin(), teens.end(), 0); 

    vector<int> va(m);
    vector<int> vb(m);
    vector<int> vc(m);

    for (int i = 0; i < m; i++) {
        cin >> va[i] >> vb[i] >> vc[i];
    }

    int cont = 0;
    do {
        bool isPossible = true;
        for (int i = 0; i < m; i++) {
            auto ta = find(teens.begin(), teens.end(), va[i]);
            auto tb = find(teens.begin(), teens.end(), vb[i]);
            int distancia = abs(distance(ta, tb));

            if (vc[i] > 0) {
                if (!(distancia <= vc[i])) isPossible = false;
            } else if (vc[i] < 0) {
                if (!(distancia >= abs(vc[i]))) isPossible = false;
            }
        }
        if (isPossible) cont += 1;
    } while (next_permutation(teens.begin(), teens.end()));

    cout << cont << endl;

}

int main(void) {
    int n, m;
    cin >> n >> m;

    while (n != 0 || m != 0) {
        constraints(n, m);
        cin >> n >> m;
    }
      
}