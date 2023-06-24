class Solution{
    public int klengthpref(String[] arr, int n, int k, String str){
        int count = 0;
        for(String s : arr){
            int i=0;
            for(i=0; i<k && i<s.length() && i<str.length(); i++){
                if(s.charAt(i)!=str.charAt(i)){
                    break;
                }
            }
            if(i==k){
                count++;
            }
        }
        
        return count;
    }
}
