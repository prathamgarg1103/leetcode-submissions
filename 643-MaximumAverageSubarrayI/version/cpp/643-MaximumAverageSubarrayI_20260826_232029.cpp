// Last updated: 8/26/2026, 11:20:29 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        double ans=0;
5        double avg=0;
6        for(int i=0;i<k;i++){
7            avg+=nums[i];
8        }
9        ans=avg;
10        int j=0;
11        for(int i=k;i<nums.size();i++){
12            avg=avg-nums[j]+nums[i];
13            ans=max(ans,avg);
14            j++;
15        }
16        return ans/(double)k;
17    }
18};