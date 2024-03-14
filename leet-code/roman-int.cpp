class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;

        vector <int> v(128);

        v['I'] = 1;
        v['V'] = 5;
        v['X'] = 10;
        v['L'] = 50;
        v['C'] = 100;
        v['D'] = 500;
        v['M'] = 1000;

        for(int i = 0;i+1<s.length();i++)
        {
            if(v[s[i]]<v[s[i+1]])
            {
                answer-=v[s[i]];
            }
            else
            {
                answer+=v[s[i]];
            }
        }

        answer+=v[s[s.length()-1]];
    }
};