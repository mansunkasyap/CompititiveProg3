// Peak Index in Mountain array with time complexity O(log n)
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array of size "<< n;
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int s = 0, e = n-1;
    int mid = (s+e)/2;
    while (s < e)
    {
        if (arr[mid - 1] < arr[mid])
        {
            s = mid;
        }
        else
        {
            e = mid;
        }
        if (arr[mid] > arr[mid + 1])
            break;
        else
            mid = (s+e)/2;
    }
    cout << mid;
    return 0;
}
