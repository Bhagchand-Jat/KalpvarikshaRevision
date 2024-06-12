bool isPalindrome(char* s) {
    int len=strlen(s);
    int left=0,right=len-1;
    int lIndex=0,rIndex=0;
    while(left<right){
         bool isContinue=true;
        if((s[left]<'A' || s[left]>'Z') && (s[left]<'a' || s[left]>'z') && (s[left]<'0' || s[left]>'9')){
                   left++;
                   isContinue=false;
                   lIndex++;
        }

         if((s[right]<'A' || s[right]>'Z') && (s[right]<'a' || s[right]>'z') && (s[right]<'0' || s[right]>'9')){
                   right--;
                   isContinue=false;
                   rIndex++;
        }

        if(isContinue){
            char a=s[left];
            char b=s[right];
            if(a-'A'<26 && a-'A'>=0){
                  a=a+'a'-'A';
            }
            if(b-'A'<26 && b-'A'>=0){
                  b=b+'a'-'A';
            }

            if(a!=b){
              return false;
            }

            left++;
            right--;
            

        }
    }
    return true;
}