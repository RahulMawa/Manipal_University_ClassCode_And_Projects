#include <iostream>
using namespace std;

int main(){
	int row, col, hold, x, y, val;
	cout << "How many rows in your 2D array: " << endl;
	cin >> row;
	
	cout << "How many columns in your 2D array: " << endl;
	cin >> col;
	
	int arr[row][col];
	int finalarr[row*col];
	int arrpos = 0;
	int totnonzero = 0;
	
	//First three values of the final array --- convention
	//total rows
	finalarr[arrpos] = row;
	arrpos++;
	
	//total columns
	finalarr[arrpos] = col;
	arrpos++;
	
	//total values - temporary
	finalarr[arrpos] = 0;
	arrpos++;
	
	
	//Input array data values
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout << "Please input the values for position [" << i << "] [" << j << "]" << endl;
			cin >> arr[i][j];
			hold = arr[i][j];
			
			if(arr[i][j] != 0){
				//counter
				totnonzero++;
				
				//row
				finalarr[arrpos] = i;
				arrpos++;
				
				//col
				finalarr[arrpos] = j;
				arrpos++;
				
				//value
				finalarr[arrpos] = hold;
				arrpos++;
				
			}
		}
	}
	
	//update true total non zero value
	finalarr[2] = totnonzero;
	
	
	//output 1D array
	cout << "------------- 1 d arrar ----------------------" << endl;
	for(int z = 0; z < arrpos; z+= 3){
		cout << "[" << finalarr[z] << ", " << finalarr[z+1] << ", " << finalarr[z+2] << "]" << endl;
	}
	
	
	//reconstruct the array
	cout << "------------- reconstruct the array ----------------------" << endl;
	int recon[row][col];
	
	//populate with zero
	for(int k = 0; k < row; k++){
		for(int l = 0; l < col; l++){
			recon[k][l] = 0;
		}
	}
	
	//change some values with non zero --- error
	for(int c = 3; c < totnonzero; c+=3){
		x = finalarr[c];
		y = finalarr[c + 1];
		val = finalarr[c + 2];
		
		recon[x][y] = val;
		//c+=2;
	}
	
	//output reconstructed matrix
	for(int e = 0; e < row; e++){
		for(int f = 0; f < col; f++){
			cout << recon[e][f] << endl;
		}
		cout << "---" << endl;
	}
	
	
}
//
