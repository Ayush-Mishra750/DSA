class RandomizedSet {
public:
   unordered_set<int>mpp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)!=mpp.end()){
            return false;
        }
        mpp.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(mpp.find(val)!=mpp.end()){
            mpp.erase(val);
            return true;
        }
        
        return false;
    }
    
    int getRandom() {
       int index = rand() % mpp.size();

    auto it = mpp.begin();

    advance(it, index);

    return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */