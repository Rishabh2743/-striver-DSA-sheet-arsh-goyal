struct minChar{
    char min; 
    unordered_set<char> set; 
};


class Solution {
public:
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
         minChar** belongs = new minChar*[26]; 
        memset(belongs, 0, sizeof(belongs[0])*26); 

        int n = s1.length();
        minChar *aSet, *bSet; 
        minChar *toAdd; 

        char a,b;

        for(int i = 0; i < n; i++){
            
            a = s1[i]; 
            b = s2[i]; 

            aSet = belongs[a-'a'];
            bSet = belongs[b-'a']; 
            
            if(aSet == nullptr && bSet == nullptr){
                
                toAdd = new minChar();

                toAdd->min = min(a,b);   
                toAdd->set.insert(a);
                toAdd->set.insert(b); 

                belongs[a - 'a'] = toAdd;
                belongs[b - 'a'] = toAdd;
            }
            else if(aSet != nullptr && bSet == nullptr){
               
               aSet->min = min(aSet->min,b); 
               aSet->set.insert(b);
               belongs[b-'a'] = aSet;
            }
            else if(bSet != nullptr && aSet == nullptr){
               
               bSet->min = min(bSet->min, a); 
               bSet->set.insert(a); 
               belongs[a-'a'] = bSet;
            }
            else{
                
                if(aSet == bSet) continue; 

                char minVal = min(aSet->min, bSet->min);
                aSet->min = minVal; 

                aSet->set.insert(bSet->set.begin(), bSet->set.end()); 

                for(auto c : bSet->set){
                    belongs[c-'a'] = aSet;
                }
            }
        }

        n = baseStr.length();
        for(int i = 0; i < n; i++){
            a = baseStr[i];
            if(belongs[a -'a'] != nullptr){
                baseStr[i] = belongs[a-'a']->min; 
            }    
        }

        return baseStr;
    }
};
