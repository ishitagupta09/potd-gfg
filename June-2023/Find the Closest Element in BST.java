class Solution
{
    //Function to find the least absolute difference between any node
    //value of the BST and the given integer.
    static int minDiff(Node  root, int K) 
    { 
        // Write your code here
        int min = Integer.MAX_VALUE;
        Node curr = root;
        while(curr != null){
            int d = Math.abs(K-curr.data);
            if(d < min){
                min = d;
            }
            // else
            // break;
            
            if(K<curr.data)
            curr = curr.left;
            else
            curr = curr.right;
        }
        return min;
    } 
