#include "MemoryManager.h"
#include "Offsets.h"

#ifndef SCRIPTBOT_H
#define SCRIPTBOT_H

class ScriptBot{
protected:

	bool enable;
	DWORD glowIdx;
	DWORD health;
	DWORD localPlayerTeamNum;
	DWORD entity_team_num;
	DWORD entity;
	DWORD localPlayer;
	DWORD localPlayer_inCross;
	DWORD localPlayer_team;
	BYTE fFlags;
	DWORD glowObj;
	MemoryManager* mem;

	bool isDormant(DWORD player);
	DWORD getTeamNum(DWORD player);
	DWORD getLocalPlayer();
	DWORD getIcrosshair(DWORD player);
	DWORD getEntity(DWORD entityNum);
	DWORD getHealth(DWORD player);
	DWORD getFFlags();
	
public:

	ScriptBot();
	virtual void refresh() = 0;
	bool status();
	void toggle();

};

#endif