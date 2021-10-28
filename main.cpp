#include <iostream>
using namespace std;

string getScore(double& score){
	string country;
	cout << "Enter name of country giving the score: " << endl;;
	cin >> country;
	cout << "Enter the score: " << endl;
	cin >> score;
	while (score < 0 || score > 10) {
		cout << "Invalid score. Enter a score between 0 and 10: ";
		cin >> score;
	}
	
	return country;
}

double findSmallest(double score1, double score2, double score3, double score4, double score5) {
	double min = 0;
	if (score1 < score2) {
		min = score1;
	}
	else {
		min = score2;
	}
	if (score3 < min) {
		min = score3;
	}
	if (score4 < min) {
		min = score4;
	}
	if (score5 < min) {
		min = score5;
	}

	return min;
}

double findLargest(double score1, double score2, double score3, double score4, double score5) {
	double max = 0;
	if (score1 > score2) {
		max = score1;
	}
	else {
		max = score2;
	}
	if (score3 > max) {
		max = score3;
	}
	if (score4 > max) {
		max = score4;
	}
	if (score5 > max) {
		max = score5;
	}

	return max;
}

double getAverage(double score1, double score2, double score3, double score4, double score5) {
	double add = score1 + score2 + score3 + score4 + score5;
	double average = (add - findLargest(score1, score2, score3, score4, score5) - findSmallest(score1, score2, score3, score4, score5)) / 3;
	return average;
}

double scoreDive(double diver) {
	double score1 = 0;
	double score2 = 0;
	double score3 = 0;
	double score4 = 0;
	double score5 = 0;
	string country1 = getScore(score1);
	string country2 = getScore(score2);
	string country3 = getScore(score3);
	string country4 = getScore(score4);
	string country5 = getScore(score5);	

	cout << endl << country1 << " score: " << score1 << endl;
	cout << country2 << " score: " << score2 << endl;
	cout << country3 << " score: " << score3 << endl;
	cout << country4 << " score: " << score4 << endl;
	cout << country5 << " score: " << score5 << endl;

	return getAverage(score1, score2, score3, score4, score5);
}

int main() {
	double diver1 = 0;
	double diver2 = 0;
	double avgScore1 = 0;
	double avgScore2 = 0;
	
	cout << "SCORING FOR DIVER 1: " << endl;
	avgScore1 = scoreDive(diver1);

	cout << "SCORING FOR DIVER 2: " << endl;
	avgScore2 = scoreDive(diver2);

	cout << endl << "Average score for Diver 1: " << avgScore1 << endl;;
	cout << "Average score for Diver 2: " << avgScore2 << endl;



}