#include <iostream>
#define SIZE 5

using namespace std;

void fill(int massive[]){
    for(int i=0;i<SIZE;i++){
        cout<<"["<<i+1<<"]:";
        cin>> massive[i];
    }
}

void fill_out(int massive[]){
    for(int i=0;i<SIZE;i++){
        cout<<massive[i]<<" ";
    }
}

void bubbleSort(int massive[]){
    for(int i=0;i<SIZE-1;i++){
        for(int j=0;j<SIZE;j++){
            if(massive[j]>massive[j+1])
                swap(massive[j],massive[j+1]);

        }
    }
}

void output(int massive[]){
    for(int i=0;i<SIZE;i++){
        cout<<massive[i]<<" ";
    }
}

int main() {

    int n,massive[SIZE];

    cout<<"Fill the massive:"<<endl;
    fill(massive);
    cout<<"Our massive is: ";
    fill_out(massive);
    cout<<"\nThe sorted massive is: ";
    bubbleSort(massive);
    output(massive);



    return 0;
}