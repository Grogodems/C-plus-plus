#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers = { 1, 2, 3, 4, 5, 5 };

    int maximum = numbers[0];
    int n = numbers.size();
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
            k = 1;
        }
        else if (numbers[i] == maximum)
            ++k;
    }
    int max = *max_element(numbers.begin(), numbers.end());

    cout << max << endl;
    cout << k;
    return 0;
}
