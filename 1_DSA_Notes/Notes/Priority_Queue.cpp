#include <iostream>
#include <vector>
#include <string>
#include<queue>

using namespace std;
//For priority queue we just have to include <queue>
int main() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(6);

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}