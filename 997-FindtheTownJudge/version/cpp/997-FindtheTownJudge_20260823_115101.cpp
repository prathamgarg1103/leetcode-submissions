// Last updated: 8/23/2026, 11:51:01 AM
1class Solution {
2public:
3    int findJudge(int n, vector<vector<int>>& trust) {
4        vector<int> score(n + 1, 0);
5
6        for (auto edge : trust) {
7            int person = edge[0];
8            int trustedPerson = edge[1];
9
10            score[person]--;
11            score[trustedPerson]++;
12        }
13
14        for (int person = 1; person <= n; person++) {
15            if (score[person] == n - 1)
16            return person;
17        }
18        return -1;
19    }
20};