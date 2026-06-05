// Last updated: 6/5/2026, 12:16:45 PM
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>> events;

        // Create events
        for (auto &b : buildings) {
            events.push_back({b[0], -b[2]}); // start
            events.push_back({b[1],  b[2]}); // end
        }

        // Sort events
        sort(events.begin(), events.end());

        multiset<int> heights;
        heights.insert(0);

        int prevMax = 0;
        vector<vector<int>> ans;

        for (auto &e : events) {
            int x = e.first;
            int h = e.second;

            if (h < 0) {
                heights.insert(-h);          // start building
            } else {
                heights.erase(heights.find(h)); // end building
            }

            int currMax = *heights.rbegin();
            if (currMax != prevMax) {
                ans.push_back({x, currMax});
                prevMax = currMax;
            }
        }

        return ans;
    }
};
