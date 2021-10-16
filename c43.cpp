#include"iostream"
using namespace std;
int main()
{
	int a, n, c;
	cout <<"n:"<<endl;
	cin >> n;
	for(a = 2,c = 1; a < n, c !=0; a++) {
	  c = n % a;}
	
	if (a = n - 1){
		cout <<"是素数"<<endl;
	}	
	else
	    cout <<"不是素数"<<endl;
	

	return 0;
 } 
