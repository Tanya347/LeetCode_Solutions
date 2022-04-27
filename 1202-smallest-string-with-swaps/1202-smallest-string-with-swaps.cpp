class Solution {
public:
    static const int N = 100001;
    vector<int> adj[N];
    bool visited[N];
    
    void DFS(string& s, int vertex, vector<char>& characters, vector<int>& indices) {
        //Add the character and index to the list
        characters.push_back(s[vertex]);
        indices.push_back(vertex);
        
        visited[vertex] = true;
        
        //traverse the adjacents
        for(int adjacent : adj[vertex]) {
            if(!visited[adjacent]) {
                DFS(s, adjacent, characters, indices);
            }
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        for(vector<int> edge : pairs) {
            //buld the adjacency list
            int source = edge[0];
            int destination = edge[1];
            
            //undirected edge
            adj[source].push_back(destination);
            adj[destination].push_back(source);
        }
        
        for(int vertex = 0; vertex < s.size(); vertex++) {
            //if not covered in the DFS yet
            if(!visited[vertex]) {
                vector<char> characters;
                vector<int> indices;
                
                DFS(s, vertex, characters, indices);
                //Sort the list of characters and indices
                
                sort(characters.begin(), characters.end());
                sort(indices.begin(), indices.end());
                
                //store the sorted characters corresponding to the index
                for(int index = 0; index < characters.size(); index++) {
                    s[indices[index]] = characters[index];
                }
            }
        }
        
        return s;
    }
};