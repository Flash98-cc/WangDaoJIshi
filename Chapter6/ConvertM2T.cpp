//将M进制转换为十进制
#include <iostream>
#include <string>
using namespace std;

int Char2Int(char target)//将字符转换成对应数字
{
    if(target<='9'||target>='0')
        return target-'0';
    else return target-'A'+10;
}

void ConvertM2T(string str,int m)//M转换为10进制
{
    int number=0;
    for(int i=0;i<str.size();i++)
    {
        number*=m;
        number=number+Char2Int(str[i]);
    }
    cout<<number<<endl;
}

int main()
{
    string str;//输入的带转换数字
    while(cin>>str)
    {
        ConvertM2T(str,16);
    }
    return 0;
}
