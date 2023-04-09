/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
   class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> h;
        queue<Node*> qu;
        if (node == NULL) return NULL;
        qu.push(node);
        h[node] = new Node(node->val);
        while (!qu.empty()) {
            Node* cur = qu.front();
            qu.pop();
            Node* cl = h[cur];
            for (auto next:cur->neighbors) {
                auto p = h.find(next);
                if (p == h.end()) {
                    Node* n = new Node(next->val);
                    h[next] = n;
                    qu.push(next);
                    cl->neighbors.push_back(n);
                }
                else {
                    cl->neighbors.push_back(p->second);
                }
            }
        }
        return h[node];
    }
};