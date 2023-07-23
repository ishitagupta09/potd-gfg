class Solution
{
    static Node segregate(Node head)
    {
        // add your code here
         HashMap<Integer,Integer> numCount = new HashMap<>();
        Node temp = head;
        int count = 0;
        while(temp != null){
            if(numCount.containsKey(temp.data)){
            count = numCount.get(temp.data);
            numCount.put(temp.data,count + 1);
            }else{
                numCount.put(temp.data, 1);
            }
            temp = temp.next;
        }
        temp = head;
        int number = 0;
        for(int i  = 0 ; i < 3 ; i++){
            if(!numCount.containsKey(i)){
                continue;
            }
            else{
                number = numCount.get(i);
                while(number != 0){
                    temp.data = i;
                    temp = temp.next;
                    number--;
                }
            }
       
        }
        return head;
    }
}
