class BrowserHistory {
public:
   vector<string>h;
    int ci;
public:
    BrowserHistory(string homepage) {
        h.push_back(homepage);
        ci=0;
    }
    
    void visit(string url) {
        h.resize(ci+1);
        h.push_back(url);
        ci++;
    }
    
    string back(int steps) {
        int ind=max(0,ci-steps);
        ci=ind;
        return h[ci]; 
    }
    
    string forward(int steps) {
        int n=h.size()-1;
        int ind=min(n,ci+steps);
        ci=ind;
        return h[ci];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */