
#include "rand.h"
#include "combin.h"

using namespace std;

enum GameStatus { WIN, LOSE, PLAY };
int main(int argc, char* argv[])
{
	hanoi(7, 'A', 'B', 'C');
	if (3 > argc) cout << "invalid parameters" << endl;
	cout << "the value of C("<<argv[1]<<","<<argv[2]<<") is " << combin(atoi(argv[1]), atoi(argv[2])) << endl;
	int sum = 0, mypoint;
	GameStatus status = PLAY;
	srand((unsigned) time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		status = WIN;
		break;
	case 2:
	case 3:
	case 12:
		status = LOSE;
		break;
	default:
		status = PLAY;
		mypoint = sum;
		cout << "my point is " << mypoint << endl;
		break;
	}
	while (status == PLAY)
	{
		sum = rollDice();
		if (sum == mypoint)
			status = WIN;
		else if (sum == 7)
			status = LOSE;
	}
	if (status == WIN)
		cout << "player wins" << endl;
	else
		cout << "player lose" << endl;

	return 0;
}