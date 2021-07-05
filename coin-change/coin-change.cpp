class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
            return 0;
        vector<int> sol(amount+1, amount+1);
    sol[0]=0;
     for(auto itr : coins){
         for(int j=itr; j<=amount;j++){
             
                     sol[j] = min(sol[j], sol[j - itr] + 1);
             }
             
         }
         
     
    if(sol[amount]==amount+1)
            return -1; 
        return sol[amount];
    }
};