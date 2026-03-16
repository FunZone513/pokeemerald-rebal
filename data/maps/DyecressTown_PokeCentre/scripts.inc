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


DyecressTown_PokeCentre_Nurse::
# 19 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x800B, 1
# 20 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmessage
# 22 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitbuttonpress
# 23 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	release
	return


DyecressTown_PokeCentre_OldWoman::
# 27 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 28 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_OldWoman_2
# 31 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_OldWoman_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_OldWoman_1:
# 33 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_OldWoman_2:
# 29 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_OldWoman_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_OldWoman_1


DyecressTown_PokeCentre_Woman::
# 37 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 38 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_Woman_2
# 41 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Woman_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_Woman_1:
# 43 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_Woman_2:
# 39 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Woman_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_Woman_1


DyecressTown_PokeCentre_Man::
# 47 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 48 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	goto_if_unset FLAG_DYECRESS_BULLSHIT, DyecressTown_PokeCentre_Man_2
# 51 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Man_Text_1, MSGBOX_NPC
DyecressTown_PokeCentre_Man_1:
# 53 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return

DyecressTown_PokeCentre_Man_2:
# 49 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	msgbox DyecressTown_PokeCentre_Man_Text_0, MSGBOX_NPC
	goto DyecressTown_PokeCentre_Man_1


DyecressTown_PokeCentre_Girl::
# 57 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	lockall
# 58 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadeoutbgm 1
# 59 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 60
# 60 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 5, DyecressTown_PokeCentre_Girl_Movement_0
# 61 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmovement 0
# 62 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 120
# 63 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	playse SE_M_STRENGTH
# 64 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	braillemessage DyecressTown_PokeCentre_Girl_Text
# 65 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8004, 1
# 66 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8005, 3
# 67 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8006, 12
# 68 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8007, 2
# 69 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8008, 8
# 70 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	special ShakeCamera
# 71 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitstate
# 72 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setvar VAR_0x8008, 0
# 73 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 60
# 74 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	closebraillemessage
# 75 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	playse SE_M_LEER
# 76 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 1
# 77 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setflag FLAG_DYECRESS_BULLSHIT
# 78 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	removeobject 5
# 79 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 2, DyecressTown_PokeCentre_Girl_Movement_1
# 80 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 3, DyecressTown_PokeCentre_Girl_Movement_2
# 81 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	applymovement 4, DyecressTown_PokeCentre_Girl_Movement_3
# 82 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	waitmovement 0
# 83 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 85 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 86 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 88 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	delay 48
# 89 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	fadeinbgm 2
# 90 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	releaseall
	return


# 93 "data/maps/DyecressTown_PokeCentre/scripts.pory"

# 94 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Text:
# 95 "data/maps/DyecressTown_PokeCentre/scripts.pory"
    brailleformat 3, 0, 25, 19, 6, 3
# 96 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.braille "DONT\n"
# 97 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.braille "LOOK$"

# 60 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_0:
# 60 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_player
	step_end

# 79 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_1:
# 79 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_up
	step_end

# 80 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_2:
# 80 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_down
	step_end

# 81 "data/maps/DyecressTown_PokeCentre/scripts.pory"
DyecressTown_PokeCentre_Girl_Movement_3:
# 81 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	face_right
	step_end

DyecressTown_PokeCentre_OldWoman_Text_0:
# 29 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "That girl...\nThere's something weird about her...$"

DyecressTown_PokeCentre_OldWoman_Text_1:
# 31 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "You see all manner of things in old age.$"

DyecressTown_PokeCentre_Woman_Text_0:
# 39 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "I get a chill when I go over there...$"

DyecressTown_PokeCentre_Woman_Text_1:
# 41 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Huh? I didn't see anyone over there?$"

DyecressTown_PokeCentre_Man_Text_0:
# 49 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Who is that?$"

DyecressTown_PokeCentre_Man_Text_1:
# 51 "data/maps/DyecressTown_PokeCentre/scripts.pory"
	.string "Dyecress has a lot of history, which\n"
	.string "means that it has a lot of mysteries\l"
	.string "too.$"
