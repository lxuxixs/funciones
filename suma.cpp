#include<iostream>
using namespace std;
int suma(int u, int v){
    return u+v;
}
main(){
    int u,v;
    cout<<"ingrese el primer  numero :";cin>>u;
    cout<<"ingrese el segundo  numero :";cin>>v;
    cout<<"\nla suma de "<< u <<" + "<< v <<" es:"<<suma(u,v);
}
