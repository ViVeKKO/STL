#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    vector <int> :: iterator j;
void display(vector <int> y)
{
    for(j=y.begin();j<y.end();j++)
    {
        cout<<*j<<" ";
    }
}
int main()
{
    vector <int> v;
    int i,n;
    for(i=1;i<=5;i++)
        {
            cin>>n;
            v.push_back(n);
        }
    for(j=v.begin();j!=v.end();++j)
        {
            cout<< *j <<" ";
        }
    sort(v.begin(),v.end());
    display(v);
    return 0;
}