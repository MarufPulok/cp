#include <bits/stdc++.h>
using namespace std;
long long m_health, m_attack, c_health, c_attack, k, w, a;
void game()
{

    // long long c_health, c_attack;
    cin >> c_health >> c_attack;
    // long long m_health, m_attack;
    cin >> m_health >> m_attack;
    // long long k, w, a;
    cin >> k >> w >> a;//k a h

    for (long long i = 0; i <= k; i++)
    {
        long long c_strength = (c_health + i* a - 1)/m_attack;
        long long m_strength = (m_health - 1) / (c_attack + (k-i) * w);

        if (c_strength >= m_strength)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        game();
    }
}