class Solution {
public:

    int makeHappy(int n){
        int tmp = n, sum = 0;
        while(tmp !=0){
            sum += (tmp % 10) * (tmp % 10);
            tmp /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        map<int, int> mymap;
        bool flag = false;
        int tmp = n;
        for(int i = 0; i < INT_MAX; i++){
            tmp = makeHappy(tmp);
            if (tmp == 1) return true;
            if (mymap.find(tmp) == mymap.end()) mymap.insert(pair<int,int>(tmp, 1));
            else return false;
        }
        return false;
    }
};
