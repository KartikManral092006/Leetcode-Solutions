class Solution {
    public:
    void deleteMid(stack<int>& s){
        int size = s.size();
        del(s,0,size);
    }
  private:
    // Function to delete middle element of a stack.
    void del(stack<int>& s, int current ,int size) {
      if(current == size /2) {
          s.pop();
          return ;
      }
      int top = s.top();
      s.pop();
      del(s , current+1 ,size);
      s.push(top);

    }
};
