class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //time limit exceeded :)
        /*
        int c;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size() ; i++)
        {
        c = count(nums.begin(),nums.end(),nums.at(i));
        if(c > nums.size()/2)
        {
            return nums.at(i);
        }
        }
        return -1;
        */
  
    //enhanced time complexity (with the help of chatgpt :) (good idea though))
    sort(nums.begin(),nums.end());
    return nums.at(nums.size() / 2);

    }
};
