#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target){
                    vector<int> result ={i,j};
                    return result;
                }
            }           
        }
        return {};        
    }
};

int main()
{
    Solution s;
    vector<int> nums={2,7,11,15};
    vector<int> result=s.twoSum(nums,20);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}