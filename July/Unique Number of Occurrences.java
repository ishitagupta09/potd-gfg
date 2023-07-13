class Solution {
    public static boolean isFrequencyUnique(int n, int[] arr) {
        // code here
          HashMap<Integer, Integer> map = new HashMap<>();
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < arr.length; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }


        for (Integer itr : map.keySet()) {
            int a = map.get(itr);
            if (set.contains(a)) {
                return false;
            }
            set.add(a);

        }
        return true;
        
    }
}
