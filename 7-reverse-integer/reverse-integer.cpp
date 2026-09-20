class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int lastd;
        
        
        while(x!=0){
            lastd=x%10;
            if(ans>INT_MAX/10 || ans==INT_MAX/10 && lastd>7 ){
            return 0;
        }
        if(ans<INT_MIN/10 || ans<INT_MIN/10 && lastd<-8 ){
            return 0;
        }
            
            ans=ans*10 +lastd;
            x=x/10;
        }
        return ans;
        }
    
};