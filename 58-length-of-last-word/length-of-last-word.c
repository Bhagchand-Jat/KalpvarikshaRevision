int lengthOfLastWord(char* s) {
    int len=strlen(s)-1;
   
    while(len>=0 && s[len]==' '){
        len--;
    }
    int length=0;
    while(len>=0 && s[len]!=' '){
        length++;
        len--;
    }
    return length;
}