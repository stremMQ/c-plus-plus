class Solution {
    public:
        int romanToInt(string s) {
            unsigned num {};
        for(unsigned i{}; i < size(s); i++)
            {
                switch(s[i])
                {
                    case 'I':
                        if(s[i+1] == 'V')
                        {
                            i++;
                            num += 4;
                        }
                        else if(s[i+1] == 'X')
                        {
                            i++;
                            num += 9;
                        }
                        else if(s[i+1] == 'I')
                        {
                            if (s[i+2] == 'I')
                            {
                                i += 2;
                                num += 3;
                            }
                            else 
                            {
                                i++;
                                num += 2;
                            }
                        }
                        else num += 1;
                        break;
                    case 'V':
                        num += 5;
                        break;
                    case 'X':
                        if(s[i+1] == 'L')
                        {
                            i++;
                            num += 40;
                        }
                        else if(s[i+1] == 'C')
                        {
                            i++;
                            num += 90;
                        }
                        else if(s[i+1] == 'X')
                        {
                            if (s[i+2] == 'X')
                            {
                                i += 2;
                                num += 30;
                            }
                            else 
                            {
                                i++;
                                num += 20;
                            }
                        }
                        else num += 10;
                        break;
                    case 'L':
                        num += 50;
                        break;
                    case 'C':
                        if(s[i+1] == 'D')
                        {
                            i++;
                            num += 400;
                        }
                        else if(s[i+1] == 'M')
                        {
                            i++;
                            num += 900;
                        }
                        else if(s[i+1] == 'C')
                        {
                            if (s[i+2] == 'C')
                            {
                                i += 2;
                                num += 300;
                            }
                            else 
                            {
                                i++;
                                num += 200;
                            }
                        }
                        else num += 100;
                        break;
                    case 'D':
                        num += 500;
                        break;
                    case 'M':
                        num += 1000;
                        break;
                }
            }
            return num;
        }
    };