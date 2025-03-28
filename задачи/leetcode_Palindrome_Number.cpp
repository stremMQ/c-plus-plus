class Solution {
    public:
        bool isPalindrome(int x) {
            string a {};
            string b {to_string(x)};
            for(auto i{to_string(x).size()}; i > 0; i--)
            {
                a += b[i-1];
            }
            cout << a;
            if (a == b)
            {
                return true;
            }
            else return false;
        }
};