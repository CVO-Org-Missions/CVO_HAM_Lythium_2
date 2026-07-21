
/* ----------------------------------------------------------------------------
Function: btc_respawn_fnc_intro

Description:
    Introduction camera.

Parameters:
    _gear_object - Arsenal position. [String]
    _create_object - Repair/Logistic position. [Object]

Returns:

Examples:
    (begin example)
        [] call btc_respawn_fnc_intro;
    (end)

Author:
    Vdauphin

---------------------------------------------------------------------------- */

params [
    ["_gear_object", btc_gear_object, [""]],
    ["_create_object", btc_create_object, [objNull]]
];

private _color = [1, 0.5, 0,1];

private _gear_object_pos = getPos _gear_object;
_gear_object_pos params ["_gear_object_pos_x", "_gear_object_pos_y", "_gear_object_pos_z"];
private _create_object_pos = getPos _create_object;
_create_object_pos params ["_create_object_pos_x", "_create_object_pos_y", "_create_object_pos_z"];



waitUntil {time > 0}; //Wait for date synchronisation

private _startingDate = btc_startDate select [0, 3];
private _date = date select [0, 3];
private _days = (_date vectorDiff _startingDate) vectorDotProduct [365, 30.5, 1];

enableSaving [false, false];
