class Solution {
public:
    // long N = 1e9+7;
    vector<int>primes;
    void seive(int N)
    {
        primes.resize(N+1,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i*i<=N;i++)
        {
            if(primes[i]==1){
                for(int j=i*i;j<=N;j+=i){
                    primes[j]=0;
                }
            }
        }
    }
    int countPrimes(int n) {
        int c=0;
        if(n<=1){
            return 0;
        }
        seive(n);
        for(int i=2;i<n;i++)
        {
            if(primes[i]){
                c+=1;
            }
        }
        return c;
    }
};