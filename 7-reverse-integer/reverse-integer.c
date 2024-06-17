int reverse(int x){
    int  negative=x<0?-1:1;
    
     long value=0;
     int i=0;
     long val=(long)negative*x;
     while(val>0){
        int rem=(val)%10;
        
        value=value*10+rem;
       
        val/=10;
        i++;
     }
    
   value*=negative;
     
  if(value<=INT_MAX && value>=INT_MIN){
      return value;
  }
  return 0;
}