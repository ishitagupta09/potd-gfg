class Solution {
    public static ArrayList<Integer> kthSmallestNum(int n, int[][] rangel, int qn, int[] queries) {
        // code here
        Arrays.sort(rangel, (a,b) ->a[0]-b[0]);
        // for(int i=0;i<n;i++)
        // System.out.println(range[i][0]+"-"+range[i][1]);
        ArrayList<Integer> ans= new ArrayList<>();
        ArrayList<int[]> range=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            range.add(new int[]{rangel[i][0],rangel[i][1]});
        }
        int rem=0;
        for(int i=1;i<n-rem;i++)
        {
            if(range.get(i)[0]<range.get(i-1)[1])
            {
                range.get(i-1)[1]=Math.max(range.get(i)[1],range.get(i-1)[1]);
                range.remove(i);
                i--;
                rem++;
            }
        }
        int max=0;
        for(int q:queries)
        {
            int k=0;
            boolean flag=false;
            for(int i=0;i<range.size();i++)
            {
                int start=range.get(i)[0];
                if(i>0)
                {
                    if(range.get(i)[0]<=range.get(i)[1] && range.get(i)[1]<=range.get(i-1)[1])
                    continue;
                    if(range.get(i)[0]<=range.get(i-1)[1])
                    start=range.get(i-1)[1]+1;
                }
                int rlen=range.get(i)[1]-start+1;
                if(k+rlen<q)
                {
                    k=k+rlen;
                    continue;
                }
                else
                {
                    int cans=start+(q-k)-1;
                    ans.add(cans<=range.get(i)[1]?cans:-1);
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            ans.add(-1);
            
        }
        
        return ans;
    }
}
