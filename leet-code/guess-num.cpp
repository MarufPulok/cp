class Solution {
public:
    int guessNumber(int n) {
        int a = 1, b = n;

        while(a<b)
        {
            const mid = a + (b-a)/2;
            if(guess(mid) <=0)
            {
                b = mid;
            }
            else
            {
                a = mid+1;
            }
        }
        return a;
    }
};