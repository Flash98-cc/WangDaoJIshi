 //十进制转换成任意进制
#include <iostream>
#include <vector>
using namespace std;


void ConvertTen2N(int number,int n)
{
    vector<int> result;
    if(number==0)
    {
        result.push_back(0);
    }
    else{//转换
         while(number!=0)
        {
            result.push_back(number%n);
            number=number/n;
        }
    }
    for(int i=result.size()-1;i>=0;--i)//输出二进制
    {
        cout<<result[i];
    }
    cout<<endl;   
}

int main()
{
    int number;
    while(cin>>number)
    {
        ConvertTen2N(number,8);
    }
    return 0;
}
