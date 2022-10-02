#include <iostream>

int fibonacci(int number)
{
    if (number == 0)
        return 0; // ������� ������ (������� ����������)
    if (number == 1)
        return 1; // ������� ������ (������� ����������)
    return fibonacci(number - 1) + fibonacci(number - 2);
}

// ������� ������ 13 ����� ���������
int main()
{
    int n;
    std::cout << "enter number\n";
    std::cin >> n;
    int count = 0;
    while (count < n) {
        std::cout << fibonacci(count) << " ";
        ++count;
    }
    std::cout << "\nDone\n";
    std::cout << "enter any button to exit\n";
    std::cin>>n;
    return 0;
}