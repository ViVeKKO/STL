#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[])
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    int arr[10]={1,43,6,3,2,1,43,54,65,76};
    display(arr);
    sort(arr,arr+10);
display(arr);
    return 0;
}
