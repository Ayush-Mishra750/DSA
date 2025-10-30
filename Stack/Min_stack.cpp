// Approach 1 – Two Stacks (O(n) Space) 📦📦
// Idea:

// Use two stacks:
// s → all values.
// st → track minimums.
// Steps:

// push(val): Push to s. If st empty or val ≤ st.top(), push to st.
// pop(): Pop from s. If popped == st.top(), pop from st.
// top(): Return s.top().
// getMin(): Return st.top().
// Complexity:

// Time: O(1) for all ops
// Space: O(n) worst case

#include<bits/stdc++.h>
using namespace std;
 void push(int val) {
   s.push(val);
   if(st.empty()|| val<=st.top()){
   
    st.push(val);
   }
   
    }
    
    void pop() {
        if(s.top()==st.top())st.pop();

        s.pop();
        
    }
    
    int top() {
        if(s.empty())return -1;
      return s.top();
    }
    
int  getMin() {
   if( st.empty()){
        return -1;
    }
             return st.top();
    }

int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

return 0;
}

//?Approach 2
// Approach 2 – Encoded Values (O(1) Space) 🪄
// Idea:

// Use one stack and minEle to store the minimum.
// If pushing a smaller value, store encoded value = 2*val - minEle.
// Decode when popping.
// Complexity:

// Time: O(1)
// Space: O(1) extra


#include<bits/stdc++.h>
using namespace std;
MinStack() {
      while (st.empty() == false) st.pop();
      mini = INT_MAX;
    }

  void push(int value) {
    long long val = value;
    if (st.empty()) {
      mini = val;
      st.push(val);
    } else {
      if (val < mini) {
        st.push(2 *val*1LL - mini);
        mini = val;
      } else {
        st.push(val);
      }
    }
  }

  void pop() {
    if (st.empty()) return;
    long long el = st.top();
    st.pop();

    if (el < mini) {
      mini = 2 * mini - el;
    }
  }

  int top() {
    if (st.empty()) return -1;

    long long el = st.top();
    if (el < mini) return mini;
    return el;
  }

  int getMin() {
    return mini;
  }
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

return 0;
}