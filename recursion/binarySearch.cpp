#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int &target, int s, int e)
{
    // cout << s << " " << e << endl;
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] < target)
        return search(nums, target, mid + 1, e);
    else
        return search(nums, target, s, mid - 1);
}

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        nums.push_back(t);
    }
    int t;
    cin >> t;
    cout << search(nums, t, 0, n - 1);

    return 0;
}