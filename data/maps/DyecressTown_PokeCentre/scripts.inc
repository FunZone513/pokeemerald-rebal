DyecressTown_PokeCentre_MapScripts::
# 2 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DyecressTown_PokeCentre_OnTransition
# 3 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_PokeCentre_OnLoad
	.byte 0


DyecressTown_PokeCentre_OnTransition::
# 7 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_DYECRESS_TOWN
	return


DyecressTown_PokeCentre_OnLoad::
# 11 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_OnLoad_1
	return

DyecressTown_PokeCentre_OnLoad_1:
# 12 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 13 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 14 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	return


DyecressTown_PokeCentre_OldWoman::
# 19 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 20 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_OldWoman_2
# 23 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_OldWoman_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_OldWoman_1:
# 25 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_OldWoman_2:
# 21 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_OldWoman_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_OldWoman_1


DyecressTown_PokeCentre_Woman::
# 29 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 30 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_Woman_2
# 33 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Woman_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_Woman_1:
# 35 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_Woman_2:
# 31 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Woman_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_Woman_1


DyecressTown_PokeCentre_Man::
# 39 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 40 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_Man_2
# 43 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Man_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_Man_1:
# 45 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_Man_2:
# 41 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Man_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_Man_1


DyecressTown_PokeCentre_Girl::
# 49 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 50 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadeoutbgm 1
# 51 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 60
# 52 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 5, DyecressTown_PokeCentre_Girl_Movement_0
# 53 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmovement 0
# 54 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 120
# 55 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	braillemessage DyecressTown_PokeCentre_Girl_Text
# 56 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8005, 1
# 58 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8006, 12
# 59 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8007, 2
# 60 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8008, 8
# 61 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	special ShakeCamera
# 62 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitstate
# 63 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8008, 0
# 64 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 48
# 65 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	closebraillemessage
# 66 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	playse SE_M_LEER
# 67 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 1
# 68 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setflag FLAG_DYECRESS_BULLSHIT
# 69 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	removeobject 5
# 70 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 2, DyecressTown_PokeCentre_Girl_Movement_1
# 71 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 3, DyecressTown_PokeCentre_Girl_Movement_2
# 72 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 4, DyecressTown_PokeCentre_Girl_Movement_3
# 73 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmovement 0
# 74 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 75 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 76 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 77 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	special DrawWholeMapView
# 78 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 79 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 48
# 80 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadeinbgm 2
# 81 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return


# 84 "data/maps/DyecressTown_PokeCentre/scripts.pory"

# 85 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Text:
# 86 "data/maps/DyecressTown_PokeCentre/scripts.pory"
    brailleformat 3, 0, 25, 19, 6, 3
# 87 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.braille "????\n"
# 88 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.braille "????$"

# 52 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_0:
# 52 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_player
	step_end

# 70 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_1:
# 70 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_up
	step_end

# 71 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_2:
# 71 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_down
	step_end

# 72 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_3:
# 72 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_right
	step_end

DyecressTown_PokeCentre_OldWoman_Text_0:
# 21 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "That girl...\nThere's something weird about her...$"

DyecressTown_PokeCentre_OldWoman_Text_1:
# 23 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "You see all manner of things in old age.$"

DyecressTown_PokeCentre_Woman_Text_0:
# 31 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "I get a chill when I go over there...$"

DyecressTown_PokeCentre_Woman_Text_1:
# 33 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Huh? I didn't see anyone over there?$"

DyecressTown_PokeCentre_Man_Text_0:
# 41 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Who is that?$"

DyecressTown_PokeCentre_Man_Text_1:
# 43 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Dyecress has a lot of history, which\n"
	.string "means that it has a lot of mysteries\l"
	.string "too.$"
