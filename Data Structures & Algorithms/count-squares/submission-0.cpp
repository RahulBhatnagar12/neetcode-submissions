class CountSquares {
public:
map<pair<int,int> ,int> freq;
vector<pair<int,int> >points;
    CountSquares() {
        
    }
    
    void add(vector<int> point) {
        int x=point[0];
        int y=point[1];
        freq[{x,y}]++;
        points.push_back({x,y});
    }
    
    int count(vector<int> point) {
        int x=point[0];
        int y=point[1];
        int ans=0;
        for(auto&[px,py]:points){
            if(px!=x) continue;
            if(py==y) continue;
             int d=abs(py-y);
                         ans +=
                freq[{x+d,y}] *
                freq[{x+d,py}];

            ans +=
                freq[{x-d,y}] *
                freq[{x-d,py}];

        }
        return ans;
    }
};
