/*
给定两个大小为 m 和 n 的有序数组 nums1 和 nums2 。
请找出这两个有序数组的中位数。要求算法的时间复杂度为 O(log (m+n)) 。
你可以假设 nums1 和 nums2 均不为空。
示例 1:
nums1 = [1, 3]
nums2 = [2]
中位数是 2.0
示例 2:
nums1 = [1, 2]
nums2 = [3, 4]
中位数是 (2 + 3)/2 = 2.5
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);

int main()
{
	std::vector<int> n1 = {1, 2};
	std::vector<int> n2 = {3, 4};
	double m = findMedianSortedArrays(n1, n2);
	std::cout << "中位数" << m << std::endl;
}

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2)
{
	//中位数
	double median = 0;
	std::vector<int> v;
	//合并两个有序区间
	std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(v));
	int odd_even = v.size() % 2;
	//可能的中间数的索引
	int mediantIndex = v.size() / 2;
	std::cout << "中位数索引" << mediantIndex << std::endl;
	if(odd_even == 0)
	{
		int sum = v.at(mediantIndex) + v.at(mediantIndex-1);
		median = (double)sum / 2;
	}
	else
	{
		median = v.at(mediantIndex);
	}
	return median;
}