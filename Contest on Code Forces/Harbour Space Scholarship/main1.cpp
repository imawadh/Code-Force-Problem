class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle)
        {
            return 0;
        }
        else if (haystack.size()==0)
        {
            return 0;
        }
        else{
            int index = 0;
            bool flag = false;
            for (int i=0; i<haystack.size(); i++)
            {
                if(haystack[i]==needle[index])
                {
                    index+=1;
                    flag = true;
                }
                else{
                    flag = false;
                    index = 0;
                }
                if(index == needle.size()-1 && flag==true)
                {
                    return i+2-needle.size();
                }
            }
            return -1;
        }
    }
};