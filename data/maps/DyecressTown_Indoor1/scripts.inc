DyecressTown_Indoor1_MapScripts::
# 2 "data/maps/DyecressTown_Indoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_Indoor1_OnLoad
	.byte 0


DyecressTown_Indoor1_OnLoad::
# 6 "data/maps/DyecressTown_Indoor1/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 3
	goto_if_ge DyecressTown_Indoor1_OnLoad_1
	return

DyecressTown_Indoor1_OnLoad_1:
# 7 "data/maps/DyecressTown_Indoor1/scripts.pory"
	setflag FLAG_TEMP_A
	return

