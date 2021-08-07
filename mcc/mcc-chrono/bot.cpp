#include <cstdlib>
#include <iostream>
#include <vector>
#include "bot.h"

using namespace std;

const int MAX_ROBOT_NUM = 50;

int NUM;          // to remember number or robots
int ROWS, COLS;   // map dimensions
bool damagedBots[MAX_ROBOT_NUM];

/* Initialization procedure, called when the game starts: */
void onStart(int num, int rows, int cols, double mpr, Area &area, ostream &log){
	NUM = num;   // save the number of robots and the map dimensions
	ROWS = rows;
	COLS = cols;
	for (int i = 0; i < MAX_ROBOT_NUM; i++){
		damagedBots[i] = false;
	}
	log << "Start!" << endl;
}

/* Deciding robot's next move */
Action onRobotAction(int id, Loc loc, Area &area, ostream &log){
	int row = loc.r; // current row and column
	int col = loc.c;

	if (area.inspect(row, col) == DEBRIS){
		return COLLECT;
	} else {
		// if not at a debris field:
		// Check the 4 spaces adjacent to the bot
		// Returns the direction that the debris is in if adjacent
		// Otherwise, move randomly
		if (area.inspect(row + 1, col) == DEBRIS){
			return DOWN;
		} else if (area.inspect(row - 1, col) == DEBRIS){
			return UP;
		} else if (area.inspect(row, col + 1) == DEBRIS){
			return RIGHT;
		} else if (area.inspect(row, col - 1) == DEBRIS){
			return LEFT;
		} else {
			//I honestly can't figure this out
			switch(rand() % 4){
			case 0:
				return LEFT;
			case 1:
				return RIGHT;
			case 2:
				return UP;
			default:
				return DOWN;
			}
		}
	}
}

void onRobotMalfunction(int id, Loc loc, Area &area, ostream &log){
	log << "Robot " << id << " is damaged." << endl;
	damagedBots[id] = true;
}

void onClockTick(int time, ostream &log){
	if (time % 100 == 0) log << time << " ";
}
