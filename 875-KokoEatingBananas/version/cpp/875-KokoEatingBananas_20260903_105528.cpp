// Last updated: 9/3/2026, 10:55:28 AM
1class Solution {
2public:
3    int minEatingSpeed(vector<int>& piles, int h) {
4        int low = 1;
5        int high = *max_element(piles.begin(), piles.end());
6        while (low <= high) {
7            int mid = low + (high - low) / 2;
8            long long hours = 0;
9            for (int i : piles) hours += (i + mid - 1) / mid;
10
11            if (hours <= h)high = mid - 1;   // Try a slower speed
12            else low = mid + 1;    // Need a faster speed
13        }return low;
14    }
15};