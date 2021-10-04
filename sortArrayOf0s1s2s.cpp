// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void swap(int a[],int x,int y)
    {
        int temp;
        temp=a[x];
        a[x]=a[y];
        a[y]=temp;
        
    }
    void sort012(int a[], int n)
    {
      int left,right,mid;
      left=0;right=n-1;mid=0;
      while(mid<=right){
          if(a[mid]==0)
          {
              swap(a,left,mid);
              left++;
              mid++;
          }
          else if(a[mid]==1)
          {
              mid++;
          }
          else{
              swap(a,mid,right);
              right--;
          }
      }
      return;
      
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends