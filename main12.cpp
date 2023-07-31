#include <iostream>
using namespace std;
 void funsum (int arr[][3], int rows, int colums){
   for(int i=0; i<3; i++){
     int sum =0;
     for(int j=0; j<3; j++){
       sum = sum+ arr[i][j];
         }
     cout<<sum<<endl;
   }

 }

int main(){
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  funsum (arr,3,3);
  return 0;
}