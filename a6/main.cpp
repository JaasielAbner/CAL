#include<bits/stdc++.h>

using namespace std;

int* readFile( string fileName ){

	int         num;
	static int  vec[100001];
	FILE*       file;

    file = fopen( fileName.c_str(), "r" );

    memset(vec, 0, sizeof(vec) );

	while( !feof( file ) ){

		fscanf( file, "%d\n", &num );
        vec[num]++;

	}

    fclose( file );

	return vec;

}

int main(int argc, const char** argv) {
    
    int *vec;
    vector<int> sortedVec;

    vec = readFile( "entrada.txt" );

    for( int i = 0; i < 100001; i++ ){
        while( vec[i] ){
            sortedVec.push_back( i );
            vec[i]--;
        }
    }

    for( auto n:sortedVec ){
        cout << n << endl;
    }

    // for( int i = 0; i < 100001; i++ ){
    //     printf( "%d ", vec[i] );
    // }

    return 0;
}