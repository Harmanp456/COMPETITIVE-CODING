class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1 = "";
        string ans2 = "";

        for(char ch:s){
            if(ch != '#'){
                ans1.push_back(ch);
            }else if(!ans1.empty()) {
                ans1.pop_back();
            } 
        }
        for(char ch:t){
            if(ch != '#'){
                ans2.push_back(ch);
            }else if(!ans2.empty()){
                ans2.pop_back();
            } 
        }
        if(ans1 == ans2){
            return true;
        }else{
            return false;
        }
    }
};