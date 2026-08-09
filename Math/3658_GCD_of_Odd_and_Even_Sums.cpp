class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0;
        int o=0;
        for(int i =1;i<=2*n; i++){
            if(i%2==0){
                e= e+i;
            }
            else{
                o=o+i;
            }
        }   
        int  gcd=1;
        for(int i=1; i<=min(e,o); i++){
            if(e%i==0 && o%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};
