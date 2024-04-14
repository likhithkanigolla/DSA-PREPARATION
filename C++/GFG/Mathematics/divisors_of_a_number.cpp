#include <iostream>
using namespace std; 

int divisors_1(int n){
    if(n<0){
        return -1;
    }
    for (int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}


// TO PRINT DIVISORS EFFICIENT 
//We are considering the sets here for n=12 ->  1, 2, 3, 4, 6, 12
//  (1,12),(2,6),(3,4) are the sets 
// added if conditons for numbers n= 100 here 10 will get printed twice so added if to print only one time 

int divisors_2(int n){
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<" ";
            }
            else{
            cout<<i<<" " << n/i <<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}


// TO PRINT DIVISORS IN ORDER 
// Reason for if condition 
// Consider the number n = 12 -> answer should be 1, 2, 3, 4, 6, 12
//  In the First loop it will get printed is 1,2,3
// Now the stored value of i is 4 since i++ is there ( in loop 1 -> 3*3<12 so i++ so 3+1 becomes 4 is done )
// For i = 4, n / i = 3, so i - (n / i) = 4 - 3 = 1, which satisfies the condition.
//  if the condition is not exists then it will go to the second loop and starts from 4 which prints 12/4 =3 which is repetative 
// So now with the condition i becomes 3 and prints 12/3=4, 12/2=6, 12/1=12 gets printed. 

void divisors_3(int n)
{
	int i;
	for (i = 1; i * i < n; i++) {
		if (n % i == 0)
			cout<<i<<" ";
	}
    cout<<"i -> "<<i;
	if (i - (n / i) == 1) {
		i--;
	}
	for (; i >= 1; i--) {
		if (n % i == 0)
			cout<<n / i<<" ";
	}
}

int main(){
    int n; 
    cout<< " Enter a number:"; 
    cin>> n;
    divisors_3(n);
}