#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, a, b, k;
    cin >> n >> m;
    vector<long long> v(n, 0);
    while (m--){
        cin >> a >> b >> k;
        v[a - 1] += k;
        v[b] -= k;
    }

    long max = v[0];
    for (int i = 1; i < n; i++){
        v[i] += v[i - 1];
        if (v[i] > max)
            max = v[i];
    }
    cout << max;
    return 0;
}