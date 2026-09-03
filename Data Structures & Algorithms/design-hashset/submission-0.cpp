class MyHashSet {
public:
    vector<int> arr;

    MyHashSet() {

    }
    
    void add(int key) {
        if(find(arr.begin(), arr.end(), key) == arr.end()) {
            arr.push_back(key);
        }
        return;
    }
    
    void remove(int key) {
        auto it = find(arr.begin(), arr.end(), key);
        if(it != arr.end()) {
            arr.erase(it);
        }
    }
    
    bool contains(int key) {
        return find(arr.begin(), arr.end(), key) != arr.end();
    }
};

