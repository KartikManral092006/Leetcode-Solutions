class Solution {
public:
    bool isPerfectSquare(int num) {
     if(num==1) return true;
     if(num==4) return true;
     int l=1;
     int h=num/2;
     while(l<=h){
        int mid=l+(h-l)/2;
         long long square =(long long)mid*mid;
        if(square==(long long)num) return true;
        else if(square>num) h=mid-1;
        else l=mid+1;
     }
     return false;
    }
};
