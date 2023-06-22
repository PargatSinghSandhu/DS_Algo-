



int maxProfit(vector<int> &prices)
{
    int min_prc = prices[0];
    int max_profit = 0;
    for(int i=0;i<prices.size();i++)
    {
        int cost = price[i]-min_prc;
        max_profit = max(max_profit, cost);
        min_prc = min(min_prc, prices[i]);
    }
}