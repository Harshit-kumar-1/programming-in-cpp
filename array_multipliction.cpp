#include <iostream>
using namespace std;
int main() {
int r1, c1, r2, c2;
cout << "Enter rows for first matrix: ";
  cin >> r1 ;
  cout << "Enter columns for first matrix: ";
  cin>> c1;
  cout << "Enter rows for second matrix: ";
  cin >> r2 ;
  cout << "Enter columns for second matrix: ";
  cin>> c2 ;
int a[r1][c1], b[r1][c1], result[r1][c1];
  // Check if multiplication is possible
  if (c1 != r2) {
    cout << "Multiplication not possible.";
    exit(0);
  }
  cout << "Elements for first matrix: \n";
  for (int i = 0; i < r1; ++i){
    for (int j = 0; j < c1; ++j){
			cout << "Enter element : ";
			cin >> a[i][j];
    }
  }
  cout << "Elements for second matrix : \n";
  for (int i = 0; i < r2; ++i){
    for (int j = 0; j < c2; ++j){
			cout << "Enter element : ";
			cin >> b[i][j];
    }
    }
  // Initialize elements of result to 0
  for (int i = 0; i < r1; ++i)
    for (int j = 0; j < c2; ++j)
      result[i][j] = 0;

  // Multiply two matrices and store result in result matrix
  for (int i = 0; i < r1; ++i){
    for (int j = 0; j < c2; ++j){
      for (int k = 0; k < c1; ++k){
        result[i][j] += a[i][k] * b[k][j];
      }
      }
      }
  cout << "Result matrix: " << endl;
  for (int i = 0; i < r1; ++i) {
    for (int j = 0; j < c2; ++j)
      cout << result[i][j] << " ";
    cout << endl;
  }

  return 0;
}
