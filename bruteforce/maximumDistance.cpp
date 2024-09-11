// https://codeforces.com/gym/102951/problem/A
#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

void solve(void) {
    int n; cin >> n;
    vector<Point> points(n);
    for (Point &pX : points) {
        cin >> pX.x;
    }

    for (Point &pY : points) {
        cin >> pY.y;
    }

    int maxSquared = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int dx = points[j].x - points[i].x;
            int dy = points[j].y - points[i].y;

            int square = dx*dx + dy*dy;
            if (square > maxSquared) maxSquared = square;
        }
    }

    cout << maxSquared;
}

int main(void) {
    solve();
}
