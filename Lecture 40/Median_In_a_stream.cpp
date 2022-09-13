class MedianFinder {
public:
    MedianFinder() {

    }
    priority_queue<int>Maxi;
    priority_queue<int, vector<int>, greater<int>>Mini;

    void addNum(int num) {
        Maxi.push(num);
        Mini.push(Maxi.top());
        Maxi.pop();

        if (Mini.size() > Maxi.size()) {
            Maxi.push(Mini.top());
            Mini.pop();
        }
    }

    double findMedian() {
        if ((Maxi.size() + Mini.size()) % 2 == 0) {
            double ans = (double)(Maxi.top() + Mini.top()) / 2;
            return ans;
        }
        return Maxi.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */