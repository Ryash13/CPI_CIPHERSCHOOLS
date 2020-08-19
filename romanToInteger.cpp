class Solution {
public:
     int romanToInt(string s) {
        int map[256];
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int ans=0;
        int c;
        for(int i = 0; i<s.length();i++)
        {
            if(i+1<s.length() && map[s[i]]<map[s[i+1]])
            {
                c = map[s[i+1]] - map[s[i]];
                i++;
            }
            else
                c = map[s[i]];
            ans+=c;
        }
        return ans;
    }
};
