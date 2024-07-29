#include <bits/stdc++.h>
using namespace std;

int N, M, X;
int H[100001];

void solve()
{
  cin >> N >> M >> X;
  cout << "YES" << endl;
  set<pair<int, int>> s;
  for (int i = 1; i <= M; i++)
    s.insert({0, i});
  for (int i = 0; i < N; i++)
  {
    cin >> H[i];
    pair<int, int> p = *s.begin();
    s.erase(p);
    cout << p.second << ' ';
    s.insert({p.first + H[i], p.second});
  }
  cout << endl;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
    solve();
}





// import heapq

// for _ in range(int(input())):
//     n, m, x = map(int, input().split())
//     heights = [int(i) for i in input().split()]

//     indexed_heights = list(enumerate(heights))
//     indexed_heights.sort(key=lambda x: x[1], reverse=True)

//     ans = [0] * n

//     min_heap = [(0, i) for i in range(m)]
//     heapq.heapify(min_heap)

//     print("YES")

//     for i, height in indexed_heights:
//         current_height, block_index = heapq.heappop(min_heap)
//         ans[i] = block_index + 1
//         heapq.heappush(min_heap, (current_height + height, block_index))

//     print(" ".join(map(str, ans)))
