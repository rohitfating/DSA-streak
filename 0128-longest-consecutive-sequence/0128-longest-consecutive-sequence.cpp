class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()) ;
        int longest = 1 , cnt_curr = 0 , last_smallest = INT_MIN ;

        if( nums.size() == 0 ){ return 0 ;}
        for( int i=0 ; i<nums.size() ; i++ ){
            if( nums[i]-1 == last_smallest ){
                cnt_curr += 1 ;
                last_smallest = nums[i] ;
            }
            else if( nums[i] != last_smallest ){
                cnt_curr = 1 ;
                last_smallest = nums[i] ;
            }
            longest = max(longest,cnt_curr) ;
        }
            return longest ;
        
    }
};