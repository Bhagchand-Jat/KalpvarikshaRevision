bool isPalindrome(int x) {
    int y=x;
    if(x<0){
        return false;
    }else{
        
        long val=(long)x;
        long result=0;
       while(val>0){
           result=result*10+(val%10);
           val/=10;  
       }
       if((long)x!=result)return false;
    }
    return true;
}