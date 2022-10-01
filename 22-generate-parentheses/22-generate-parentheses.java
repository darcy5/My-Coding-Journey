class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList();
        generateAll("(",1,0,result,n);
        return result;
    }
    
    void generateAll(String current,int open,int close,List<String> result,int n){
        if(current.length()==2*n)
            result.add(current);
        
        
        if(open<n) generateAll(current + "(",open+1,close,result,n);
        if(close<open) generateAll(current + ")",open,close+1,result,n);
    }
}