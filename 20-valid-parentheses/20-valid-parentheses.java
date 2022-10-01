class Solution {
    public boolean isValid(String s) {
        Stack <Character> st = new Stack<Character>();
        
        for(char p : s.toCharArray()){
            if(p=='(' || p=='{' || p=='[' ) 
                st.push(p);
            else{
                if(st.isEmpty())
                    return false;
            char c=st.pop();
            if((p==')' && c=='(') || (p=='}' && c=='{') || (p==']' && c=='['))
                continue;
            else return false;
            }
        }
        return st.isEmpty();
    }
}