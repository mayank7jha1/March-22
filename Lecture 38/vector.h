template<typename T>

class vector {
	int current_size;
	int total_size;
	T *arr;
public:
	vector() {
		current_size = 0;
		total_size = 1;
		arr = new T[total_size];
	}
	void push_back(const T d) {
		if (current_size == total_size) {
			T *oldArr = arr;
			arr = new T[total_size * 2];
			total_size = total_size * 2;
			for (int i = 0; i < current_size; i++) {
				arr[i] = oldArr[i];
			}
			delete [] oldArr;
		}
		arr[current_size] = d;
		current_size++;
	}
	void pop_back() {
		current_size--;
	}

	T front() const {
		return arr[0];
	}
	T back() const  {
		return arr[current_size - 1];
	}

	bool empty() const {
		if (current_size == 0) {
			return true;
		} else {
			return false;
		}
		//return current_size == 0;
	}
	int capacity() const  {
		return total_size;
	}
	int size() const {
		return current_size;
	}
	T at(int i) {
		return arr[i];
	}

	T operator[](const int i) {
		return arr[i];
	}
};