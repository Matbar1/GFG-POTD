class Solution
{
    public:
      queue<int> rev(queue<int> q)
    {
        //using a stack to reverse the queue.
        stack<int> s;      
        while(!q.empty())
        {
            //pushing elements from queue into stack and removing them from queue.
            s.push(q.front());       
            q.pop();                 
        }
        //creating new queue.
        queue<int> a;
        while(!s.empty())
        {
            //now pushing elements back into the queue from stack and removing them 
            //from stack. queue gets reversed as stack follows last in first out.
            a.push(s.top());         
            s.pop();                
        }
        //returning reversed queue.
        return a;
    }
};