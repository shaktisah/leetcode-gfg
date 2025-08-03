class Solution {
  public:
  
  bool ispossible(vector<int>& arr, int k,int n,int mid){
     int  paintercount=1;
     int totalunit=0;
      for(int i=0;i<n;i++){
          if(totalunit + arr[i]<=mid){
              totalunit+=arr[i];
          }
          else{
              paintercount++;
              if(paintercount > k || arr[i] > mid){
                  return false;
              }
              totalunit=arr[i];
          }
      }
   return true;   
  }
  
  
  
    int minTime(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            }
            int end=sum;
            int ans=-1;
            
            while(start<=end){
                int mid=end+(start-end)/2;
                
                if(ispossible(arr,k,n,mid)){
                    ans=mid;
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }

        return ans;
    }
};