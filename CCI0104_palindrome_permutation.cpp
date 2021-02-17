#include <string>

using namespace std;

class Solution {
public:
    bool canPermutePalindrome(string s) {
        // A != a
        int cnt[128] = {0};
        for (char c : s)
            cnt[c] += 1;
        
        int odds = 0;
        for (int i=0; i<128; i++)
            if (cnt[i]%2==1)
                odds++;
                if (odds>1)
                    return false;
        
        return true;
    }
};