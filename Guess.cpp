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
	
	cout << "Ýçinizden 1 ile 100 arasýnda bir sayý tutun." << endl;
	cout << endl;
	
	cin.ignore();
	
	cout << "Tutuðunuz sayý bu mu? (up,down,correct): " << guessNumber << endl;
	cout << "Cevap: ";
    cin >> answer;
    cout << endl;
    
 if(answer=="up" || answer=="down" || answer=="correct"){
    for(int i = 0;i<100;i++){
    	
	if(answer=="up"){
		
		lowerLimit = guessNumber + 1;
		guessNumber = (upperLimit + lowerLimit )/2;
		
	    cout << "Tutuðunuz sayý bu mu? (up,down,correct): " << guessNumber << endl;
	    cout << "Cevap: ";
        cin >> answer;
        
        cout << endl;
        continue;
	}
	if(answer=="down"){
		
	    upperLimit = guessNumber - 1;
		guessNumber = (upperLimit + lowerLimit )/2;
		
		cout << "Tutuðunuz sayý bu mu? (up,down,correct): " << guessNumber << endl;
		cout << "Cevap: ";
        cin >> answer;
        
        cout << endl;
        continue;
	}
	if(answer=="correct"){
		
		cout << "Ha ha ha tahmin ettim sayýn: " << guessNumber << endl;
	    cout << endl;
		
		break;	
	}
}}else
cout << "Yanlýþ yazdýnýz.";
	return 0;
}
