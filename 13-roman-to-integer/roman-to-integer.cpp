class Solution {
public:
    int romanToInt(string s) {
        int acc = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int cur = val(s[i]);
            int nxt = (i + 1 < s.size()) ? val(s[i + 1]) : 0;

            if (cur < nxt)
            acc -= cur;

            else
            acc += cur;
        }
        return acc;
    }

    private:
    int val(char c)
    {
        int acc = 0;
        switch(c)
        {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
    }

};