#include "omok.h"
using namespace std;

int main()
{
	Omok omok;
	int winner=NOBODY;

	while (true)
	{
		if (omok.Turn() == BLACK)
			cout << "White: ";
		else
			cout << "Black: ";
		
		int x, y;
		cin >> x >> y;
		
		if (omok.Put(x, y) == NOBODY)
			cout << "Can not be placed there." << endl;

		omok.IsOmok(&winner);
		if (winner != NOBODY)
			break;
	}

	cout << omok;
	if (winner == BLACK) cout << "Winner: Black player\n";
	else cout << "Winner: White Player\n";
	return 0;
}
