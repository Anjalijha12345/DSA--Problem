class Solution {
public:
    int myAtoi(string str) 
    {
        int sign = 1, base = 0, i = 0;
        while (str[i] == ' ') { ++i; }
        if (str[i] == '-' || str[i] == '+') 
        {
            if(str[i] == '-')
            {
                sign = -1;
            }
            ++i;
        }
        for (; str[i] >= '0' && str[i] <= '9'; ++i) 
        {
            if (sign == 1) 
            {
                
                if( base >  INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
                {
                    return INT_MAX;
                }
            }else if(sign == -1)
            {
                if( base >  INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 8))
                {
                    return INT_MIN;
                }
            }
            base  = 10 * base + (str[i] - '0');
        }
        return base * sign;
        
    }
};
