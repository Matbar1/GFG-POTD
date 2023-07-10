class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
         for (int i = 0; i < n; i++) 
            for (int j = i+1; j < n; j++) 
            {
                //swapping elements at (i,j) and (j,i).
                swap(matrix[i][j], matrix[j][i]);
            }
    
        // code here 
    }
};