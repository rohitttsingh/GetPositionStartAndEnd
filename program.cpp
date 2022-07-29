#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
int arr[] = { 1,1,1,1,5,5,5,11,11 };
int n = sizeof(arr)/sizeof(arr[0]);
int k = 5;

sort(arr,arr+n);
auto itr = find(arr, arr + n, k);
int pos1= distance(arr,itr);
cout<<pos1<<", ";

int i = 0;
for( i=pos1;arr[i]==k;i++);
cout<<i-1;
    
return 0;

}
