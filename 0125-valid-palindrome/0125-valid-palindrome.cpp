class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])) str+=tolower(s[i]);
        }

        int n = str.size();
        for(int i=0; i<n; i++){
            if(str[i]!=str[n-i-1]) return false;
        }
        return true;
    }
};

//tc=O(m) where m is the length of the new string and here loop runs till n/2 so m is the dominant thing here


/*
Using += instead of str = str + ... is generally preferred in C++ because of efficiency and readability. Here's why:

1. Efficiency:
When you write str = str + tolower(s[i]);:

A new temporary string is created to store the result of str + tolower(s[i]).
This temporary string is then assigned to str, replacing the original string.
The previous str is discarded, which incurs extra memory allocation and copying overhead.
When you use str += tolower(s[i]);:

The character is appended directly to the existing string.
No temporary string is created, avoiding the overhead of memory allocation and copying.
In summary:

str = str + tolower(s[i]); is an O(n) operation (where n is the size of str).
str += tolower(s[i]); is an O(1) operation (amortized for large strings due to internal optimizations like capacity management).
2. Readability:
+= clearly expresses that you are appending to the string, making the intent more obvious.
str = str + ... can be misread as creating a new string, which is unnecessary and less intuitive in this case.
*/