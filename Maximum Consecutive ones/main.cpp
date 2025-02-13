#include <iostream>
#include <vector>
#include <algorithm>

int consecutiveOnes(std::vector<int> &arr)
{
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
        }

        maxi = std::max(maxi, count);
    }

    return maxi;
}

int main()
{
    std::vector<int> arr = {1, 1, 0, 1, 1, 1};
    std::cout << "Maximum consecutive ones: " << consecutiveOnes(arr) << std::endl;
    return 0;
}
