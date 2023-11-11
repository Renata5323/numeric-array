#include <iostream>
int main(){
    setlocale(0,"");
    using namespace std;
    cout<<"Введите размер массива: ";
     int q;cin>>q;int w [q]; // size
    int e{};
    cout<<"\nВведите массив: ";
    while(e<q){
        cin>>w[e];
        e++;
    }
    for (e=1; e<=q;++e){
        cout<<"\n"<<w[q-e];
    }
}
