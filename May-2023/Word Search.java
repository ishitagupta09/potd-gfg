class Solution
{
        public boolean isWordExist(char[][] arr, String s)
    {
        int x = 0;
        boolean [][]vis = new boolean[arr.length][arr[0].length];
        for(int i = 0 ; i < arr.length ; i ++){
            for(int j = 0 ; j < arr[0].length ; j ++){
                if(arr[i][j] == s.charAt(0) && !vis[i][j]){
//                    System.out.println("at "+i+", "+j);
                    if(isWordExistUtil(arr, i, j, x, vis, s)) return true;
                }
            }
        }
        return false;
    }
     boolean isSafe(char [][]arr, int i, int j, char ch){
        return i < arr.length && j < arr[0].length && i >= 0 && j >= 0 && arr[i][j] == ch;
    }

     boolean isWordExistUtil(char [][]arr, int i, int j, int x ,boolean [][]vis, String s){
        if(x == s.length())return true;
       if(isSafe(arr, i, j, s.charAt(x)) && !vis[i][j]){
           vis[i][j] = true;
           //left
            if(isWordExistUtil(arr, i, j-1, x+1, vis, s)){
//                System.out.println("left");
                return true;
            }
            //right
            if(isWordExistUtil(arr, i, j+1, x+1, vis, s)){
//                System.out.println("right");
                return true;
            }
            //up
           if(isWordExistUtil(arr, i-1, j, x+1, vis, s)){
//               System.out.println("up");
               return true;
           }
           //down
           if(isWordExistUtil(arr, i+1, j, x+1, vis, s)){
//               System.out.println("down");
               return true;
           }
           vis[i][j] = false;
           return false;
       }
       return false;
    }
}Word Search
