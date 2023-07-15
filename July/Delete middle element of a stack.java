class Solution{
    public void deleteMid(Stack<Integer>s,int sizeOfStack){
        if(sizeOfStack%2 ==0){
            s.remove(sizeOfStack/2-1);
        }
        else{
            s.remove(sizeOfStack/2);
        }
    } 
}

