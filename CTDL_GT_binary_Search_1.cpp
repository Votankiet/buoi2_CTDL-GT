//cài đặt của Binary Search
// nguồn tham khảo https://gist.github.com/christophewang/da7e308c627dcc816831
int binarySearch(int *array, int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int middle = (low + high) / 2;
        if (array[middle] == target)
            return middle;
        else if (array[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}