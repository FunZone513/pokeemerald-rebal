Route10_ResortHouse_MapScripts::
	.byte 0


Route10_ResortHouse_Owner::
# 4 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Owner_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_Receptionist::
# 8 "data/maps/Route10_ResortHouse/scripts.pory"
	lock
# 9 "data/maps/Route10_ResortHouse/scripts.pory"
	applymovement 1, Route10_ResortHouse_Receptionist_Movement_0
# 10 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/Route10_ResortHouse/scripts.pory"
	goto_if_set FLAG_CLEARED_SCORCHED_CHAMBERS, Route10_ResortHouse_Receptionist_2
# 21 "data/maps/Route10_ResortHouse/scripts.pory"
	checkmoney 1000
# 22 "data/maps/Route10_ResortHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route10_ResortHouse_Receptionist_8
# 32 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_5, MSGBOX_DEFAULT
Route10_ResortHouse_Receptionist_1:
# 35 "data/maps/Route10_ResortHouse/scripts.pory"
	release
	return

Route10_ResortHouse_Receptionist_2:
# 12 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_1, MSGBOX_YESNO
# 13 "data/maps/Route10_ResortHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route10_ResortHouse_Receptionist_5
# 17 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_3, MSGBOX_DEFAULT
	goto Route10_ResortHouse_Receptionist_1

Route10_ResortHouse_Receptionist_5:
# 14 "data/maps/Route10_ResortHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 15 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_2, MSGBOX_DEFAULT
	goto Route10_ResortHouse_Receptionist_1

Route10_ResortHouse_Receptionist_8:
# 23 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_4, MSGBOX_YESNO
# 24 "data/maps/Route10_ResortHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route10_ResortHouse_Receptionist_11
# 29 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_3, MSGBOX_DEFAULT
	goto Route10_ResortHouse_Receptionist_1

Route10_ResortHouse_Receptionist_11:
# 25 "data/maps/Route10_ResortHouse/scripts.pory"
	removemoney 1000
# 26 "data/maps/Route10_ResortHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 27 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text_2, MSGBOX_DEFAULT
	goto Route10_ResortHouse_Receptionist_1


Route10_ResortHouse_Receptionist_NPC::
# 39 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_NPC_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_Scientist::
# 43 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Scientist_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_OldMan::
# 47 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_OldMan_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_Display1::
# 51 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Display1_Text_0, MSGBOX_SIGN
	return


Route10_ResortHouse_Display2::
# 54 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Display2_Text_0, MSGBOX_SIGN
	return


Route10_ResortHouse_Display3::
# 57 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Display3_Text_0, MSGBOX_SIGN
	return


# 9 "data/maps/Route10_ResortHouse/scripts.pory"
Route10_ResortHouse_Receptionist_Movement_0:
# 9 "data/maps/Route10_ResortHouse/scripts.pory"
	face_down
	step_end

Route10_ResortHouse_Owner_Text_0:
# 4 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "That blasted Team Magma has taken over\nthe lava chambers below here.\pI don't know what they're after,\nbut they're not letting anyone in.$"

Route10_ResortHouse_Receptionist_Text_0:
# 10 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "Hello and Welcome to the\nSoothing Sands Resort!$"

Route10_ResortHouse_Receptionist_Text_1:
# 12 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "I can heal up your Pokemon, free of\n"
	.string "charge.$"

Route10_ResortHouse_Receptionist_Text_2:
# 15 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "Thank you for using our services.$"

Route10_ResortHouse_Receptionist_Text_3:
# 17 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "Until next time.$"

Route10_ResortHouse_Receptionist_Text_4:
# 23 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "I can heal up your Pokemon for ¥1000 if\n"
	.string "you would like.$"

Route10_ResortHouse_Receptionist_Text_5:
# 32 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "I could heal up your Pokemon for ¥1000,\n"
	.string "but you don't seem to have enough.$"

Route10_ResortHouse_Receptionist_NPC_Text_0:
# 39 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "Huh?\nYou're not supposed to be back here.$"

Route10_ResortHouse_Scientist_Text_0:
# 43 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "I'm here to ensure the sand\nquality is as high as possible.$"

Route10_ResortHouse_OldMan_Text_0:
# 47 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "It's nice to rest in the chairs after\n"
	.string "the long walk to get here.$"

Route10_ResortHouse_Display1_Text_0:
# 51 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "It's an oddly shaped rock, and the glass\n"
	.string "is warm to the touch.$"

Route10_ResortHouse_Display2_Text_0:
# 54 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "A small pile of sand is prominently\n"
	.string "displayed in the fancy case.$"

Route10_ResortHouse_Display3_Text_0:
# 57 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "...it's either really small, or they\n"
	.string "forgot to put something in.$"
