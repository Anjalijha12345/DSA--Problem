class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i;
        char ch;
        for(i=0;i<s.length();i++)
        {
            ch=s[i];

            if(s[i]=='{'||s[i]=='('||s[i]=='[')
               st.push(ch);

            else
            {
                if(!st.empty())
                {
                   char top=st.top();
                    if(ch==')'&&top=='('||ch=='}'&&top=='{'||ch==']'&&top=='[')
                    st.pop();
                    else
                    return false;
                }
                else
                return false;
            }
        }
                if(st.empty())
                return true;
                return false;
            }
        
    
};
