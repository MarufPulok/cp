class Solution {
public:
    bool isPalindrome(int x) {
        int y;
        for(int i=0; ; i++)
        {
            y = (x%10)*(pow(10,i));
            x = x/10;
            if(x==0)
            break; 
        }
        if(x==y)
        return true;
        else
        return false;
    }
};