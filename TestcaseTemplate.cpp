#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define int long long

#define ll long long
#define ld long double

//Declaration
template <typename T, typename P>
auto maximum( T a, P b) -> decltype((a > b)? a : b) ;

template <typename T, typename P>
auto minimum( T a, P b) -> decltype((a < b)? a : b) ;

const ll MOD = 1e9 + 7;

//============================================//

void solution(){
	//Your code goes here.
    int n,k;
    cin>>n>>k;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }  
    for(int i=0;i<n;i++){
      
    }
    cout<<endl;
}

//============================================//

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin>>t;
	
	while(t--){
	    solution();
	}
	return 0;
}

//Definition
template <typename T, typename P>
auto maximum( T a, P b) -> decltype((a > b)? a : b) {
    return (a > b)? a : b;
	
}template <typename T, typename P>
auto minimum( T a, P b) -> decltype((a < b)? a : b) {
    return (a < b)? a : b;
}
