class Solution {
public:
    bool isPalindrome(string s) {
        
        int start = 0;
        int end = s.length() - 1;

        while (end > start)
        {
            while (start < s.length() && !isalnum(s[start]))
                start++;
            
            while (end >=0 && !isalnum(s[end]))
                end--;
            
            if (tolower(s[start++]) != tolower(s[end--]))
                return false;
        }
        return true;
    }
};
