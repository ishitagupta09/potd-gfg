class Solution{
   public static boolean check(String str ,int e){
        int s = 0;
        while(s<=e){
            if(str.charAt(s)!=str.charAt(e)){
                return false;
            }
            else {
                s++;e--;
            }
        }
        return true;
    }
	public static int addMinChar(String str){
		int e=str.length()-1;
        int ans =0;
        for(int i=e;i>0;i--){
            if(check(str, i)) {
                return str.length()-i-1;
            }
        }
        return str.length()-1;
	}
}
