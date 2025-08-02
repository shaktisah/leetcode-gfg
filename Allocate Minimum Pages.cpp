class Solution {
  public:
  //function
  bool ispossible(vector<int> &arr, int k,int n,int mid){
      int studentcount=1;
      int pagesum=0;
      for(int i=0;i<n;i++){
         if(pagesum + arr[i]<=mid){
          pagesum+=arr[i];   
         }
         else{
             studentcount++;
             if(studentcount > k || arr[i] >mid){
                 return false;
             }
             pagesum=arr[i];
         }
      }
   return true;   
  }
  
   
   
    int findPages(vector<int> &arr, int k) {
        
        int n=arr.size(); //page size
        int start=0;
        int sum=0;
        if(k>n){
            return -1;
        }
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            }
            
           int end=sum;
           int ans=-1;
            
            int mid=start+(end-start)/2;
            
            while(start<=end){
                if(ispossible(arr,k,n,mid)){
                    ans=mid;
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
                mid=start+(end-start)/2;
            }
            return ans;
    }
};