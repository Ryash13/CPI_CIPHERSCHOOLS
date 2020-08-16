class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        if(s.size()%2)
            return false;
        char ch;
        for(int i=0;i<s.size();i++)
        {
            if(0==st.size())
                ch = '\0';
            else
                ch = st.top();
            switch(s[i])
            {
                case '(':
                    if(')'==ch)
                        st.pop();
                    else
                        st.push(s[i]);
                    break;
                case ')':
                    if('(' == ch)
                        st.pop();
                    else
                        st.push(s[i]);
                    break;
                case '[':
                    if(']' == ch)
                        st.pop();
                    else
                        st.push(s[i]);
                    break;
                case ']':
                    if('[' == ch)
                        st.pop();
                    else
                        st.push(s[i]);
                    break;
                case '}':
                    if('{' == ch)
                        st.pop();
                    else
                        st.push(s[i]);
                    break;
                case '{':
                    if('}' == ch)
                        st.pop();
                    else
                        st.push(s[i]);
                    break;
                default:
                    return false;
                    break;
            }
        }
        if(st.size()!=0)
            return false;
        else
            return true;
    }
};
