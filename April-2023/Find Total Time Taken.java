class Solution{
    public static long totalTime(int n,int arr[],int time[]){
        HashMap<Integer, Integer> m = new HashMap<>();
       long ans = -1;
       for (int i = 0; i < n; i++) {
           if (!m.containsKey(arr[i])) 
           {
               m.put(arr[i], 1);
               ans++;
           } 
           else 
           { 
               ans += time[arr[i] - 1];
               
               
           }
           
       }
       return ans;
    }}
