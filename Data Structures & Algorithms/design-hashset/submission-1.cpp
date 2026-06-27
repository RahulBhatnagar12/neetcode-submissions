class MyHashSet {
public:
vector<bool >keys;
    MyHashSet() {
        keys.resize(1000001,false);

    }
    
    void add(int key) {
        keys[key]=true;
    }
    
    void remove(int key) {
        keys[key]=false;
    }
    
    bool contains(int key) {
        if(keys[key]==true ) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */