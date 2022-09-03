class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> mp(256 , -1);
        int n = s.size();
        int left = 0 , right = 0;
        int len = 0;

        while (right < n) {

            if (mp[s[right]] != -1) left = max(mp[s[right]] + 1 , left);

            mp[s[right]] = right;

            len = max(len , right - left + 1);
            right++;

        }
        return len;

    }
};

class Solution {
public:
    int strongest_password(Node* head) {
        vector<int> mp(256 , -1);
        int left = 0 , right = 0;
        int len = 0;
        Node* temp = head;
        string s;

        while (temp != NULL) {
            s = s + (temp->value);
            temp = temp->next;
        }
        int n = s.length();

        while (right < n) {

            if (mp[s[right]] != -1) left = max(mp[s[right]] + 1 , left);

            mp[s[right]] = right;

            len = max(len , right - left + 1);
            right++;

        }
        return len;

    }
};