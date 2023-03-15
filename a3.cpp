#include <iostream>

int count_even(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    std::cout << "5 phan tu dung dau mang: " << count_even(arr, 5) << std::endl;
    std::cout << "5 phan tu dung cuoi mang: " << count_even(&arr[size-5], 5) << std::endl;

    return 0;
}
