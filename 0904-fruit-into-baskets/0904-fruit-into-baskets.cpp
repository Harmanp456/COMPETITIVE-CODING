class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> basket;
        int low=0,maxL=0;
        for (int high=0;high<fruits.size();high++){
            basket[fruits[high]]++;
        while(basket.size()>2){
            basket[fruits[low]]--;
                if (basket[fruits[low]] == 0) {
                    basket.erase(fruits[low]);
                }
                low++;
            }

            maxL = max(maxL, high - low + 1);
    }
        return maxL;
    }
};