class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            
            if( haystack.length()<needle.length())
            {
                return -1;
            }

            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};