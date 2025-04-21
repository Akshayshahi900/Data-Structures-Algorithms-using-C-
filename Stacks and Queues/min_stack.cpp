#include<iostream>
using namespace std;
#include<bits/stdc++.h>
// using pairs to stor the value and data S(O(2N))
// class MinStack {
//     stack < pair < int, int >> st;
  
//     public:
//       void push(int x) {
//         int min;
//         if (st.empty()) {
//           min = x;
//         } else {
//           min = std::min(st.top().second, x);
//         }
//         st.push({x,min});
//       }
  
//     void pop() {
//       st.pop();
//     }
  
//     int top() {
//       return st.top().first;
//     }
  
//     int getMin() {
//       return st.top().second;
//     }
//   };


class Minstack{
    stack <long long > st;
    long long mini;
    public:

    /*Initialise the data structure here*/

    Minstack(){
        while(st.empty()==false) st.pop();
        mini = INT_MAX;
    }
    void push(int value){
     long long val = value;
     if(st.empty()){
        mini = val;
        st.push(val);
     }else{
        if(val <mini){
            st.push(2*val -mini);
            mini = val;
        }else{
            st.push(val);
        }
     }
    }
    void pop(){
        if(st.empty()) return ;

        long long el = st.top();
        st.pop();

        if(el <mini){
            //restore previous mini
            mini = 2* mini -el;
        }
    }

    int top(){
        if(st.empty()) return -1;

        long long el = st.top();
        if(el <mini ) return mini;
        return el;
    }
    int getMin(){
        return mini;
    }
};