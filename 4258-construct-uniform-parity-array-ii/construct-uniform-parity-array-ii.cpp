class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minNum = *min_element(nums1.begin(), nums1.end());

        if (minNum & 1) {
            return true;
        }

        for (int n : nums1) {
            if (n & 1) {
                return false;
            }
        }

        return true;
    }
};