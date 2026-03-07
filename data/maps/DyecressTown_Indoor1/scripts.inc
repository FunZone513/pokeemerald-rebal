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


DyecressTown_Indoor1_Spenser::
# 12 "data/maps/DyecressTown_Indoor1/scripts.pory"
	lockall
# 13 "data/maps/DyecressTown_Indoor1/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 0
	goto_if_eq DyecressTown_Indoor1_Spenser_2
# 16 "data/maps/DyecressTown_Indoor1/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 1
	goto_if_ge DyecressTown_Indoor1_Spenser_3
DyecressTown_Indoor1_Spenser_1:
# 19 "data/maps/DyecressTown_Indoor1/scripts.pory"
	releaseall
	return

DyecressTown_Indoor1_Spenser_2:
# 14 "data/maps/DyecressTown_Indoor1/scripts.pory"
	msgbox DyecressTown_Indoor1_Spenser_Text, MSGBOX_NPC
# 15 "data/maps/DyecressTown_Indoor1/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 1
	goto DyecressTown_Indoor1_Spenser_1

DyecressTown_Indoor1_Spenser_3:
# 17 "data/maps/DyecressTown_Indoor1/scripts.pory"
	msgbox DyecressTown_Indoor1_Spenser_Text_0
	goto DyecressTown_Indoor1_Spenser_1


DyecressTown_Indoor1_Spenser_Text_0:
# 17 "data/maps/DyecressTown_Indoor1/scripts.pory"
	.string "I hope the researchers from Libra can\n"
	.string "help us uncover the origin of our town.$"

DyecressTown_Indoor1_Spenser_Text::
# 22 "data/maps/DyecressTown_Indoor1/scripts.pory"
	.string "Dyecress' history is something that many\nknow exists, but few remember details.\p"
	.string "While the specifics of the history have\nbeen lost over time, the guidance\l"
	.string "granted by our predecessors\lremains in our hearts and actions.\p"
	.string "Thus, the current is built upon the past.\nTo forget where we come from is to\lforget where we're headed.\p"
	.string "These old bones have been working\ntirelessly for generations, trying to\luncover the secret of the town's origin.\p"
	.string "While my time has been spent sifting\nthrough old books, I've heard tell that\l"
	.string "the upstart folks in the city have found\lnew ways of uncovering lost texts.\p"
	.string "I'm no longer the man I was in my youth,\nso I'm unable to make the trip myself,\l"
	.string "and many of the residents here are also\ltoo elderly to travel the distance.\p"
	.string "Could you do an old soul a favour?\p"
	.string "I would appreciate you sending word to\nLibra Institute in Springwood City,\l"
	.string "requesting someone to finally unravel\lthe history of our town.$"
