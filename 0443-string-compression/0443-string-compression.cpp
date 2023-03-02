class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, j = 0;
    while (i < chars.size()) {
        char c = chars[i];
        int count = 0;
        while (i < chars.size() && chars[i] == c) {
            i++;
            count++;
        }
        chars[j++] = c;
        if (count > 1) {
            string countStr = to_string(count);
            for (char digit : countStr) {
                chars[j++] = digit;
            }
        }
    }
    return j;
}
};