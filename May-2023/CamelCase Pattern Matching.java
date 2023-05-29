class Solution{
    ArrayList<String> CamelCase(int N,String[] Dictionary,String Pattern){
        ArrayList<String> arr=new ArrayList<>();
        for(String s:Dictionary){
            String str="";
            for(int i=0;i<s.length();i++){
                if(Character.isUpperCase(s.charAt(i))){
                    str+=s.charAt(i);
                }
            }
            if(str.length()>=Pattern.length() && str.substring(0,Pattern.length()).equals(Pattern)){
                arr.add(s);
            }
        }
        if(arr.size()==0){
            arr.add("-1");
            return arr;
        }
        Collections.sort(arr);
        return arr;
    }
}
