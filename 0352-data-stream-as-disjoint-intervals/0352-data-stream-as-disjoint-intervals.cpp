class SummaryRanges {
    set<int> _set;
public:
    SummaryRanges() {} 
    
    void addNum(int value) {
        _set.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> ans;
        int val = *_set.begin();
        vector<int> _subAns = {val,val};
        for(auto _it: _set){
            if(_it <= _subAns[1]+1)
                _subAns[1] = _it; 
            else{
                ans.push_back(_subAns);
                _subAns = {_it,_it};
            }
        }
        ans.push_back(_subAns);
        return ans;
    }
};


/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */