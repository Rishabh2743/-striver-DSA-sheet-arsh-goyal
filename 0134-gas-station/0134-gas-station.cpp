class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int curr_tank=0;
      int start=0;
      int total_tank=0;
    for (int i = 0; i < gas.size(); i++)
    {
        curr_tank = curr_tank + gas[i] - cost[i];
        total_tank = total_tank + gas[i] - cost[i];
        if (curr_tank < 0)
        {
            start = i + 1;
            curr_tank = 0;
        }
    }
    if (total_tank < 0)
        return -1;
    return start;

      
    }
};