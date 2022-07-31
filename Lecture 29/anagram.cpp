
class Solution {
public:
	bool isAnagram(string s, string t) {
		unordered_map<char, int>m;

		if (s.length() != t.length()) {
			return false;
		}
		for (int i = 0; i < s.length(); i++) {
			m[s[i]]++;
		}

		/*
		map:::::   car        rat

				t[i] = r;
		m:						m ke ander a ki koi frequency hain ?

				c = 1
				    a = 0
				        r = 0
				        t=0
				        z=0
				        y=0*/

		for (int i = 0; i < t.length(); i++) {
			//t[i]='c' and m[c]==0;
			if (m[t[i]] >= 1) {
				m[t[i]]--;
			} else {
				return false;
			}
		}

		return true;

	}
};
