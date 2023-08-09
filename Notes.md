# Competitive Programming Notes

## General notes:
- By default, STL containers are pass by value, meaning a copy of the container is passed into a function
- To pass STL containers through functions by reference, include the &
- Use long long if doing arithmetic
- Memory is actually pretty important, do O(1) if you can instead of O(n)
- " \n"[i == n - 1] evals to " " when i != n-1, and "\n" when i == n-1
- 
## Strings
- Uppercase ascii values are from 65 to 90 inclusive
- Lowercase ascii values are from 97 to 122 inclusive
- To convert from lowercase to uppercase, subtract 32
- To convert from uppercase to lowercase, add 32
- To convert entire string to uppercase or lowercase, use:
  - transform(s1.begin(), s1.end(), s1.begin(), ::toupper); or
  - transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
- to_string(int) converts an int to a string
- string.compare() function compares two strings
  - Ex. a.compare(b)
  - Returns 0 if strings are the same, <0 if a is smaller, >0 if a is larger
- string.erase(pos, n) removes n characters starting at position pos
- string.replace(pos, n, s) replaces n characters starting at position pos with string s
- string.find(s, pos) returns position of s inside of string after position pos, -1 if not found

## Lambda functions
[ capture clause ] (parameters) -> return-type  
{   
  function-body
}
- Capture clause of & allows function to modify variables from surrounding scope

# Sorting
- Pairs are sorted by their first elements, then by their second element by default
- make_pair(u, v) can be used to make a pair
- Struct comparison operator needs to be defined as function operator<, which should return true if the element is
  smaller than the parameter, and false otherwise. Ex. bool operator<(const STRUCTURE &p)
- Possible to give external comparison function to the sort function. Ex. bool compare(TYPE a, TYPE b)
- Lambda function: [](parameter-list) -> return-type { function-body };
- Ex. [](int a, int b) -> bool {return a > b;} // will sort the array in reverse increasing order
- Note, comparator functions return TRUE if FIRST argument is LESS than the SECOND argument

- Sort a vector:
  - sort(vector.begin(), vector.end());
- Sort an array:
  - sort(array, array+n);
- Sort a string:
  - sort(string.begin(), string.end());
- Sort with comparison function:
  sort(vector.begin(), vector.end(), compare());
- Sort with lambda comparison function:
    sort(vector.begin(), vector.end(), 
      [&](int i, int j) {
      return (a[i] - 1) % k > (a[j] - 1) % k;
    });
      );
- Use stable_sort() if you need to preserve order, applies when there are elements of equal value

### lower_bound(array, array+n, x);
- Returns a pointer to the first element whose value is at least x
- Subtracting one yields last element whose value is less than x

### upper_bound(array, array+n, x);
- Returns a pointer to the first element whose value is larger than x 
- Subtracting one yields last element whose value is equal to x

### equal_range(array, array+n, x);
- returns both above pointers (returns a pair where first is lower bound, second is upper bound)

# Data Structures

### Array
- int arr[size];
- Must initialize values of array before use
- int arr[size]= {}; initializes the array with all 0's

### Dynamic Array (vector and string)
- vector<int> v;
- vector<int> v(10); initializes a vector of size 10
- vector<int> v(10, 5); initializes a vector of size 10 with initial values 5
- vector<int> v(arr, arr + n); initializes a vector from an array 
- vector<int> v(v.begin(), v.end()); initializes a vector from another vector
- Must specify size of array before using it lmao
- vector.size() gives number of elements
- vector.back() returns last element in vector
- vector.push_back() adds the last element
- vector.pop_back() removes the last element
- string.substr(k, x) returns the substring that begins at position k for length x

### Sets (set and unordered_set)
- set<int> s;
- set<int> s(arr, arr + n); initializes a set from an array
- set<int> s(v.begin(), v.end()); initializes a set from a vector
- set.size() tells you the number of elements in the set
- set.insert() adds an element to the set
- set.count() returns the number of occurrences of an element in the set
- set.erase() removes an element from the set
- Sets can be iterated through with an enhanced for loop
- multiset and unordered_multiset can contain multiple instances of an element
  - erase will remove all instances of an element
  - To remove one instance, use multiset.erase(multiset.find(x));

### Maps (map and unordered_map)
- map<string, int> m; creates a map with string keys and integer values
- [] can be used to add and access key/value pairs to a map
- ex. map["banana"] = 4;
- If a key that is not in the map is requested, it is added to the map with default value 0
- map.size() tells you how many key/value pairs are in the map
- map.count() checks if a key exists in a map
- map.find() != map.end() also works
- Maps can be iterated through with an enhanced for loop
  - x.first contains the key, x.second contains the value

### Iterators and Ranges
- Use * to access element an iterator points to
- Iterators can be incremented/decremented and added/subtracted from each other

### Bitset
- Array whose value is either 0 or 1
- Can only initialize with constant size
- bitset<10> bs(string("1001011100"); initializes the bitset from right to left
- bitset.count() returns the number of ones in the bitset
- bit operations can be done on entire bitsets ex. a&b, a|b, a^b

### Deque
- Dynamic array whose size can be changed at both ends
- deque<int> d;
- Basically just a vector, but it also includes the functions push_front() and pop_front()
- Adding/removing from front and back are both O(1)

### Stack
- stack<int> s;
- stack.push(x) adds an element to the top of the stack
- stack.top() returns the top element
- stack.pop() removes the last element

### Queue
- queue<int> q;
- queue.push() adds an element to the back of the queue
- queue.front() returns the front element
- queue.pop() removes the front element

### Priority Queue
- A queue implemented with a max heap where popping it removes the largest element
- priority_queue<int> q;
- queue.push() adds an element into the heap
- queue.front() returns the largest element
- queue.pop() removes the largest element
- priority_queue<int, vector<int>, greater<int>> makes a minimum priority queue
- Can make a custom priority queue by passing in comparison function:
  - auto compare(T lower_priority, T higher_priority);
  - priority_queue<T, vector<T>, decltype(compare)> q(compare);

# Bit operations
- And operator: &
- Or operator: |
- Xor operator: ^
- Not operator: ~
- Bit shifts: x << k shift left by k, x >> k shift right by k
- __builtin_clz(x): the number of zeros at the beginning of the number
- __builtin_ctz(x): the number of zeros at the end of the number
- __builtin_popcount(x): the number of ones in the number
- __builtin_parity(x): the parity (even or odd) of the number of ones
- Convenient for representing sets

# Useful functions
- iota(v.begin(), v.end(), 0);
  - Fills a vector with values from 1 to n-1
- 