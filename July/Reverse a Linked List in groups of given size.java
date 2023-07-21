class Solution
{
    public static Node reverse(Node head, int k)
    {
        Node current = head;
        Node prev = null;
        Node next = null;
        int count = 0;
        while (current != null && count < k) {
        next = current.next;
        current.next =  prev;
        prev = current;
            current = next;
        count++;
            }
         if(next != null){
        head.next = reverse(next,k);
    }
        return prev;
    }
}
