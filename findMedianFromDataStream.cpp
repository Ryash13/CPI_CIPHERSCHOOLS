class MedianFinder {
public:
	priority_queue<int> big;
	priority_queue<int, vector<int>, greater<int>> small;
	// Adds a number into the data structure.
	void addNum(int num) {
		if (!big.empty() && num < big.top())
		{
			big.push(num);
			if (big.size() - small.size() == 1)
			{
				small.push(big.top());
				big.pop();
			}
		}
		else
		{
			small.push(num);
			if (small.size() - big.size() == 2)
			{
				big.push(small.top());
				small.pop();
			}
		}
	}

	// Returns the median of current data stream
	double findMedian() {
		if (small.size() == big.size())
			return (small.top() + big.top()) / 2.0;
		return small.top();
	}
};
