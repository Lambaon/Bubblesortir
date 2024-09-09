#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] 
> arr[j + 1]) {
                // Меняем элементы местами
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90,129,3214,4,1,54,122112};

    cout << "Исходный массив: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr);

    cout << "\nОтсортированный массив: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

std::cout <<"Hello World \n";
int b = 15;
int a = 100; // 0 якщо числа не рівняются 
int c = a == b;
std::cout <<c;

int gra = a - b;
int gr = gra + b + a;
int g = gr * a;
std::cout <<"\nЧисло \n"<< g << std::endl;
cout << "Prosto";




}
