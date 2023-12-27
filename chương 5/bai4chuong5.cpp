#include<bits/stdc++.h>
using namespace std;

void nhap(int &n, int &i, int &k){
	cout<<"nhap bien n: "; cin>>n;
	cout<<"nhap bit thu i: "; cin>>i;
	cout<<"nhap gia tri thu k can lay: "; cin>>k;
}
void turn_on_bit(int &n, int i){
	n=n | (0x1 << i);
}

int get_bit(int &n, int k){
	return (n >> k) & 0x1;
}

void turn_off_bit(int &n, int i){
	n=n & (~(0x1 << i));
}

int main(){
	int n,i,k;
	nhap(n,i,k);
	cout<<"Nhi phan ban dau: "<<bitset<8>(n)<<endl;
	turn_on_bit(n,i);
	cout<<"bat bit: "<<bitset<8>(n)<<endl;
	turn_off_bit(n,i);
	cout<<"tat bit: "<<bitset<8>(n)<<endl;
	int value=get_bit(n,k);
	cout<<"gia tri thu k lay ra la: "<<value<<endl;
	return 0;
}
