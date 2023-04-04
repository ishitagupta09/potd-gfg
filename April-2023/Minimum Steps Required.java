class Solution{
    int minSteps(String str) {
       int count=0;
        char s[]=str.toCharArray();
        char ch='\0';
        for(char c:s){
            if(c!=ch){
                count++;
                ch=c;
            }
        }
        return count/2+1;
    }
}
