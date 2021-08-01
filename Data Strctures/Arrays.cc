#include <iostream>
using namespace std;
int main()
{
  int lenth;
  cin >> lenth;
  int arr[lenth];
  for (int i = 0; i < lenth; i++) {
    cin >> arr[i];
  }
  for (int i = lenth-1; i >= 0; i--) {
    cout << arr[i]<<" ";
  }
    return 0;
}

//try c++ language
