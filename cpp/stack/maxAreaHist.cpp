#include<bits/stdc++.h>
using namespace std;

void nsl(vector<int> &heights, vector<int> &left)
{
    const int pseudo = -1;
    stack<pair<int, int>> s;
    for (int i = 0; i < heights.size(); i++)
    {
        if (s.empty())
        {
            left.push_back(pseudo);
        }
        else if (!s.empty() && s.top().first < heights[i])
        {
            left.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= heights[i])
        {
            while (!s.empty() && s.top().first >= heights[i])
                s.pop();
            if (s.empty())
                left.push_back(pseudo);
            else
                left.push_back(s.top().second);
        }
        s.push({heights[i], i});
    }
}
void nsr(vector<int> &heights, vector<int> &right)
{
    const int pseudo = heights.size();
    stack<pair<int, int>> s;
    for (int i = pseudo - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            right.push_back(pseudo);
        }
        else if (!s.empty() && s.top().first < heights[i])
        {
            right.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= heights[i])
        {
            while (!s.empty() && s.top().first >= heights[i])
                s.pop();
            if (s.empty())
                right.push_back(pseudo);
            else
                right.push_back(s.top().second);
        }
        s.push({heights[i], i});
    }
    reverse(right.begin(), right.end());
}
int maxAreaHistogram(vector<int> &heights)
{
    int siz = heights.size();
    vector<int> left, right;
    int ans = 0;
    nsl(heights, left);
    nsr(heights, right);
    for (int i = 0; i < siz; i++)
    {
        ans = max(ans, ((right[i] - left[i] - 1) * heights[i]));
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> heights;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        heights.push_back(val);
    }
    cout<<maxAreaHistogram(heights)<<endl;
    
}

