#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>
const double PI = 3.141592653589793;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long int ll;
using namespace std;

class RingBuffer {
 public:
  ll max_size = 100000000;  // 10^8
  ll* buff;
  ll top = 0;
  ll bottom = 0;
  ll size = 0;

  RingBuffer() { buff = new ll[max_size]; }
  RingBuffer(ll n) {
    buff = new ll[n];
    max_size = n;
  }

  void push_back(ll n) {
    bottom = (bottom + 1) % max_size;
    buff[bottom] = n;
    size += 1;
  }

  void push_front(ll n) {
    top = (top - 1) % max_size;
    if (top < 0) top = max_size + top;
    buff[top] = n;
    size += 1;
  }

  ll pop_back() {
    ll ret = buff[bottom];
    bottom = (bottom - 1) % max_size;
    if (bottom < 0) bottom = max_size + bottom;
    size -= 1;
    return ret;
  }

  ll pop_front() {
    ll ret = buff[top];
    top = (top + 1) % max_size;
    size -= 1;
    return ret;
  }

  ll back() { return buff[bottom]; }

  ll front() { return buff[top]; }
}

int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;

  return 0;
}