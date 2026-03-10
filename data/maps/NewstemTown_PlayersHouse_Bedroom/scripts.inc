NewstemTown_PlayersHouse_Bedroom_MapScripts::
# 2 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewstemTown_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewstemTown_PlayersHouse_Bedroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	map_script_2 VAR_STARTED_GAME, 0, Generic_DefaultSettings
	.2byte 0


NewstemTown_PlayersHouse_Bedroom_InfoNPC::
# 8 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	msgbox NewstemTown_PlayersHouse_Bedroom_InfoNPC_Text_0, MSGBOX_NPC
	return


NewstemTown_PlayersHouse_Bedroom_Settings::
# 12 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	lockall
# 13 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_0
# 14 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 0, MULTI_QOL_OPTIONS, 0
# 15 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 16 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 0, NewstemTown_PlayersHouse_Bedroom_Settings_3
# 26 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 1, NewstemTown_PlayersHouse_Bedroom_Settings_4
# 35 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 2, NewstemTown_PlayersHouse_Bedroom_Settings_5
# 44 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 3, NewstemTown_PlayersHouse_Bedroom_Settings_6
# 53 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	case 4, NewstemTown_PlayersHouse_Bedroom_Settings_7
# 63 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	end

NewstemTown_PlayersHouse_Bedroom_Settings_1:
# 66 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	releaseall
	return

NewstemTown_PlayersHouse_Bedroom_Settings_3:
# 18 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_1
# 19 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 20 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 21 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_10
# 23 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_SHARED_EXP
NewstemTown_PlayersHouse_Bedroom_Settings_9:
# 24 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_4:
# 27 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_2
# 28 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 29 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 30 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_14
# 32 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	clearflag FLAG_USE_NEW_TYPE_CHART
NewstemTown_PlayersHouse_Bedroom_Settings_13:
# 33 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_5:
# 36 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_3
# 37 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 38 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 39 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_18
# 41 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 0
NewstemTown_PlayersHouse_Bedroom_Settings_17:
# 42 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_6:
# 45 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_4
# 46 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 47 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 48 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_22
# 50 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 0
NewstemTown_PlayersHouse_Bedroom_Settings_21:
# 51 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_7:
# 54 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	message NewstemTown_PlayersHouse_Bedroom_Settings_Text_5
# 55 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	multichoice 25, 5, MULTI_GENERIC_ONOFF, 0
# 56 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	closemessage
# 57 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewstemTown_PlayersHouse_Bedroom_Settings_26
# 59 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
NewstemTown_PlayersHouse_Bedroom_Settings_25:
# 60 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	goto NewstemTown_PlayersHouse_Bedroom_Settings
	goto NewstemTown_PlayersHouse_Bedroom_Settings_1

NewstemTown_PlayersHouse_Bedroom_Settings_10:
# 22 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_SHARED_EXP
	goto NewstemTown_PlayersHouse_Bedroom_Settings_9

NewstemTown_PlayersHouse_Bedroom_Settings_14:
# 31 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setflag FLAG_USE_NEW_TYPE_CHART
	goto NewstemTown_PlayersHouse_Bedroom_Settings_13

NewstemTown_PlayersHouse_Bedroom_Settings_18:
# 40 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	call Generic_IncreaseExpGain
	goto NewstemTown_PlayersHouse_Bedroom_Settings_17

NewstemTown_PlayersHouse_Bedroom_Settings_22:
# 49 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
	goto NewstemTown_PlayersHouse_Bedroom_Settings_21

NewstemTown_PlayersHouse_Bedroom_Settings_26:
# 58 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	call Generic_UPDATE_LEVELCAP
	goto NewstemTown_PlayersHouse_Bedroom_Settings_25


NewstemTown_PlayersHouse_Bedroom_PC::
# 70 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	return


NewstemTown_PlayersHouse_Bedroom_InfoNPC_Text_0:
# 8 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Current game version is\n"
	.string "0.1.0$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_0:
# 13 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "This is where you edit the game's\n"
	.string "difficulty and QoL settings.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_1:
# 18 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "All Pokemon in the party gain exp, not\n"
	.string "just the ones used in battle.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_2:
# 27 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Use the new Ice Type interactions.\n"
	.string "Grants Water and Grass resist.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_3:
# 36 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Experience is boosted 1.5x.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_4:
# 45 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Wild encounters have a chance of being\n"
	.string "a double battle.$"

NewstemTown_PlayersHouse_Bedroom_Settings_Text_5:
# 54 "data/maps/NewstemTown_PlayersHouse_Bedroom/scripts.pory"
	.string "Pokemon cannot be levelled above the\n"
	.string "next main 'boss encounter's level.$"
