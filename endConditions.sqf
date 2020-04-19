private _gameOn = true;
private _obj = false;
private _loss = false;
sleep 0.01;
while {_gameOn} do {
	private _specPlayers = [] call ace_spectator_fnc_players;
	private _alivePlayers = {!(_x in _specPlayers)} count allPlayers;
	if (_alivePlayers == 0) then {
		_gameOn = false;
		"endDeath" call BIS_fnc_endMissionServer;
	};
	
	if (_obj) then {
		_gameOn = false;
		"endWin" call BIS_fnc_endMissionServer;	
	};
	
	if (_loss) then {
		_gameOn = false;
		"endLose" call BIS_fnc_endMissionServer;	
	};
	sleep 5;
};