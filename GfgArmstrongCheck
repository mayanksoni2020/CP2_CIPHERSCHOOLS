#include<bits/stdc++.h>

using namespace std;

int main() {
   int num,remainder, n = 0, result = 0;
   cout << "Enter an integer: ";
   cin >> num;

   int temp = num;

   while (temp > 0) {
      temp /= 10;
      ++n;
   }
   
   temp = num;

   while (temp != 0) {
      remainder = temp % 10;
      result += round(pow(remainder, n));
      temp /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}
