PortEdaph_Dock_MapScripts::
# 2 "data/maps/PortEdaph_Dock/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortEdaph_Dock_OnTransition
# 3 "data/maps/PortEdaph_Dock/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PortEdaph_Dock_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PortEdaph_Dock_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PortEdaph_Dock/scripts.pory"
	map_script_2 VAR_TEMP_A, 1, PortEdaph_Dock_BoatEvent
	.2byte 0


PortEdaph_Dock_OnTransition::
# 10 "data/maps/PortEdaph_Dock/scripts.pory"
	goto_if_unset FLAG_SEEN_EDAPH_DOCK_EVENT, PortEdaph_Dock_OnTransition_1
# 15 "data/maps/PortEdaph_Dock/scripts.pory"
	setflag FLAG_TEMP_A
# 16 "data/maps/PortEdaph_Dock/scripts.pory"
	setflag FLAG_TEMP_B
	return

PortEdaph_Dock_OnTransition_1:
# 11 "data/maps/PortEdaph_Dock/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


PortEdaph_Dock_WaterBlock::
# 21 "data/maps/PortEdaph_Dock/scripts.pory"
	lock
# 22 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_WaterBlock_Text_0
# 23 "data/maps/PortEdaph_Dock/scripts.pory"
	closemessage
# 24 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Dock_WaterBlock_Movement_0
# 25 "data/maps/PortEdaph_Dock/scripts.pory"
	release
	return


PortEdaph_Dock_BoatEvent::
# 29 "data/maps/PortEdaph_Dock/scripts.pory"
	lock
# 30 "data/maps/PortEdaph_Dock/scripts.pory"
	hideobjectat 10, MAP_PORT_EDAPH_DOCK
# 31 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_Dock_BoatEvent_Movement_0
# 32 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 33 "data/maps/PortEdaph_Dock/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PortEdaph_Dock_BoatEvent_Movement_1
# 35 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 36 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_BoatEvent_Text1
# 37 "data/maps/PortEdaph_Dock/scripts.pory"
	closemessage
# 38 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 2, PortEdaph_Dock_BoatEvent_Movement_2
# 39 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 1, PortEdaph_Dock_BoatEvent_Movement_3
# 40 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 41 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_BoatEvent_Text2
# 42 "data/maps/PortEdaph_Dock/scripts.pory"
	closemessage
# 43 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 2, PortEdaph_Dock_BoatEvent_Movement_4
# 44 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 1, PortEdaph_Dock_BoatEvent_Movement_4
# 45 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 46 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_BoatEvent_Text_0
# 47 "data/maps/PortEdaph_Dock/scripts.pory"
	closemessage
# 48 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 2, PortEdaph_Dock_BoatEvent_Movement_3
# 49 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 1, PortEdaph_Dock_BoatEvent_Movement_5
# 50 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 3, PortEdaph_Dock_BoatEvent_Movement_6
# 51 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PortEdaph_Dock_BoatEvent_Movement_7
# 52 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 53 "data/maps/PortEdaph_Dock/scripts.pory"
	playse SE_DING_DONG
# 54 "data/maps/PortEdaph_Dock/scripts.pory"
	waitse
# 55 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 24
# 56 "data/maps/PortEdaph_Dock/scripts.pory"
	playse SE_INTRO_BLAST
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 4, PortEdaph_Dock_BoatEvent_Movement_8
# 58 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 59 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 48
# 60 "data/maps/PortEdaph_Dock/scripts.pory"
	waitse
# 61 "data/maps/PortEdaph_Dock/scripts.pory"
	playse SE_TRUCK_DOOR
# 62 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 63 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 64 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 65 "data/maps/PortEdaph_Dock/scripts.pory"
	waitse
# 66 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 32
# 67 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 68 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_0x8005, 5
# 70 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_0x8006, 8
# 71 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_0x8007, 1
# 72 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_0x8008, 1
# 73 "data/maps/PortEdaph_Dock/scripts.pory"
	special ShakeCamera
# 74 "data/maps/PortEdaph_Dock/scripts.pory"
	playse SE_M_EXPLOSION
# 75 "data/maps/PortEdaph_Dock/scripts.pory"
	waitstate
# 76 "data/maps/PortEdaph_Dock/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 1
# 77 "data/maps/PortEdaph_Dock/scripts.pory"
	fadeoutbgm 0
# 78 "data/maps/PortEdaph_Dock/scripts.pory"
	hideobjectat 4, MAP_PORT_EDAPH_DOCK
# 79 "data/maps/PortEdaph_Dock/scripts.pory"
	showobjectat 10, MAP_PORT_EDAPH_DOCK
# 80 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 10, PortEdaph_Dock_BoatEvent_Movement_4
# 81 "data/maps/PortEdaph_Dock/scripts.pory"
	special DrawWholeMapView
# 82 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 60
# 83 "data/maps/PortEdaph_Dock/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 16
# 84 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 100
# 85 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PortEdaph_Dock_BoatEvent_Movement_9
# 86 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 60
# 87 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 2, PortEdaph_Dock_BoatEvent_Movement_10
# 88 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_BoatEvent_Text_1
# 89 "data/maps/PortEdaph_Dock/scripts.pory"
	closemessage
# 90 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 2, PortEdaph_Dock_BoatEvent_Movement_11
# 92 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 2
# 93 "data/maps/PortEdaph_Dock/scripts.pory"
	playse SE_EXIT
# 94 "data/maps/PortEdaph_Dock/scripts.pory"
	removeobject 2
# 95 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 30
# 96 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 3, PortEdaph_Dock_BoatEvent_Movement_10
# 97 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 98 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 48
# 99 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 3, PortEdaph_Dock_BoatEvent_Movement_3
# 100 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 101 "data/maps/PortEdaph_Dock/scripts.pory"
	delay 48
# 102 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement 3, PortEdaph_Dock_BoatEvent_Movement_12
# 103 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 104 "data/maps/PortEdaph_Dock/scripts.pory"
	playse SE_EXIT
# 105 "data/maps/PortEdaph_Dock/scripts.pory"
	removeobject 3
# 106 "data/maps/PortEdaph_Dock/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PortEdaph_Dock_BoatEvent_Movement_13
# 107 "data/maps/PortEdaph_Dock/scripts.pory"
	waitmovement 0
# 108 "data/maps/PortEdaph_Dock/scripts.pory"
	setflag FLAG_SEEN_EDAPH_DOCK_EVENT
# 109 "data/maps/PortEdaph_Dock/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/PortEdaph_Dock/scripts.pory"
	setvar VAR_TEMP_A, 0
# 111 "data/maps/PortEdaph_Dock/scripts.pory"
	fadeinbgm 16
# 112 "data/maps/PortEdaph_Dock/scripts.pory"
	release
	return


PortEdaph_Dock_BoatEvent_Captain::
# 116 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_BoatEvent_Captain_Text_0
# 117 "data/maps/PortEdaph_Dock/scripts.pory"
	closemessage
	return


PortEdaph_Dock_Captain::
# 134 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_Captain_Text_0, MSGBOX_NPC
	return


PortEdaph_Dock_Boy::
# 138 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_Boy_Text_0, MSGBOX_NPC
	return


PortEdaph_Dock_Sailor::
# 142 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_Sailor_Text_0, MSGBOX_NPC
	return


PortEdaph_Dock_OldWoman::
# 146 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_OldWoman_Text_0, MSGBOX_NPC
	return


PortEdaph_Dock_Scientist::
# 150 "data/maps/PortEdaph_Dock/scripts.pory"
	msgbox PortEdaph_Dock_Scientist_Text_0, MSGBOX_NPC
	return


# 24 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_WaterBlock_Movement_0:
# 24 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_0:
# 31 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_up
# 31 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_up
# 31 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_right
# 31 "data/maps/PortEdaph_Dock/scripts.pory"
	face_up
	step_end

# 34 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_1:
# 34 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_up
# 34 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_up
	step_end

# 38 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_2:
# 38 "data/maps/PortEdaph_Dock/scripts.pory"
	face_down
	step_end

# 39 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_3:
# 39 "data/maps/PortEdaph_Dock/scripts.pory"
	face_up
	step_end

# 43 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_4:
# 43 "data/maps/PortEdaph_Dock/scripts.pory"
	face_left
	step_end

# 49 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_5:
# 49 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_right
# 49 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_up
	step_end

# 50 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_6:
# 50 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_right
# 50 "data/maps/PortEdaph_Dock/scripts.pory"
	face_up
	step_end

# 51 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_7:
# 51 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_diag_northeast
# 51 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_diag_northeast
# 51 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_diag_northeast
	step_end

# 57 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_8:
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_slow_right
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	delay_16
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	delay_16
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_slow_right
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	delay_16
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	delay_16
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	delay_16
# 57 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_slow_right
	step_end

# 85 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_9:
# 85 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_slow_diag_southwest
# 85 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_slow_diag_southwest
# 85 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_slow_diag_southwest
	step_end

# 87 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_10:
# 87 "data/maps/PortEdaph_Dock/scripts.pory"
	face_right
	step_end

# 91 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_11:
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_left
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_left
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
# 91 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
	step_end

# 102 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_12:
# 102 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_left
# 102 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
# 102 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
# 102 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
# 102 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_fast_down
	step_end

# 106 "data/maps/PortEdaph_Dock/scripts.pory"
PortEdaph_Dock_BoatEvent_Movement_13:
# 106 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_down
# 106 "data/maps/PortEdaph_Dock/scripts.pory"
	walk_down
	step_end

PortEdaph_Dock_WaterBlock_Text_0:
# 22 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "This water isn't for swimming in.$"

PortEdaph_Dock_BoatEvent_Text_0:
# 46 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "Riveting stuff!\pNow I believe it's time for the boat\nto undergo it's first test voyage!$"

PortEdaph_Dock_BoatEvent_Text_1:
# 88 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "...I'm going to go get some help.$"

PortEdaph_Dock_BoatEvent_Captain_Text_0:
# 116 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "...$"

PortEdaph_Dock_Captain_Text_0:
# 134 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "Hi, I don't do anything yet.$"

PortEdaph_Dock_Boy_Text_0:
# 138 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "Truely an engineering marvel...$"

PortEdaph_Dock_Sailor_Text_0:
# 142 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "I hope the next boat doesn't explode on\n"
	.string "us again.$"

PortEdaph_Dock_OldWoman_Text_0:
# 146 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "Oh, hello dear.\pHm? What's wrong?\pOh, no I'm fine.\nIt's just comfy in here that's all.$"

PortEdaph_Dock_Scientist_Text_0:
# 150 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "...what went wrong?$"

PortEdaph_Dock_BoatEvent_Text1::
# 120 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "It's an incredible day for seafarers\neverywhere!\p"
	.string "We're here on the docks at Port Edaph\ntoday to talk about the new cruise\lliner that has been built here!$"

PortEdaph_Dock_BoatEvent_Text2::
# 125 "data/maps/PortEdaph_Dock/scripts.pory"
	.string "Now then, can you tell us a little\nbit about what makes this boat special?\p"
	.string "Certainly!\p"
	.string "This new cruise liner has an advanced\ngyro system to keep it much more stable\lin rough waves.\p"
	.string "The engines have also been upgraded,\nmaking it faster and more efficient\lfor long distance travel!\p"
	.string "We're hoping this new technological\nbreakthrough will help us finally\lventure beyond the horizon!$"
