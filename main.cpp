#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

  //problem1
  /*
  string day;
  cout << " Please, enter a day: " << endl;
  cin >> day;
    if ((day == "Tuesday") || (day == "tuesday" || day == "Thursday") || (day == "thursday")) {
      cout << "You have a CS111 class today. " << endl;
    } else{
      cout << "No CS111 today! ";
    }
         //problem2
  int n;
  cout << "What is n?";
  cout << endl;
  cin >> n;
  cout << endl;
  for (int r = 1; r <= (2*n-1); r++) {
    for (int c = 1; c <= n; c++) {
      if (c <= r && c <= 2 * n - r) {
      cout << "*";
      }
    }
    cout << endl;
  }
  
  // problem 3  
  
    int x = 6, y = 0, z = 3;
    double a = 5.0, b = 4.0;
   // for (; x<=9; x++){
      cout << x << endl;
      cout << 4.0 / 6 * 3;
     
int main() {
  srand(time(0)); 
  int n = 1000 + rand() % 1001;
  cout << n << endl;
  for (int x = 0; x <= n; x++){
    if ((x * x) % 100 == 61){
      cout << x << endl;
    }
  } 
// problem 8
int main(){
  for (int n = 1; n <= 1000; n++){
    double y = sqrt(n);
    int z = (int) y;
    if ((y - z) < 0.1){
    cout << n << endl;
    }
   // cout << "Nonr\n" << sqrt(i) / 10 << endl;
   // if ( (sqrt(i) % 0) 
  }

 // problem 9
int main(){
cout << "\n\n\n";
cout << "Enter the number: " << endl;
int n = 0;
int x = 0;
int sum = 0;
cin >> n;
cout << "You entered " << n << " numbers. " << endl;
cout << "Enter " << n << " more numbers: " << endl;
  for (int counter = 0; counter < n; counter++){
    
    cin >> x;
    cout << endl;
    sum = sum + x;
    
  }cout << "The Sum is: " << sum << endl;
  cout << "The ave is " << sum / n << endl;


//problem 10
int main(){
  int x = 0, y = 0, z = 0;
  cout << "Enter the nums: ";
  cin >> x >> y >> z;
  cout << x << endl << y << endl << z << endl;
  if ((z < y) && (y < z)){
    z = y - x;
    x = y % z;
}
//problem 11
int main(){
  int x = 0;
  cout << "Enter the num: " << endl;
  cin >> x;
  for (int i = 0; i < x; i++){
    cout << "Hello" << 5%65 << endl;
  }
  int main(){
    cout << "Enter the # of triangles: " << endl;
    int n = 0;
    cin >> n;
    cout << endl;
    
    for (int t = 1; t <= n; t++)
      for (int r = 1; r <= n + 1; r++) {
        for (int c = 1; c <= n; c++)
        if (r == n + 1) cout << "-";
        else if (t % 2 == 1 && c <= r) cout << "X";
        else if (t % 2 == 0 && c >= r) cout << "X";
        else cout << " ";
        cout << endl;
      }
      // problem 13
int main(){
  int x = 0;
  int y = 0;
  int count = 0;
  cout << "Enter the number: " << endl;
  cin >> x;
  cout << "You entered " << x << endl;
  cout << "Enter a number " << x << " times more. " << endl;
  
  for (int i = 0; i < x; i++){
    cin >> y;
    if (y % 2 == 1) {
        count ++;
    } 
  }
  cout << count << " numbers were odd. " << endl;
  
  int main(){
    cout << "Enter the # of triangs. ";
    int n = 0;
    cin >> n;
    cout << endl;

    for (int t = 1; t <= n; t++){
      for (int r = 1; r <= n + 1; r++){
        for (int c = 1; c <= n; c++)
          if (r == n + 1)
            cout << "*";
            else if (t % 2 == 0 && c <= r) cout << "O";else if (t % 2 == 1 && c >= r) cout << "O";else cout << " ";cout << endl;
          
        
      }
    }*/
    //problem 17
    int main(){
      int x = 0;
      int y = 0;
      cout << "Enter 2 pos ints: " << endl;
      cin >> x >> y;
      cout << endl;

      if ((x < y)||(x==y)){
        for (int i = 0; i < x; i++){
          cout << "X";
        } 
      } else if ((x > y) || (x >= y)){
          for (int j = 0; j < y; j++){
            cout << "X";
          }
        }
      

    
      return 0;
}

   
  