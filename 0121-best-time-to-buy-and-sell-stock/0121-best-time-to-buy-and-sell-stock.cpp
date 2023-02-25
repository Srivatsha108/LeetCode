class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int i=0,j=prices.size()-1;
        // int buy=prices[i],sell=prices[j];
        // while(i<j)
        // {
        //    if(prices[i]<buy)
        //    buy=prices[i];
        //    if(prices[j]>sell)
        //    sell=prices[j];
        //    i++,j--;
        // }
        // return sell-buy>=0?sell-buy:0;
        int buy=prices[0],max_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            buy=prices[i];
            else if(prices[i]-buy>max_profit)
            max_profit=prices[i]-buy;
        }
        return max_profit;
    }
};