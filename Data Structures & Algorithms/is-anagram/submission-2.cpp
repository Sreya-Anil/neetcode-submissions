class Solution {
public:
    bool isAnagram(string s, string t) {
        char key;
   if(s.size() != t.size())
       return false;
    int n=s.size();
    for(int i=0;i<n;i++)
   {
    char key=s[i];

    for(int j=i+1;j<n;j++)
    {
        if(s[j]<key)
        {
            char temp=s[j];
            s[j]=key;
            s[i]=temp;

            key=s[i];
        }
    }
   }
   n=t.size();
    for(int i=0;i<n;i++)
   {
    char key=t[i];

    for(int j=i+1;j<n;j++)
    {
        if(t[j]<key)
        {
            char temp=t[j];
            t[j]=key;
            t[i]=temp;

            key=t[i];
        }
    }
   }
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
            return false;
    }

   return true;
    }
};
