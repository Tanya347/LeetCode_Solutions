class MyHashSet {
    vector<int> hash;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        hash.push_back(key);
    }
    
    void remove(int key) {
        hash.erase(std::remove(hash.begin(), hash.end(), key), hash.end());
    }
    
    bool contains(int key) {
        return find(hash.begin(), hash.end(), key) != hash.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */