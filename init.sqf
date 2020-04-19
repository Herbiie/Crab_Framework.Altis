if (!isDedicated) then {
	player setVariable ["player_lives",1,true];
	_EH = player addEventHandler ["killed", {
	playerPosition = getPosASL (_this select 0);
	}];
};

if (isServer) then {
	missionNameSpace setVariable ["bcs_bty_name","HMS Cockchafer",true];
	missionNameSpace setVariable ["bcs_bty_type",[2,""],true];
	private _ngsPos = getPosASL gun;
	private _ngsEl = round ((getPosASL gun) # 2);
	private _ngsDir = round getDir gun;
	private _ngsStr1 = str (round ((getPosASL gun) # 0));
	private _ngsStr2 = str (round ((getPosASL gun) # 1));
	private _ngsStr = [_ngsStr1,_ngsStr2] joinString "";	
	missionNameSpace setVariable ["bcs_bty_guns",[["1",_ngsStr,_ngsPos,_ngsEl,_ngsDir]],true];
	missionNameSpace setVariable ["bcs_locations",[],true];
	[] spawn {
		#include "endConditions.sqf"
	};
};

#include "briefing.sqf"