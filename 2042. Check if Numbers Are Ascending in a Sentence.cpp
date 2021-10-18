class Solution {
public:
    bool areNumbersAscending(string s) 
    {
        int sizeOfString = s.length();
        int previousNumber = -1;
        int presentNumber = 0;
        bool isIncreasing = true;
        for(int i = 0; i < sizeOfString; i++) 
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                presentNumber = (presentNumber * 10) + (s[i] - '0');
            }
            if((!(s[i] >= '0' && s[i] <= '9') || i == sizeOfString - 1) && presentNumber != 0)
            {
                isIncreasing &= (previousNumber < presentNumber);
                //cout<<isIncreasing<<" "<<previousNumber<<" "<<presentNumber<<endl;
                previousNumber = presentNumber;
                presentNumber = 0;
                if(!isIncreasing)
                {
                    return isIncreasing;
                }
            }
        }
        return isIncreasing;
    }
};