class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen = 1;
        int start =0;
        int n = s.size();
        if(n<2) return s;
        for(int i = 0; i < n; i++) {
            int left = i;
            int right = i;

            while(left >= 0 && right < n && s[left] == s[right]) {
                if(maxlen < right - left + 1) {
                    maxlen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
        }

        for(int i = 0; i < n; i++) {
            int left = i;
            int right = i + 1;

            while(left >= 0 && right < n && s[left] == s[right]) {
                if(maxlen < right - left + 1) {
                    maxlen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
        }return s.substr(start,maxlen);


    }
    
};
