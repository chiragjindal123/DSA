#include <iostream>
#include <vector>
using namespace std;

vector<int> computePrefixFunction(const vector<int> &pattern)
{
    int m = pattern.size();
    vector<int> prefix(m, 0);
    int k = 0;

    for (int i = 1; i < m; ++i)
    {
        while (k > 0 && pattern[i] != pattern[k])
        {
            k = prefix[k - 1];
        }
        if (pattern[i] == pattern[k])
        {
            ++k;
        }
        prefix[i] = k;
    }

    return prefix;
}

int KMPSearch(const vector<int> &text, const vector<int> &pattern)
{
    int n = text.size();
    int m = pattern.size();
    if (m == 0)
        return 0;
    vector<int> prefix = computePrefixFunction(pattern);
    int count = 0;
    int q = 0;

    for (int i = 0; i < n; ++i)
    {
        while (q > 0 && text[i] != pattern[q])
        {
            q = prefix[q - 1];
        }
        if (text[i] == pattern[q])
        {
            ++q;
        }
        if (q == m)
        {
            count++;
            q = prefix[q - 1];
        }
    }

    return count;
}

int main()
{
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    vector<int> b(w);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < w; ++i)
    {
        cin >> b[i];
    }

    if (w == 1)
    {
        cout << n << endl;
        return 0;
    }

    vector<int> da(n - 1);
    vector<int> db(w - 1);

    for (int i = 0; i < n - 1; ++i)
    {
        da[i] = a[i + 1] - a[i];
    }

    for (int i = 0; i < w - 1; ++i)
    {
        db[i] = b[i + 1] - b[i];
    }

    int result = KMPSearch(da, db);
    cout << result << endl;

    return 0;
}