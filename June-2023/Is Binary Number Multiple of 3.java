class Solution {
    int isDivisible(String s) {
        int odd = 0;
        int even = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i % 2 == 0) {
                even += (s.charAt(i) - '0');//evenSum
            } else {
                odd += (s.charAt(i) - '0');//odsSum
            }
        }
        return  (even - odd) % 3 == 0 ? 1 : 0;
    }
}
