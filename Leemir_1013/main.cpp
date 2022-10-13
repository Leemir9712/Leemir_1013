#include <iostream>
#include "Wall.h"
#include "World.h"
#include "Player.h"
#include "Goal.h"
#include "Floor.h"

using namespace std;

int main()
{
	AWall* MyWall = new AWall();
	AFloor* MyFloor = new AFloor();
	APlayer* MyPlayer = new APlayer();
	AGoal* MyGoal = new AGoal();

	MyPlayer->X = 10;
	MyPlayer->Y = 10;


	MyWall->Draw();
	MyFloor->Draw();
	MyPlayer->Draw();
	MyGoal->Draw();


	delete MyWall;
	delete MyFloor;
	delete MyPlayer;
	delete MyGoal;


	return 0;
}
