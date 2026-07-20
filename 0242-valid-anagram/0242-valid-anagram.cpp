class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        // ----- SORTING---- //
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // return s==t;

        // ----- HASHMAP -----//
        int n= s.length();
        unordered_map<char,int> st1;
        unordered_map<char,int> st2;
        for(int i=0;i<n;i++){
         st1[s[i]]++;
            st2[t[i]]++;
        }
        return st1 == st2;
    }
};