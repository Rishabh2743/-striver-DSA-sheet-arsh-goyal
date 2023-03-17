
class Trie {
public:
    Trie() {
        
    }
    unordered_set<string> s;
    void insert(string word) {
        s.insert(word);
    }
    
    bool search(string word) {
        return s.count(word);
    }
    
    bool startsWith(string prefix) {
        int n = size(prefix);
        for(string i : s) {
            int x = size(i);
            if(x >= n) {
                if(prefix == i.substr(0, n)) return true;
            }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */