#pragma comment(linker, "/STACK:16777216")
#pragma warning(disable:4786)
 
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <ctime>
#include <bitset>
#include <vector>
#include <cstdio>
#include <cctype>
#include <string>
#include <utility>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <numeric>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <functional>
 
using namespace std;
 
#define MAX_SIZE 100100
#define MAX_LENGTH 1001
#define INF ( 1 << 29 )
 
#define CLR( a ) memset( a , NULL , sizeof( a ) )
#define MEM( a ) memset( a , -1 , sizeof( a ) )
#define fort( a , b ) for( ind = ( a ); ind <= ( b ); ind++ )
#define foriab( a , b ) for( i = ( a ); i < ( b ); i++ )
#define fori( a ) for( i = 0; i < ( a ); i++ )
#define forj( a ) for( j = 0; j < ( a ); j++ )
#define print1( a ) printf( "%d ---\n" , ( a ) )
#define print2( a , b ) printf( "%d %d ---\n" , ( a ) , ( b ) )
 
typedef __int64 lll ;
 
int MIN( int a , int b ) { return a < b ? a : b ; }
int MAX( int a , int b ) { return a > b ? a : b ; }
int GCD( int a , int b ) { while( b ) b ^= a ^= b ^= a %= b ; return a ; }
int LCM( int a , int b ) { return a * ( b / GCD( a , b ) ) ; }
void SWAP( int &a , int &b ) { a = a ^ b ; b = a ^ b ; a = a ^ b ; }
 
const double PI = acos( -1 ) ;
const double EPS = 1e-11 ;
 
struct st {
    int x , y ;
} brr[ MAX_SIZE ] ;
 
int arr[ MAX_LENGTH ][ MAX_LENGTH ] ;
int dx[] = { 0 , 0 , 0 , +1 , +1 , +1 , +2 , +2 , +2 } ;
int dy[] = { +0 , +1 , +2 , +0 , +1 , +2 , +0 , +1 , +2 } ;
 
int main() {
    //freopen( "B.in" , "r" , stdin ) ;
	//freopen( "out.txt" , "w" , stdout ) ;
	int T , res , n , i , ind , j , m , z , nx , ny , k ;
	while( scanf( "%d" , &n ) != EOF ) {
	    scanf( "%d" , &m ) ;
	    fori( m ) {
	        scanf( "%d" , &brr[ i ].x ) ;
	        scanf( "%d" , &brr[ i ].y ) ;
	        brr[ i ].x-- ;
	        brr[ i ].y-- ;
	    }
        res = INF ;
        int lo , hi , mi ;
        lo = 0 ;
        hi = m - 1 ;
        for( k = 0 ; k < 20 ; k++ ) {
            mi = ( lo + hi ) / 2 ;
            //print1( mi ) ;
            bool fl = 0 ;
            CLR( arr ) ;
            for( i = 0 ; i <= mi ; i++ ) {
                arr[ brr[ i ].x ][ brr[ i ].y ] = 1 ;
            }
            fori( n ) {
                forj( n ) {
                    bool gl = 1 ;
                    for( z = 0 ; z < 9 ; z++ ) {
                        nx = i + dx[ z ] ;
                        ny = j + dy[ z ] ;
                        if( nx >= 0 && nx < n && ny >= 0 && ny < n && arr[ nx ][ ny ] == 1 ) {
                        }
                        else {
                            gl = 0 ;
                            break ;
                        }
                    }
                    if( gl ) {
                        fl = 1 ;
                        break ;
                    }
                }
                if( fl ) { break ; }
            }
            if( fl ) {
                res = mi + 1 ;
                hi = mi - 1 ;
            }
            else {
                lo = mi + 1 ;
            }
        }
        if( res == INF ) {
            res = -1 ;
        }
		printf( "%d\n" , res ) ;
	}
	return 0 ;
}
