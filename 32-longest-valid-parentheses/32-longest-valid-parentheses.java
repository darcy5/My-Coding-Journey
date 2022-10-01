class Solution {
    public int longestValidParentheses(String s) {
        Stack<Character>ct = new Stack();
        Stack <Integer> index=new Stack();
        index.add(-1); 
        int max=0;
        for(int i=0; i<s.length();i++){
            if(s.charAt(i)=='('){
                ct.add('(');
                index.add(i);
            }else{    //closing bracket condition
                if(!ct.isEmpty() && ct.peek()=='('){
                    ct.pop();
                    index.pop();
                    max=Math.max(max,i-index.peek());
                }else{index.add(i);
                     }
            } 
        }
        return max;
    }
}

//Approach : -1 0 1 2 3 4 5 6 7
//              ) ( ) ( ) ) ( )
//character stack: 
//index stack: -1,0,5
//len: max of 2,4,2