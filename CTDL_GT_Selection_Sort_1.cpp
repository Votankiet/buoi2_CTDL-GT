//Cài đặt của Selection Sort
//Link tham khảo https://gist.github.com/christophewang/6e5c4d5b3231cf345a59
void selectionSort(int *array, int n)
{
    int temp;
    int min;

    for (int i = 0; i < n; ++i)
    {
        min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}