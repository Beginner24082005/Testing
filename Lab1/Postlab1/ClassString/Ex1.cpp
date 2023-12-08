#include <iostream>
#include <cstring>

using namespace std;

string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(const string& s) {
    if (s.empty()) {
        return "";
    }

    string longest = "";
    for (int i = 0; i < s.length(); i++) {
        string palindrome1 = expandAroundCenter(s, i, i);
        if (palindrome1.length() > longest.length()) {
            longest = palindrome1;
        }

        string palindrome2 = expandAroundCenter(s, i, i + 1);
        if (palindrome2.length() > longest.length()) {
            longest = palindrome2;
        }
    }

    return longest;
}

int main() {
    string s;
    getline(cin, s);

    string result = longestPalindrome(s);

    cout << result << endl;

    return 0;
}