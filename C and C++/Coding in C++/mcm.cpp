#include<bits/stdc++.h>
using namespace std;



int mcm(int arr[],int i,int j){




      // Base Condition


      if(i>=j){
        return 0;
      }


      // loop Condition

      int ans=INT_MAX;

      for(int k=i;k<j;k++){

           int temp= mcm(arr,i,k)+mcm(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];

           ans=min(temp,ans); // ans=f(temp) =Here min is function



      }
         return ans;

}
int main(){

    //int arr[]={40,20,30,10,30};
    //int arr[]={10, 20, 30, 40, 30};
    int arr[]={10, 20, 30} ;

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<mcm(arr,1,n-1);  // think starting index i and ending index j
    cout<<endl;
    return 0;


}
