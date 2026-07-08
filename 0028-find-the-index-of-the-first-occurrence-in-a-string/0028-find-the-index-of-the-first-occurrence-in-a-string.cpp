class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int haystackLength = haystack.length();
        int needleLength = needle.length();

        if (needleLength > haystackLength) {
            return -1;
        }

        for (int startIndex = 0; startIndex <= haystackLength - needleLength; startIndex++) {
            if (haystack.substr(startIndex, needleLength) == needle) {
                return startIndex;
            }
        }

        return -1;
    }
    
};