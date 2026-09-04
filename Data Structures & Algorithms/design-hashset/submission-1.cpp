class MyHashSet {
public:
    vector<int> nums;

    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(nums.begin(), nums.end(), key) == nums.end()) {
            nums.push_back(key);
        }
        return;
    }
    
    void remove(int key) {
        auto it = find(nums.begin(), nums.end(), key);
        if(it != nums.end()) {
            nums.erase(it);
        }
    }
    
    bool contains(int key) {
        return find(nums.begin(), nums.end(), key) != nums.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */