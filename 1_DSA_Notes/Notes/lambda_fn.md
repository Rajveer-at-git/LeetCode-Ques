# Core Concept

A lambda is an anonymous (nameless), inline function. It is primarily used to pass custom logic directly into C++ STL algorithms without having to write a separate, standalone function.

The Syntax Anatomy:
[capture_clause](parameters) { body };

1. The Capture Clause [] (The Backdoor)
This dictates which local variables from the surrounding code the lambda is allowed to see and use.

[]: Capture nothing. The lambda is completely isolated.

[x]: Capture x by value. The lambda gets a read-only snapshot copy.

[&x]: Capture x by reference. The lambda can view and modify the original x.

[=]: Capture all surrounding local variables by value.

[&]: Capture all surrounding local variables by reference.

2. Parameters () (The Front Door)
This is exactly the same as standard function parameters. When used with STL algorithms (like for_each or remove_if), the algorithm automatically feeds data into these parameters (e.g., passing array elements one by one).

3. The Body {}
The actual code to execute. C++ will automatically figure out the return type based on what you return inside the body.

# Code:

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int limit = 3; // An outside variable

    // We capture 'limit' by value, and the algorithm passes 'n'
    int count = count_if(nums.begin(), nums.end(), [limit](int n) {
        return n > limit; 
    });

    cout << count << "\n"; // Output: 2

    return 0;
}