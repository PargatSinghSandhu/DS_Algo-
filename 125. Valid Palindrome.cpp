class Solution {
public:

    bool isPalindrome(string s) {
        
        string sol;

        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z') sol.push_back(tolower(s[i]));
            else if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9') sol.push_back(s[i]);
        }
    
    return pal(sol, 0);
        
    }


    bool pal(string& sol, int i)
    {
        
        if(i>=sol.size()/2)
        {
            return true;
        }
        if(sol[i]!=sol[sol.size() - i - 1])
        {
            return false;
        }
        
        return pal(sol,i+1);
    }
    
    
    
};
