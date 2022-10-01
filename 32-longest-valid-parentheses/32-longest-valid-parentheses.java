class Solution {
    public int longestValidParentheses(String s) {
        Stack <Integer> index=new Stack();
        index.add(-1); 
        int max=0;
        for(int i=0; i<s.length();i++){
            if(s.charAt(i)=='('){
                index.add(i);
            }else{ 
                index.pop();
                if(!index.isEmpty()){
                    max=Math.max(max,i-index.peek());
                }else{index.add(i);
                     }
            } 
        }
        return max;
    }
}
