#include <queue>
#include <cstdio>
using namespace std;

int main()
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> queue;
    queue.push(2);
    queue.push(3);
    queue.push(1);
    queue.push(9);
    queue.push(5);

    while (!queue.empty()) {
        printf("%d, ", queue.top());
        queue.pop();
    }
    printf("\n");

    return 0;
}
