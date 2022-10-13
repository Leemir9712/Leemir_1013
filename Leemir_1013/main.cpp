#include <iostream>
#include "Wall.h"
#include "World.h"
#include "Player.h"
#include "Goal.h"
#include "Floor.h"
#include <vector>
#include <fstream>


using namespace std;

int main()
{
	vector<AWall*> MyWalls;
	vector<APlayer*> MyPlayer;
	vector<AFloor*> MyFloor;
	vector<AGoal*> MyGoal;

	char Data[100];
	ifstream MapFile("Level1.txt");
	
	int Y = 0;

	while (MapFile.getline(Data, 100))
	{
		for (int X = 0; X < strlen(Data); X++)
		{
			if (Data[X] == '*')
			{
				MyWalls.push_back(new AWall(X,Y));
			}
			else if (Data[X] == 'P')
			{
				MyPlayer.push_back(new APlayer(X, Y));
			}
			else if (Data[X] == ' ')
			{
				MyFloor.push_back(new AFloor(X, Y));
			}
			else if (Data[X] == 'G')
			{
				MyGoal.push_back(new AGoal(X, Y));
			}

			
		}

		Y++;
	}

	for (auto Value : MyPlayer)
	{
		Value->Draw();
	}

	for (auto Value : MyGoal)
	{
		Value->Draw();
	}
	for (auto Value : MyFloor)
	{
		Value->Draw();
	}

	for (auto Value : MyWalls)
	{
		Value->Draw();
	}

	MapFile.close();
	
	return 0;
}
