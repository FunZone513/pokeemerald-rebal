PortEdaph_Gate_MapScripts::
	.byte 0


PortEdaph_Gate_PassThrough::
# 4 "data/maps/PortEdaph_Gate/scripts.pory"
	lock
# 5 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_PassThrough_Text_0, MSGBOX_YESNO
# 6 "data/maps/PortEdaph_Gate/scripts.pory"
	waitse
# 7 "data/maps/PortEdaph_Gate/scripts.pory"
	closemessage
# 8 "data/maps/PortEdaph_Gate/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, NULL, VAR_TEMP_0
# 9 "data/maps/PortEdaph_Gate/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortEdaph_Gate_PassThrough_2
# 27 "data/maps/PortEdaph_Gate/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq PortEdaph_Gate_PassThrough_10
# 30 "data/maps/PortEdaph_Gate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Gate_PassThrough_Movement_2
PortEdaph_Gate_PassThrough_9:
# 32 "data/maps/PortEdaph_Gate/scripts.pory"
	waitmovement 0
PortEdaph_Gate_PassThrough_1:
# 34 "data/maps/PortEdaph_Gate/scripts.pory"
	release
	return

PortEdaph_Gate_PassThrough_2:
# 10 "data/maps/PortEdaph_Gate/scripts.pory"
	setmetatile 4, 5, METATILE_PokemonCenter_CounterBarrierOpen, FALSE
# 11 "data/maps/PortEdaph_Gate/scripts.pory"
	special DrawWholeMapView
# 12 "data/maps/PortEdaph_Gate/scripts.pory"
	playse SE_UNLOCK
# 13 "data/maps/PortEdaph_Gate/scripts.pory"
	waitse
# 14 "data/maps/PortEdaph_Gate/scripts.pory"
	delay 30
# 15 "data/maps/PortEdaph_Gate/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq PortEdaph_Gate_PassThrough_6
# 18 "data/maps/PortEdaph_Gate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Gate_PassThrough_Movement_1
PortEdaph_Gate_PassThrough_5:
# 20 "data/maps/PortEdaph_Gate/scripts.pory"
	waitmovement 0
# 21 "data/maps/PortEdaph_Gate/scripts.pory"
	setmetatile 4, 5, METATILE_PokemonCenter_CounterBarrier, TRUE
# 22 "data/maps/PortEdaph_Gate/scripts.pory"
	special DrawWholeMapView
# 23 "data/maps/PortEdaph_Gate/scripts.pory"
	playse SE_UNLOCK
# 24 "data/maps/PortEdaph_Gate/scripts.pory"
	waitse
# 25 "data/maps/PortEdaph_Gate/scripts.pory"
	delay 16
	goto PortEdaph_Gate_PassThrough_1

PortEdaph_Gate_PassThrough_6:
# 16 "data/maps/PortEdaph_Gate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Gate_PassThrough_Movement_0
	goto PortEdaph_Gate_PassThrough_5

PortEdaph_Gate_PassThrough_10:
# 28 "data/maps/PortEdaph_Gate/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Gate_PassThrough_Movement_2
	goto PortEdaph_Gate_PassThrough_9


PortEdaph_Gate_Guide::
# 38 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Guide_Text, MSGBOX_NPC
	return


PortEdaph_Gate_Woman::
# 49 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Woman_Text_0, MSGBOX_NPC
	return


PortEdaph_Gate_Camper::
# 53 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Camper_Text_0, MSGBOX_NPC
	return


PortEdaph_Gate_Kid::
# 57 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Kid_Text_0, MSGBOX_NPC
	return


PortEdaph_Gate_Artist::
# 61 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Artist_Text_0, MSGBOX_NPC
	return


PortEdaph_Gate_Picnicker::
# 65 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Picnicker_Text_0, MSGBOX_NPC
	return


PortEdaph_Gate_Shop::
# 69 "data/maps/PortEdaph_Gate/scripts.pory"
	msgbox PortEdaph_Gate_Shop_Text_0, MSGBOX_NPC
	return


# 16 "data/maps/PortEdaph_Gate/scripts.pory"
PortEdaph_Gate_PassThrough_Movement_0:
# 16 "data/maps/PortEdaph_Gate/scripts.pory"
	walk_up
# 16 "data/maps/PortEdaph_Gate/scripts.pory"
	walk_up
# 16 "data/maps/PortEdaph_Gate/scripts.pory"
	walk_up
# 16 "data/maps/PortEdaph_Gate/scripts.pory"
	delay_16
# 16 "data/maps/PortEdaph_Gate/scripts.pory"
	delay_16
	step_end

# 18 "data/maps/PortEdaph_Gate/scripts.pory"
PortEdaph_Gate_PassThrough_Movement_1:
# 18 "data/maps/PortEdaph_Gate/scripts.pory"
	walk_down
# 18 "data/maps/PortEdaph_Gate/scripts.pory"
	walk_down
# 18 "data/maps/PortEdaph_Gate/scripts.pory"
	walk_down
# 18 "data/maps/PortEdaph_Gate/scripts.pory"
	delay_16
# 18 "data/maps/PortEdaph_Gate/scripts.pory"
	delay_16
	step_end

# 28 "data/maps/PortEdaph_Gate/scripts.pory"
PortEdaph_Gate_PassThrough_Movement_2:
# 28 "data/maps/PortEdaph_Gate/scripts.pory"
	face_up
	step_end

PortEdaph_Gate_PassThrough_Text_0:
# 5 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "Do you want to pass through?$"

PortEdaph_Gate_Woman_Text_0:
# 49 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "I'm waiting for a cool, single trainer to\n"
	.string "come through here so I can 'capture'\l"
	.string "him.$"

PortEdaph_Gate_Camper_Text_0:
# 53 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "The strange design on the floor reminds\n"
	.string "me of Mt Scorch... I wonder if that was\l"
	.string "deliberate?$"

PortEdaph_Gate_Kid_Text_0:
# 57 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "There's all types of interesting\n"
	.string "knowledge stored in these books for\l"
	.string "aspiring climbers to browse through.$"

PortEdaph_Gate_Artist_Text_0:
# 61 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "The contrast between the stark and\n"
	.string "harsh volcano with the lush ground\l"
	.string "around it gives me inspiration!$"

PortEdaph_Gate_Picnicker_Text_0:
# 65 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "Have you climbed on Mt Scorch before?\n"
	.string "I'm trying to psych myself up to give it\l"
	.string "a go.$"

PortEdaph_Gate_Shop_Text_0:
# 69 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "I'll probably be a shop at some point,\n"
	.string "maybe. I'm not sure what to do yet.$"

PortEdaph_Gate_Guide_Text::
# 41 "data/maps/PortEdaph_Gate/scripts.pory"
	.string "Up ahead is Mt Scorch, it's a dangerous\nvolcanic region that requires us to\l"
	.string "keep track of who enters and leaves,\lin case someone goes missing.\p"
	.string "As a Pokemon Trainer, you are permitted\nto enter the area.\p"
	.string "Please be mindful to not get lost\nwhile climbing the volcano, rescue\lcan prove difficult due to the terrain.$"
