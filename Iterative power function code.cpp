#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

long long power(long long x, long long y)
{
    long long power = 1;
    for (long long i = 0; i < y; i++)
        power *= x;
    return power;
}
signed main(void)
{
    system("cls");
    auto start = high_resolution_clock::now();

    long long x, y;
    cin >> x >> y;
    for (size_t i = 0; i < 500'000; i++)
        power(x, y);
    cout << power(x, y) << '\n';

    auto end = high_resolution_clock::now();
    cout << duration<double, milli>(end - start).count() << "ms" << '\n';
    return 0;
}