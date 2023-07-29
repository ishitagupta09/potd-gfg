class Tree
{
    public static float findMedian(Node root)
    {
         List<Integer> inorder = new ArrayList<>();
        inorderTraversal(root, inorder);

        int size = inorder.size();
        if (size % 2 == 1) {
            // For odd-length lists, the median is the middle element
            return inorder.get(size / 2);
        } else {
            // For even-length lists, the median is the average of the two middle elements
            int midIndex = size / 2;
            int median1 = inorder.get(midIndex - 1);
            int median2 = inorder.get(midIndex);
            return (float) (median1 + median2) / 2;
        }
    }
     private static void inorderTraversal(Node root, List<Integer> inorder) {
        if (root == null) {
            return;
        }
        inorderTraversal(root.left, inorder);
        inorder.add(root.data);
        inorderTraversal(root.right, inorder);
    }
}
