class Solution {
public:
    int reverse(int x) {
        long long sum=0;
        while(x!=0)
        {
            sum=sum*10+x%10;
            x/=10;
        }
        if(sum>-pow(2,31) && sum<pow(2,31)-1)return sum;
        return 0;
    }
};
