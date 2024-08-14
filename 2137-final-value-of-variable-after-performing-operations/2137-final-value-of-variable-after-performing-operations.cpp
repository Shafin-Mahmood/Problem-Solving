class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int k = 0;
        for(int i = 0 ; i<operations.size() ; i++)
        {
            if(operations[i]=="--X")
            {
               k--;
            }
            else if(operations[i]=="X--")
            {
                k--;
            }
            else if(operations[i]=="X++")
            {
                k++;
            }
            else if(operations[i]=="++X")
            {
                k++;
            }
        }   
        return k;
    }
};