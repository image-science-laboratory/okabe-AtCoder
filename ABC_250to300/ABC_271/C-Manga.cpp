#include <algorithm>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
const double PI = 3.141592653589793;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long int              ll;
typedef vector<ll>                 vll;
typedef vector<vector<ll>>         vvll;
typedef vector<vector<vector<ll>>> vvvll;

int main() {
    ll  n;
    vll manga(n);
    rep(i, n) scanf("%lld", &manga[i]);

    vll syozi(n + 1, 0);
    rep(i, n) {
        syozi[manga[i]] += 1;
    }

    ll right = n;
    ll left  = 0;
    while (left <= right) {
        if (syozi[left] == 1) {
            left += 1;
            continue;
        } else if (syozi[left] == 0) {
        }
    }

    return 0;
}