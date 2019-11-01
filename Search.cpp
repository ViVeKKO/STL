#include <iostream>
#include <algorithm>
using namespace std;
void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()

    { 
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int asize = sizeof(a) / sizeof(a[0]); 
    cout << "\n The array is : "; 
    show(a, asize); 
    sort(a, a + asize); 
    cout << "\n\n The array after sorting is : "; 
    show(a, asize); 
    if(binary_search(a,a+10,2))
        cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array";     
    
    return 0;
}
