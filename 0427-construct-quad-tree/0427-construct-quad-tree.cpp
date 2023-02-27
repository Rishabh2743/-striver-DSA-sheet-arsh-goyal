/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
   bool isAllsame(vector<vector<int>>& grid,int x,int y,int n)
   {
       int temp=grid[x][y];
       for (int i=x;i<x+n;i++)
       {
           for (int j=y;j<y+n;j++)
           {
               if (grid[i][j]!=temp)
                 return false;
           }
       }
       return true;
   }
    Node *make_tree(vector<vector<int>>& grid,int x,int y,int n)
    {
        if (isAllsame(grid,x,y,n))
           return new Node(grid[x][y],true);
        else
        {
            Node *root=new Node(1,false);
            root->topLeft=make_tree(grid,x,y,n/2);
            root->topRight=make_tree(grid,x,y+n/2,n/2);
            root->bottomLeft=make_tree(grid,x+n/2,y,n/2);
            root->bottomRight=make_tree(grid,x+n/2,y+n/2,n/2);
            return root;
        }
    }
    Node* construct(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        return make_tree(grid,0,0,n);
    }
};