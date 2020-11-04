#include <iostream>
#include <string>
using namespace std;

string fun(const string& str)
{
    string s="",t1,t2;
    int local;
    for(int len=str.size()/2;len>0;len--)
    {
        for(int i=0;i<str.size()-len;i++)
        {
            t1=str.substr(i,len);
            t2=str.substr(len+i);
            local=i;
            if(t2.find(t1)!=string::npos) {
                for (int j = local; j < local + len; j++){
                    s=s+str[j];//打印搜索到的最长重复字符串
              }
                cout<<"最长重复字符串长度为:"<<len<<endl;
                cout<<"最长重复字符串为:";
                return s;
            }
        }
    }
}
int main()
{
    cout<<"输入字符串:";
    string str;
    cin>>str;
    cout<<fun(str)<<endl;
    return 0;
}
