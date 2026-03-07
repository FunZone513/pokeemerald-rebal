NewstemTown_MapScripts::
# 2 "data/maps/NewstemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewstemTown_OnLoad
	.byte 0


NewstemTown_OnLoad::
# 6 "data/maps/NewstemTown/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, NewstemTown_OnLoad_1
	return

NewstemTown_OnLoad_1:
# 7 "data/maps/NewstemTown/scripts.pory"
	setmetatile 10, 15, METATILE_General_RockWall_GrassBase, TRUE
# 8 "data/maps/NewstemTown/scripts.pory"
	setmetatile 10, 14, METATILE_General_RockWall_RockBase, TRUE
	return


NewstemTown_Sign_Town::
# 13 "data/maps/NewstemTown/scripts.pory"
	lockall
# 14 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Sign_Town_Text_0, MSGBOX_SIGN
# 15 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_Sign_PlayersHouse::
# 19 "data/maps/NewstemTown/scripts.pory"
	lockall
# 20 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Sign_PlayersHouse_Text_0, MSGBOX_SIGN
# 21 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_Sign_ProfLab::
# 24 "data/maps/NewstemTown/scripts.pory"
	lockall
# 25 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Sign_ProfLab_Text_0, MSGBOX_SIGN
# 26 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return


NewstemTown_CheckStarter::
# 30 "data/maps/NewstemTown/scripts.pory"
	lockall
# 31 "data/maps/NewstemTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_lt NewstemTown_CheckStarter_2
NewstemTown_CheckStarter_1:
# 36 "data/maps/NewstemTown/scripts.pory"
	releaseall
	return

NewstemTown_CheckStarter_2:
# 32 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_CheckStarter_Text_0
# 33 "data/maps/NewstemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewstemTown_CheckStarter_Movement_0
# 34 "data/maps/NewstemTown/scripts.pory"
	waitmovement 0
	goto NewstemTown_CheckStarter_1


NewstemTown_Boy::
# 40 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Boy_Text_0, MSGBOX_NPC
	return


NewstemTown_Athlete::
# 44 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Athlete_Text_0, MSGBOX_NPC
	return


NewstemTown_Boy2::
# 48 "data/maps/NewstemTown/scripts.pory"
	msgbox NewstemTown_Boy2_Text_0, MSGBOX_NPC
	return


# 33 "data/maps/NewstemTown/scripts.pory"
NewstemTown_CheckStarter_Movement_0:
# 33 "data/maps/NewstemTown/scripts.pory"
	walk_down
# 33 "data/maps/NewstemTown/scripts.pory"
	walk_down
	step_end

NewstemTown_Sign_Town_Text_0:
# 14 "data/maps/NewstemTown/scripts.pory"
	.string "Newstem Town\nA tranquil town by the sea$"

NewstemTown_Sign_PlayersHouse_Text_0:
# 20 "data/maps/NewstemTown/scripts.pory"
	.string "Your House$"

NewstemTown_Sign_ProfLab_Text_0:
# 25 "data/maps/NewstemTown/scripts.pory"
	.string "Professor's Laboratory$"

NewstemTown_CheckStarter_Text_0:
# 32 "data/maps/NewstemTown/scripts.pory"
	.string "You haven't picked up a Pokemon yet!$"

NewstemTown_Boy_Text_0:
# 40 "data/maps/NewstemTown/scripts.pory"
	.string "I want to go in for a swim, but Mum said\n"
	.string "that there's something in the water\l"
	.string "that could take me...$"

NewstemTown_Athlete_Text_0:
# 44 "data/maps/NewstemTown/scripts.pory"
	.string "Nice Running Shoes! They look brand\n"
	.string "new!$"

NewstemTown_Boy2_Text_0:
# 48 "data/maps/NewstemTown/scripts.pory"
	.string "I was told to go out and get some sun,\n"
	.string "but I just wanna play on my gameboy.$"
