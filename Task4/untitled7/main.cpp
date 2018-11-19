#include <QCoreApplication>
#include  <iostream>



using namespace std;


int main()
{

    int N;
    int *arr;
    cout << "Enter N" << endl;
    cin >> N;
    arr = new int[N];
    cout << "Enter array of size: " << N << endl;
    for (int i = 0; i < N; i++){
        cin >> arr[i];
        cout <<  i + 1  << " Element of array " << arr[i] << endl;
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N - i - 1; j++){
        if (arr[j] > arr[j + 1]){
            int result = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = result;
        }
    }
    cout << endl;
    for (int i = 0; i < N; i++)
      cout << arr[i] << " ";
    delete [] arr;
    system("Pause");
    return 0;
}
