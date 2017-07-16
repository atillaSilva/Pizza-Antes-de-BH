#include<iostream>

using namespace std;

int main(){
	int n,d;
	string aux;
	int p;
	while(cin >> n >> d){
		string data = "";
		bool flag = false;
		for(int i = 0; i < d; i++){
			cin >> aux;
			int conta = 0;
			for(int j = 0; j < n; j++){
				cin >> p;
				conta += p;
			}
			if(conta == n && flag == false){
				data = aux;
				flag = true;
			}
		}
		if( data == ""){
			cout << "Pizza antes de FdI" << endl;
		}
		else{
			cout << data << endl;
		}
	}
}