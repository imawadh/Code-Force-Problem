#include <bits/stdc++.h>
using namespace std;
// Solved 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i = 0; i<t; i++)
	{
	    int a;
	    cin>>a;
	    int arr[a];
	    int arr1[a];
	    for (int j = 0; j<a ; j++) // Pahle array me input lega
	    {
	        cin>>arr[j];
	    }
	    for (int j = 0; j<a ; j++) // Second array me input lega 
	    {
	        cin>>arr1[j];
	    }
	    int n = sizeof(arr)/sizeof(arr[0]); // sorting of arr 
	    sort(arr,arr+n);
	    int n1 = sizeof(arr1)/sizeof(arr1[0]);
	    sort(arr1,arr1+n1);
	    int sum = arr[0]+arr1[a-1];
	    int flag = 1;
	    for (int j = 0,k = a-1; j<a,k>=0 ; j++,k--)
	    {
	        if(arr[j]+arr1[k]!=sum) // check karega ki aap hai ulta sidha sum ek barabar ho raha hai ki nhi
	        {
	            flag = 0;
	            break;
	        }
	    }
	    if (flag == 1)
	    {
	        for(int k = 0; k<a ;k++) // array ouput kar dega
	        {
	            cout<<arr[k]<<" ";
	        }
	        cout<<'\n';
	        for(int k = a-1 ; k>=0 ;k--)
	        {
	            cout<<arr1[k]<<' ';
	        }
	        cout<<'\n';
	    }
	    else
	    {
	        cout<<-1<<'\n';
	    }
	    
	}

}
