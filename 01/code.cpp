#include <iostream>
#include <unordered_set>
using namespace std;
bool isPairAvailable(int array[], int size, int sum);
int main(int argc, char const *argv[])
{
    int size, i, sum;
    cin >> size;
    int array[size];
    for (i = 0; i < size; i++)
        cin >> array[i];
    cin >> sum;
    cout << (isPairAvailable(array, size, sum) ? "true" : "false") << endl;
    return 0;
}
bool isPairAvailable(int array[], int size, int sum)
{
    int temp;
    unordered_set<int> a_set;
    for (int i = 0; i < size; i++)
    {
        temp = sum - array[i];
        if (temp >= 0 && a_set.find(temp) != a_set.end())
            return true;
        a_set.insert(array[i]);
    }
    return false;
}