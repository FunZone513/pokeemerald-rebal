DyecressTown_Indoor1_MapScripts::
# 2 "data/maps/DyecressTown_Indoor1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_Indoor1_OnLoad
	.byte 0


DyecressTown_Indoor1_OnLoad::
# 6 "data/maps/DyecressTown_Indoor1/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 4
	goto_if_lt DyecressTown_Indoor1_OnLoad_1
	return

DyecressTown_Indoor1_OnLoad_1:
# 7 "data/maps/DyecressTown_Indoor1/scripts.pory"
	setflag FLAG_TEMP_A
	return


DyecressTown_Indoor1_Spenser::
# 12 "data/maps/DyecressTown_Indoor1/scripts.pory"
	lockall
# 13 "data/maps/DyecressTown_Indoor1/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 5
	goto_if_ne DyecressTown_Indoor1_Spenser_2
# 18 "data/maps/DyecressTown_Indoor1/scripts.pory"
	msgbox DyecressTown_Indoor1_Spenser_Text_0, MSGBOX_NPC
DyecressTown_Indoor1_Spenser_1:
# 20 "data/maps/DyecressTown_Indoor1/scripts.pory"
	releaseall
	return

DyecressTown_Indoor1_Spenser_2:
# 14 "data/maps/DyecressTown_Indoor1/scripts.pory"
	msgbox DyecressTown_Indoor1_Spenser_Text, MSGBOX_NPC
# 15 "data/maps/DyecressTown_Indoor1/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 16 "data/maps/DyecressTown_Indoor1/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 5
	goto DyecressTown_Indoor1_Spenser_1


DyecressTown_Indoor1_Spenser_Text_0:
# 18 "data/maps/DyecressTown_Indoor1/scripts.pory"
	.string "I hope the researchers from Libra can\n"
	.string "help us uncover the origin of our town.$"

DyecressTown_Indoor1_Spenser_Text::
# 23 "data/maps/DyecressTown_Indoor1/scripts.pory"
	.string "I see the coats have come over to\npoke around the township now.\p"
	.string "I was hesitant to let outsiders come\nin and start prodding away at our\ltown's historical sites...\p"
	.string "But, they're being uncharacteristically\nrespectful.\p"
	.string "I would guess that whomever is their\nsuperior made sure not to send\lany incompetent fools at least.\p"
	.string "Oh right, all quests must come\nwith a suitable reward.\p"
	.string "Here,\nI hope this was worth the trouble.$"
