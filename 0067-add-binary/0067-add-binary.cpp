class Solution {
public:
    string addBinary(string a, string b) {
      
            int aLen = a.length();
            int bLen = b.length();
            int i = 0, carry = 0;
            string ans = "";

            while(i < aLen || i < bLen || carry != 0)
            {
                int A = 0, B = 0;
                if(i < aLen && a[aLen-i-1] == '1') A = 1;
                if(i < bLen && b[bLen-i-1] == '1') B = 1;

                ans = to_string((A + B + carry) % 2) + ans;
                carry = (A + B + carry) / 2;

                i++;
            }
            return ans;
        }
};