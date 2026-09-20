class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0){
            return false;
        }
        if(x>INT_MAX || x<INT_MIN){
            return 0;
        }
        long long  ans=0;
        int lastd;
        int dup=x;
        
        
        while(x!=0){
            lastd=x%10;
           
            
            ans=ans*10 +lastd;
            x=x/10;
        }
       
        if(dup==ans){
            return true;
        }
        else{
            return false;
        }
        
        }
    
        
    
};