#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string replaceSpaces(string S, int length) {
        int cnt = 0;
        for (int i=0; i<length; i++) {
            if (S[i]==' ') 
                cnt++;
        }
        // double pointer, fill from right side
        int j = length + cnt*2 - 1;
        for (int i=length-1; i>=0; i--) {
            if (S[i]==' ') {
                S[j--] = '0';
                S[j--] = '2';
                S[j--] = '%';
            } else S[j--] = S[i];
        }
        // trim the tailing spaces if any
        return S.substr(0, length + cnt*2);
    }
};

int main() {
    string S = "ds sdfs afs sdfa dfssf asdf             ";
    int len = 27;

    string rst = Solution().replaceSpaces(S, len);

    cout << rst << endl;

    return 0;

}