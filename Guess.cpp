#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <clocale>

using namespace std;


int main() {
	
	setlocale(LC_ALL,"Turkish");
	
	int guessNumber,lowerLimit = 0,upperLimit = 100;
	string answer;

	
	srand(time(0));
	guessNumber = rand()%100+1;
	
	cout << "��inizden 1 ile 100 aras�nda bir say� tutun." << endl;
	cout << endl;
	
	cin.ignore();
	
	cout << "Tutu�unuz say� bu mu? (up,down,correct): " << guessNumber << endl;
	cout << "Cevap: ";
    cin >> answer;
    cout << endl;
    
 if(answer=="up" || answer=="down" || answer=="correct"){
    for(int i = 0;i<100;i++){
    	
	if(answer=="up"){
		
		lowerLimit = guessNumber + 1;
		guessNumber = (upperLimit + lowerLimit )/2;
		
	    cout << "Tutu�unuz say� bu mu? (up,down,correct): " << guessNumber << endl;
	    cout << "Cevap: ";
        cin >> answer;
        
        cout << endl;
        continue;
	}
	if(answer=="down"){
		
	    upperLimit = guessNumber - 1;
		guessNumber = (upperLimit + lowerLimit )/2;
		
		cout << "Tutu�unuz say� bu mu? (up,down,correct): " << guessNumber << endl;
		cout << "Cevap: ";
        cin >> answer;
        
        cout << endl;
        continue;
	}
	if(answer=="correct"){
		
		cout << "Ha ha ha tahmin ettim say�n: " << guessNumber << endl;
	    cout << endl;
		
		break;	
	}
}}else
cout << "Yanl�� yazd�n�z.";
	return 0;
}
