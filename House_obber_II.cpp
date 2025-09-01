// Coding ninjas problem

#include <bits/stdc++.h>
long long int maximum_Total(vector<int>& valueInHouse ){
    int n = valueInHouse.size();
    long long prev=valueInHouse[0] , prev_prev=0;

    for(int i = 1 ;i < n ;i++){
        long long  take = valueInHouse[i];

        if(i > 1) take+=prev_prev ;

        long long not_take = 0 + prev;
        long long curr = max(take, not_take);
        prev_prev = prev ;
        prev = curr;
    }
    return prev ;
}

long long int houseRobber(vector<int>& valueInHouse)
{

    int n = valueInHouse.size();
    if(n == 1) return valueInHouse[0];
    vector<int>v1(valueInHouse.begin()+1 , valueInHouse.end());
    vector<int>v2(valueInHouse.begin() , valueInHouse.end()-1);
    return max(maximum_Total(v1) ,maximum_Total(v2) );
}
