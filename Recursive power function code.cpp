#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
long long power(long long x, long long y)
{
    if (y == 1)
        return x;
    return x * power(x, y - 1);
}
signed main(void)
{
    system("cls");
    auto start = high_resolution_clock::now();

    long long x, y;
    cin >> x >> y;
    for (long long i = 0; i < 500'000; i++)
        power(x, y);

    auto end = high_resolution_clock::now();
    cout << duration<double, milli>(end - start).count() << "ms" << '\n';
    return 0;
}