#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }
        int n = clean.length();
        int i=0;
        for(i; i<n; i++){
            if(i>=n/2) return true;
            if(clean[i] != clean[n-i-1]){
                return false;
            }
}
return true;
}
};
