class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int n= nums.size() ;
        int sum = 0 ;
        int digit_sum = 0 ;

        for( int i=0 ; i<n ; i++ ){
            
             sum += nums[i] ;
        

           while(nums[i]>0){         
            int rem = nums[i]%10 ;
            nums[i] /=10 ;
             digit_sum += rem ;
           }
         
        }

        return abs( sum - digit_sum ) ;
    }
};