#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int k;
	cout << "How many times do you want to play? ";
	cin >> k;
	while(k)
    {
        int card1 = rand() %100 + 1;
        int card2 = rand() %100 + 1;
        int Bobs_choice;
        cout << "The value of card1 is: " << card1 << endl;
        cout << "Pick one card.";
        if(card1 >= 50) Bobs_choice = card1;
        else Bobs_choice = card2;
        cout << "Bob choose card ";
        if(Bobs_choice == card1) cout << 1 << endl;
        else if(Bobs_choice == card2) cout << 2 << endl;
        if(Bobs_choice == max(card1, card2))
            cout << "Bob win" << endl;
        else cout << "Bob lose" << endl;
        k--;
    }

	return 0;
}
