#pragma once

class AActor 
{
public:
	AActor();
	AActor(int NewX, int NewY);
	~AActor();

	int X;
	int	Y;
	char Shape;

	void Draw();

};

