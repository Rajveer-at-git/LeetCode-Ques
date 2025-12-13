# include<iostream>
# include<vector>
using namespace std;
// Vector - The dynamic array 
/*vector<int> vec(5);  // Creates a vector with 5 elements, all initialized to 0
vector<int> vec(5, 10);  // Creates a vector with 5 elements, each initialized to 10
vector<int> vec;  // Declares an empty vector of integers & name = vec
vector<int> vec = {1, 2, 3, 4, 5};  // Creates a vector with 5 elements: 1, 2, 3, 4, 5

// Basic Operations on std::vector
vec.size() // Tells the size (no. of elements) inside the vector
vec.capacity() // Grows by doubling at each stage
cout << vec[2] << endl;  // Access element at index 2
cout << vec.front() << endl;  // Access first element
cout << vec.back() << endl;   // Access last element
vec.push_back(6);  // Adds 6 to the end of the vector
vec.pop_back();  // Removes the last element
vec.clear();  // Clears the vector but the Capacity remains the same
vec.erase(vec.begin()) // Deletes first element
vec.erase(vec.begin() + 1, vec begin() + 3) // Deletes second and third element
vec.insert(vec.begin() + 2, 100) // Inserts 100 at third position
vec.empty() // 0 means false, 1 means True

// Note: There's nothing called push_front in vector if Need to use push_front use deque instead.
*/
// In-action
int main()
{
vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
vec.push_back(6);

for(int val : vec)
{
cout << val << " ";
}
cout << endl;

cout << "Front: " << vec.front() << endl;
cout << "Back: " << vec.back() << endl;

vec.erase(vec.begin() + 1, vec.begin() + 3);    

for(int val : vec)
{
cout << val << " ";
}
cout << endl;

vec.insert(vec.begin()+1,100);

for(int val : vec)
{
    cout << val << " ";
}
cout << endl;

cout << "Size: " << vec.size() << endl;
cout << "Capacity: " << vec.capacity() << endl;
cout << "Is Empty? : " << vec.empty() << endl;
}
