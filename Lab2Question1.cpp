#include <iostream>
using namespace std;


int main(){
	int row, col, typ, count, x;
	cout << "How many rows in your 2D array: " << endl;
	cin >> row;
	
	cout << "How many columns in your 2D array: " << endl;
	cin >> col;
	
	cout << "Is your 2D array Upper Triangular Matrix (Enter 1) || Lower Triangular Matrix (Enter 2) || Digonal Matrix (Enter 3) || Tri Diagonal Matrix (Enter 4) || Row Major Matrix (Enter 5) || Column Major Matrix (Enter 6)." << endl;
	cin >> typ;
	int arr[row][col];
	int finalarr[row*col];
	int arrpos = 0;
	
	//Input array data values
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout << "Please input the values for position [" << i << "] [" << j << "]" << endl;
			cin >> arr[i][j];
		}
	}
	
	switch(typ){
		case 1:
			//Upper Triangular -- works for all square matrices
			for(int k = 0; k < row; k++){
				for(int l = k+ 0; l < col; l++){
					finalarr[arrpos] = arr[k][l];
					arrpos++;
				}
			}
			break;
		
		case 2:
			//Lower Triangular -- works for all squre matrices
			for(int m = 0; m < row; m++){
				x = 0;
				for(int n = col - m; n <= col; n++){
					finalarr[arrpos] = arr[m][x];
					arrpos++;
					x++;
				}
			}
			break;
			
		case 3:
			//Diagonal Matrix
			for(int a = 0; a < row; a++){
				finalarr[arrpos] = arr[a][a];
				arrpos++;
			}
			break;
			
		case 4:
			//Tri Diagonal Matrix
			break;
			
		case 5:
			//Row Major Matrix
			break;
			
		case 6:
			//Column Major Matrix
			break;
	}
	
	
	
	//Output array
	for(int z = 0; z < arrpos; z++){
		cout << finalarr[z] << endl;
	}
	
}
//