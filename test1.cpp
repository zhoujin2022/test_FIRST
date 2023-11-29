#include<iostream>
#include<vector>
using namespace std;


int main()
{

	vector<int>  nums = { 1,1,1,4,5 };
	cout << nums.size() << endl;
	int val = 1;
	int p = 0;
	int num = nums.size();
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == val) 
		{
			num--;
		}
		if (nums[i] != val)
		{
			nums[p]=nums[i];
			p++;
		}
	}
	cout << num << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}
}