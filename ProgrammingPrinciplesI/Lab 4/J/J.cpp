#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;

    int num[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin >> num[i][j];

        }
    }
    int c;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c = i+j;
            if(c%2==0){
                num[i][j]++;
            }else{
                num[i][j]--;
            }

        }
    }



        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cout << num[i][j]<< " ";

        }
        cout << endl;
    }


}