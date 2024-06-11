int strStr(char* haystack, char* needle) {
    int i=0;
    while(i<strlen(haystack)){
        if(needle[0]==haystack[i]){
            int r=1;
          
            if(strlen(needle)<=strlen(haystack)-i){
            while(r<strlen(needle) && needle[r]==haystack[i+r]){
               
                 r++;
                 
            }

            if(r==strlen(needle)){
                return i;
            }
            
            }else return -1;
        }
        i++;
    }
    return -1;
}