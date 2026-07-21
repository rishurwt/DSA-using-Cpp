class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int a=0,m=0,p=-1,n=s.size();
        for(int i=0;i<n;){
            int j=i;
            while(j<n&&s[j]==s[i])j++;
            int c=j-i;
            if(s[i]=='1')a+=c;
            else{
                if(p!=-1)m=max(m,p+c);
                p=c;
            }
            i=j;
        }
        return a+m;
    }
};