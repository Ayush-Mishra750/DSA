#include <bits/stdc++.h>
using namespace std;
void next_Smallest(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() > arr[i])
        {

            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    ans[n - 1] = -1;

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
}

int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    next_Smallest(arr);

    return 0;
}