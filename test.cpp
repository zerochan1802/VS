#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], dem = 0, kt = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] - a[i] < k) dem++;
                else
                {
                    kt = 1;
                    break;
                }
            }
        }
        cout << dem << endl;
    }
}