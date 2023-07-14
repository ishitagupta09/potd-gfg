class twoStacks
{
    //Function to push an integer into the stack1.
    // int top1=-1;
    // int top2=-1;
    Stack<Integer> st=new Stack<>();
     Stack<Integer> st1=new Stack<>();
    int arr[]=new int [10000];
    void push1(int x)
    {
     st.push(x);
     
    }
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       st1.push(x);
    }
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(st.size()==0)
        {
            return -1;
        }
        if(st.size()==arr.length-1)
        {
            return -1;
        }
        else
        {
            return st.pop();
        }
    }
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(st1.size()==0)
        {
            return -1;
        }
        if(st1.size()==arr.length-1)
        {
            return -1;
        }
        else
        {
            return st1.pop();
        }
    }
}
