#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target);

int main()
{
	vector<int> nums = {2,5,5,11};
	int tar = 10;
	vector<int> two = twoSum(nums,tar);
	for(auto tt = two.begin(); tt != two.end(); ++tt)
		cout << *tt << endl;
	return 0;
}

vector<int> twoSum(vector<int>& nums, int target) 
{        
    vector<int> cc;
    for(int b = 0; b < nums.size(); b++)
    {
    	int curr = target - nums.at(b);
    	for(int bb = b+1; bb < nums.size(); bb++)
    	{
    		if(curr == nums.at(bb))
    		{
    			cc.push_back(b);
    			cc.push_back(bb);
    			return cc;
    		}
    	}
    }
    return cc;
}

