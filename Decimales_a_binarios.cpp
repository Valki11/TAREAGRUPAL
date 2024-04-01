//Números de decimales a binarios
#include<iostream>
#include<vector>
using namespace std;
main(){
	int num=0;
	vector<int> bits;
	cout<<"Escriba el número que desea convertir a decimal: ";
	cin>>num;
	
	while (num>=1){
	   int	total=num%2;
		bits.push_back(total);
		num /= 2;
	}
	
	for (int i = bits.size() - 1; i >= 0; --i) {
        cout << bits[i];
    }
	cout<<endl;
	
}