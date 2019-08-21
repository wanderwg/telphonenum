//九宫格电话号码字母数字转换
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    string s;
    string num="22233344455566677778889999";
    int n;
    while(cin>>n)
    {
        set<string> ss;
        int count;
        for(int i=0;i<n;++i)
        {
            count=0;
            string res;
            cin>>s;
            for(int j=0;j<s.size();++j)
            {
                if(s[j]>='A'&&s[j]<='Z')
                {
                    res+=num[s[j]-'A'];
                    count++;
                    if(count==3)
                    res+='-';
                }
                else if(s[j]>='0'&&s[j]<='9')
                {
                    res+=s[j];
                    count++;
                    if(count==3)
                    res+='-';
                }
            }
            ss.insert(res);
        }
        for(auto k=ss.begin();k!=ss.end();++k)
            cout<<*k<<endl;
        cout<<endl;
    }
    return 0;
}