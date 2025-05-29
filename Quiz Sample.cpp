#include <iostream>
using namespace std;
 int main()
 {
 	string ans1, ans2, ans3, ans4, ans5 ;
 	float pts = 0;
 	
 	cout<<"What is the capital of Japan? \t";
 	cin>>ans1;
 	
 	if (ans1 == "Tokyo"){
 		pts = pts+1;
 		cout<<"Correct answer! Next Question\n";
	 }
 	else {
 		cout<<"Wrong answer, sorry! Next Question\n";
	 }
 	
	cout<<"How many letters are repeated in the word Mississippi? \t";
 	cin>>ans2;
 	
 	if (ans2 == "Three" || ans2 == "3" || ans2 == "three"){
 		pts = pts+1;
 		cout<<"Correct answer! Next Question\n";
	 }
 	else {
 		cout<<"Wrong answer, sorry! Next Question\n";
	 } 	

 	cout<<"What is the 14th letter of the alphabet? \t";
 	cin>>ans3;
 	
 	if (ans3 == "N"){
 		pts = pts+1;
 		cout<<"Correct answer! Next Question\n";
	 }
 	else {
 		cout<<"Wrong answer, sorry! Next Question\n";
	 }
	
	cout<<"What is the 2 to the 5th power? Use Numericals only \n";
 	cin>>ans4;
 	
 	if (ans4 == "64"){
 		pts = pts+1;
 		cout<<"Correct answer! Next Question\n";
	 }
 	else {
 		cout<<"Wrong answer, sorry! Next Question\n";
	 }

	cout<<"Are you human? Yes or No\t";
 	cin>>ans5;
 	
 	if (ans5 == "Yes" || ans5=="yes"){
 		pts = pts+1;
 		cout<<"Correct answer! Check your score\n";
	 }
 	else {
 		cout<<"Wrong answer, sorry! Are you a robot? \n";
	 }
	 
	 
	cout<< "\nScore: "<<pts<<"/5 \n";
 	
 	if (pts >= 3){
 		cout<<"You got a passing score!";
	 }
	else if (pts==0){
		cout<<"0 points!? You're not even trying!";
	}
	else {
		cout<<"Passing score is 3, sorry. Try again.";
	}

 	return 0;
 }

