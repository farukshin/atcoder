// https://atcoder.jp/contests/abc177/tasks/abc177_e
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SieveOfEratosthenes : std::vector<int>
{
    std::vector<int> primes;
    SieveOfEratosthenes(int MAXN) : std::vector<int>(MAXN + 1)
    {
        std::iota(begin(), end(), 0);
        for (int i = 2; i <= MAXN; i++)
        {
            if ((*this)[i] == i)
            {
                primes.push_back(i);
                for (int j = i; j <= MAXN; j += i)
                    (*this)[j] = i;
            }
        }
    }
    using T = long long int;

    std::map<T, int> Factorize(T x)
    {
        assert(x <= 1LL * (int(size()) - 1) * (int(size()) - 1));
        std::map<T, int> ret;
        if (x < int(size()))
        {
            while (x > 1)
            {
                ret[(*this)[x]]++;
                x /= (*this)[x];
            }
        }
        else
        {
            for (auto p : primes)
            {
                while (!(x % p))
                    x /= p, ret[p]++;
                if (x == 1)
                    break;
            }
            if (x > 1)
                ret[x]++;
        }
        return ret;
    }
    std::vector<T> Divisors(T x)
    {
        std::vector<T> ret{1};
        for (auto p : Factorize(x))
        {
            int n = ret.size();
            for (int i = 0; i < n; i++)
            {
                for (T a = 1, d = 1; d <= p.second; d++)
                {
                    a *= p.first;
                    ret.push_back(ret[i] * a);
                }
            }
        }
        return ret; // Not sorted
    }

    std::vector<int> GenerateMoebiusFunctionTable()
    {
        std::vector<int> ret(size());
        for (int i = 1; i < int(size()); i++)
        {
            if (i == 1)
                ret[i] = 1;
            else if ((i / (*this)[i]) % (*this)[i] == 0)
                ret[i] = 0;
            else
                ret[i] = -ret[i / (*this)[i]];
        }
        return ret;
    }
};
SieveOfEratosthenes sieve(1000000);

void solve()
{
    ll n, g;
    cin >> n;
    vector<ll> v(n + 5), cnt(1000005);
    bool success = true;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            g = v[i];
        else
            g = __gcd(g, v[i]);

        for (auto p : sieve.Factorize(v[i]))
            if (++cnt[p.first] > 1)
                success = false;
    }

    if (!success && g == 1)
        cout << "setwise coprime";
    else if (!success && g != 1)
        cout << "not coprime";
    else if (success)
        cout << "pairwise coprime";
}

int main()
{
    solve();
    return 0;
}
