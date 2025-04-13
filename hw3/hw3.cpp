#include <iostream>


int find_sum(double* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

void initialize_array(double* arr, int size)
{
    srand(time(0));
    const int MAX = 10;
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % MAX;
    }

}

void print_array(double* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void change_array(double* arr, int size, int sum)
{
    if (sum > 100)
    {
        for (int i = 0; i < size; ++i)
        {
            arr[i] *= 10;
        }
    }
    else
    {
        for (int i = 0; i < size; ++i)
        {
            arr[i] /= 10;
        }
    }
}

int main()
{
    int size;
    std::cout << "Enter size: " << std::endl;
    std::cin >> size;

    double* arr = new double[size];
    initialize_array(arr, size);
    std::cout << "Default array: " << std::endl;
    print_array(arr, size);
    int sum = find_sum(arr, size);

    change_array(arr, size, sum);
    std::cout << "Result array: ";
    print_array(arr, size);
    delete[] arr;
}

/*
3)  —творити масив у heap.–озм≥р запитати у користувача.
«наченн€ - рандомн≥.якщо сума елемент≥в масива б≥льше 100,
то помножити кожен елемент масива на 10. якщо сума елемент≥в масива
меньше або дор≥внюЇ 100 то кожен елемент масива под≥лити на 10.\
*/