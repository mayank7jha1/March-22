class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0; int j = s.length() - 1;
        while (i <= j) {
            if (isalnum(s[i]) and isalnum(s[j])) {
                s[i] = tolower(s[i]);
                s[j] = tolower(s[j]);
                if (s[i] != s[j]) {
                    return false;
                } else {
                    i++, j--;
                }
            } else if (isalnum(s[i])) {
                j--;
            } else if (isalnum(s[j])) {
                i++;
            } else {
                i++, j--;
            }
        }
        return true;
    }
};