#include <iostream>

using namespace std;

int main()
{
    int num,ans=49;
    cout<<"enter 1-100 number"<<endl;
    cin>>num;
    while(num!=ans)
    {
        cout<<"try again"<<endl;
        cin>>num;
    }
    cout<<"good job!"<<endl;
    return 0;
}
