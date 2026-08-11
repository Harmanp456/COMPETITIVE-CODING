class Solution {
public:
    int solveSquare(int n){
        int sum=0;
        while(n!=0){
            int digit=n%10;
            n=n/10;
            sum= sum+(digit*digit);
        }
        return sum;
    }
    bool isHappy(int n){
        //  unordered_set<int> seen;
        //  while(n!=1&& seen.find(n)==seen.end()){
        //     seen.insert(n);
        //     n=solveSquare(n);
        //  }
        //  return n==1;
        int slow=n,fast=n;
        while(true){
            slow=solveSquare(slow);
            fast=solveSquare(solveSquare(fast));
            if(fast==1){
                return true;
            }
            if(slow==fast) return false;
        }
        
    }
};