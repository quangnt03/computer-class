#include<bits/stdc++.h>
using namespace std;

int cot[9], n;
int ddHang[9]={0};
int dd_Cheo1[14]={0}, dd_Cheo2[16]={0};

void print(){
  for(int i = 0; i < n; i++){
    cout << cot[i] << " ";
  }
  cout << "\n";
}

void backTrack(int i){
  for(int j = 0; j < n; j++){
    if(ddHang[j] == 0 && dd_Cheo1[i-j] == 0 && dd_Cheo2[i+j] == 0){
      cot[i] = j;
      ddHang[j] = 1;
      dd_Cheo1[i-j]=1;
      dd_Cheo2[i+j]=1;
    
      if(i == n)
        print();

      else
        backTrack(i+1);

      ddHang[j] = 0;
      dd_Cheo1[i - j] = 0;
      dd_Cheo2[i + j] = 0;
    }
  }
}

int main(){
  cin >> n;
  backTrack(1);
  return 0;
}