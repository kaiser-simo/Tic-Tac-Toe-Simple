#include <iostream>
using namespace std;
int main(){
	int masiv[4][4];
	int player = 1;
	cout<<"Player 1's turn"<<endl;
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			masiv[i][j] = 0;
			if(j == 3){
				cout<<masiv[i][j]<<endl;
			}else{
				cout<<masiv[i][j];
			}
		}
	}
	while(1){
		if(player == 1){
			int a,b;
			cin >> a >> b;
			if(masiv[a][b] == 0){
				masiv[a][b] = 1;
			}else{
				cout<<"dai pak"<<endl;
				cin >> a >> b;
				masiv[a][b] = 1;
			}
			player = 2;
		}
		system("cls");
		cout<<"Player 2's turn"<<endl;
		for(int i = 1; i < 4; i++){
			for(int j = 1; j < 4; j++){
				if(j == 3){
				cout<<masiv[i][j]<<endl;
				}else{
				cout<<masiv[i][j];
			}
		}
	}
			if(masiv[1][1] == 1 && masiv[1][2] == 1 && masiv[1][3] == 1){cout<<"Player 1 wins!"<<endl; return 0;} // red
			if(masiv[1][1] == 1 && masiv[2][2] == 1 && masiv[3][3] == 1){cout<<"Player 1 wins!"<<endl; return 0;} // desen diagonal
			if(masiv[1][1] == 1 && masiv[2][1] == 1 && masiv[3][1] == 1){cout<<"Player 1 wins!"<<endl; return 0;} // lqva kolona
			if(masiv[1][3] == 1 && masiv[2][2] == 1 && masiv[3][1] == 1){cout<<"Player 1 wins!"<<endl; return 0;} // lqv diagonal
			if(masiv[1][2] == 1 && masiv[2][2] == 1 && masiv[3][2] == 1){cout<<"Player 1 wins!"<<endl; return 0;} //sredna kolona
			if(masiv[1][3] == 1 && masiv[2][3] == 1 && masiv[3][3] == 1){cout<<"Player 1 wins!"<<endl; return 0;} // dqsna kolona
		if(player == 2){
			int a,b;
			cin >> a >> b;
			if(masiv[a][b] == 0){
				masiv[a][b] = 2;
			}else{
				cout<<"dai pak"<<endl;
				cin >> a >> b;
				masiv[a][b] = 2;
			}
			player = 1;
		}
		system("cls");
		cout<<"Player 1's turn"<<endl;
		for(int i = 1; i < 4; i++){
			for(int j = 1; j < 4; j++){
				if(j == 3){
				cout<<masiv[i][j]<<endl;
					}else{
					cout<<masiv[i][j];
				}
			}
		}
			if(masiv[1][1] == 2 && masiv[1][2] == 2 && masiv[1][3] == 2){cout<<"Player 2 wins!"<<endl; return 0;} // red
			if(masiv[1][1] == 2 && masiv[2][2] == 2 && masiv[3][3] == 2){cout<<"Player 2 wins!"<<endl; return 0;} // desen diagonal
			if(masiv[1][1] == 2 && masiv[2][1] == 2 && masiv[3][1] == 2){cout<<"Player 2 wins!"<<endl; return 0;} // lqva kolona
			if(masiv[1][3] == 2 && masiv[2][2] == 2 && masiv[3][1] == 2){cout<<"Player 2 wins!"<<endl; return 0;} // lqv diagonal
			if(masiv[1][2] == 2 && masiv[2][2] == 2 && masiv[3][2] == 2){cout<<"Player 2 wins!"<<endl; return 0;} //sredna kolona
			if(masiv[1][3] == 2 && masiv[2][3] == 2 && masiv[3][3] == 2){cout<<"Player 2 wins!"<<endl; return 0;} // dqsna kolona
	}
	return 0;
}
