#include<iostream>
using namespace std;
int main (){
int num;
int sum=0;
int temp=num;
int rem;
cout<<"enter any number"<<"\n";
cin>>rem;
while(num>0)
 rem=(num%10);
 temp=temp+rem*rem*rem;
 num=num/10;
if(temp==sum)
{
    cout<<"this is armstrong"<<"\n";
}
else
{
    cout<<"not armstrong"<<"\n";
}
}
// #include <iostream>
// #include <cmath>
// using namespace std;


// bool isArmstrong(int num) {
//     int digits[10];  
//     int count = 0;   
//     int temp = num;  
//     int sum = 0;    
//     while (temp > 0) {
//         digits[count++] = temp % 10;
//         temp /= 10;
//     }
//     for (int i = 0; i < count; i++) {
//         sum += pow(digits[i], count); 
//     }

//     return sum == num;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number." <<"\n";
//     } else {
//         cout << num << " is not an Armstrong number." <<"\n";
//     }

//     return 0;
// }