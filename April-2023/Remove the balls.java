class Ball{
    int color;
    int radius;
    public Ball(int color,int radius){
        this.color=color;
        this.radius=radius;
    }
}
class Solution {
    public static int finLength(int N, int[] color, int[] radius) {
        Stack<Ball>S1= new Stack<>();
        Stack<Ball>S2= new Stack<>();
        
        for(int i=0;i<N;i++){
            S1.push(new Ball(color[i],radius[i]));
        }
        while(!S1.isEmpty()){
             Ball Temp1=S1.pop();
            if(S2.isEmpty()){
                S2.push(Temp1);
            }
            else{
                if(S2.peek().color!=Temp1.color ||S2.peek().radius!=Temp1.radius){
                    S2.push(Temp1);
                }
                else
                {
                    S2.pop();
                }
            }
        }
        return S2.size();
    }
}
