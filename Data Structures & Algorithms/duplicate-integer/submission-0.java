class Solution {
    public boolean hasDuplicate(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            int ii=nums[i];
            for(int j=i+1;j<nums.length;j++){
                if(ii==nums[j])
                {
                    return true;
 
                }
             
            }
        }
        return false;
    }
}