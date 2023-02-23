class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
     int size=profits.size();
     vector<pair<int, int>> projects(size);
     for(int i=0; i<size; i++){
         projects[i] = {capital[i],profits[i]};
     }  
     sort(projects.begin(), projects.end());

     int i=0;
     priority_queue<int> maximizeCapital;
     while(k--){
         while(i < size && projects[i].first <= w){
             maximizeCapital.push(projects[i].second);
             i++;
         }
         if (maximizeCapital.empty())
             break;
         w += maximizeCapital.top();
         maximizeCapital.pop();
     }
     return w;
    }
};