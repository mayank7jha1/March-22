class Solution {
public:
    int mySqrt(int x) {
        long long int ans = 0;
        long long int s = 1, e = x;
        while (s <= e) {
            long long int mid = (s + e) / 2;
            if ((long long int)(mid * mid) <= x) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};