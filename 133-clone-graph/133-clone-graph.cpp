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
    
    Node* dfs(Node* node, unordered_map<int, Node*>& visited) {
        
        Node *n = new Node(node -> val);
        visited[node -> val] = n;
        
        for(int i = 0; i < node -> neighbors.size(); i++) {
            
            if(visited.find(node -> neighbors[i] -> val) == visited.end()) {
                
                Node *new_node = dfs(node -> neighbors[i], visited);
                n -> neighbors.push_back(new_node);
                
            }
            
            else {
                n -> neighbors.push_back(visited.find(node -> neighbors[i] -> val) -> second);
            }
        }
        
        return n;
    }
    
    Node* cloneGraph(Node* node) {
        if(node == nullptr)
            return nullptr;
        
        unordered_map<int, Node*> visited;
        
        return dfs(node, visited);
    }
};