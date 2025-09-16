#include <iostream>
#include <string>
using namespace std;

int findPattern(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    for(int i = 0; i <= n - m; i++) {
        bool match = true;
        for(int j = 0; j < m; j++) {
            if(text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if(match) return i;
    }
    return -1;
}

int main() {
    string text1 = "hello world";
    string pattern1 = "hello";
    cout << "Pattern '" << pattern1 << "' in '" << text1 << "' at: " << findPattern(text1, pattern1) << endl;
    string text2 = "hello world";
    string pattern2 = "world";
    cout << "Pattern '" << pattern2 << "' in '" << text2 << "' at: " << findPattern(text2, pattern2) << endl;
    string text3 = "hello world";
    string pattern3 = "abc";
    cout << "Pattern '" << pattern3 << "' in '" << text3 << "' at: " << findPattern(text3, pattern3) << endl;
    string text4 = "hello world";
    string pattern4 = "";
    cout << "Pattern '" << pattern4 << "' in '" << text4 << "' at: " << findPattern(text4, pattern4) << endl;
    return 0;
}