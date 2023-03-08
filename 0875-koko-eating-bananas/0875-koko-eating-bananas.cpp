class Solution {
public:
   bool check(vector<int> piles, int k, int h) {
        int hours = 0;
        for (int& i : piles) {
            if (i < k) hours++;
            else {
                hours += i/k;
                if (i%k) hours++;
            }
            if (hours > h) return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end()), m;
        while (l < r) {
            m = l + (r-l)/2;
            if (check(piles, m, h)) {
                r = m;
            }
            else l = m + 1;
        }
        return l;
    }
};