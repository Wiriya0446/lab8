#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
char findGrade(float x){
	if(x>90){
		return 'A' ;
	}if(x<=90&&x>75){
		return 'B';
	}if(x<=75&&x>60){
		return'C';
	}if(x<=60&&x>45){
		return 'D';
	}else{
		return'F';
	}
}
int main(){

	int N ,j;
	int i=j=0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	

	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin>>score[i];
		i++;
	}


	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(j < N){
		cout << setw(25) << name[j] << setw(8) << score[j] << setw(8) << findGrade(score[j]) << "\n";
		j++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
