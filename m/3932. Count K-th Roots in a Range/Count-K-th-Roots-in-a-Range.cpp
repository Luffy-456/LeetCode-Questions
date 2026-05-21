1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    int countKthRoots(int l, int r, int k) {
7        tuple<int, int, int> s = {l, r, k};
8        auto [lo, hi, power] = s;
9
10        if (power == 1) return hi - lo + 1;
11
12        int c = 0;
13
14        long long x_max = (long long)pow((double)hi, 1.0 / power) + 2;
15
16        for (long long x = 0; x <= x_max; x++) {
17            long long y = 1;
18            bool over = false;
19
20            for (int i = 0; i < power; i++) {
21                y *= x;
22                if (y > hi) { over = true; break; }
23            }
24
25            if (over) break;
26            if (y >= lo) c++;
27        }
28
29        return c;
30    }
31};