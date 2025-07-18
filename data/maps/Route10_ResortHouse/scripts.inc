Route10_ResortHouse_MapScripts::
	.byte 0


Route10_ResortHouse_Owner::
# 4 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Owner_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_Receptionist::
# 8 "data/maps/Route10_ResortHouse/scripts.pory"
	applymovement 1, Route10_ResortHouse_Receptionist_Movement_0
# 9 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_Text, MSGBOX_SIGN
	return


Route10_ResortHouse_Receptionist_NPC::
# 20 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Receptionist_NPC_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_Scientist::
# 24 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Scientist_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_OldMan::
# 28 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_OldMan_Text_0, MSGBOX_NPC
	return


Route10_ResortHouse_Display1::
# 32 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Display1_Text_0, MSGBOX_SIGN
	return


Route10_ResortHouse_Display2::
# 35 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Display2_Text_0, MSGBOX_SIGN
	return


Route10_ResortHouse_Display3::
# 38 "data/maps/Route10_ResortHouse/scripts.pory"
	msgbox Route10_ResortHouse_Display3_Text_0, MSGBOX_SIGN
	return


# 8 "data/maps/Route10_ResortHouse/scripts.pory"
Route10_ResortHouse_Receptionist_Movement_0:
# 8 "data/maps/Route10_ResortHouse/scripts.pory"
	face_down
	step_end

Route10_ResortHouse_Owner_Text_0:
# 4 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "That blasted Team Magma has taken over\nthe lava chambers below here.\pI don't know what they're after,\nbut they're not letting anyone in.$"

Route10_ResortHouse_Receptionist_NPC_Text_0:
# 20 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "Huh?\nYou're not supposed to be back here.$"

Route10_ResortHouse_Scientist_Text_0:
# 24 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "I'm here to ensure the sand\nquality is as high as possible.$"

Route10_ResortHouse_OldMan_Text_0:
# 28 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "It's nice to rest in the chairs after\n"
	.string "the long walk to get here.$"

Route10_ResortHouse_Display1_Text_0:
# 32 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "It's an oddly shaped rock, and the glass\n"
	.string "is warm to the touch.$"

Route10_ResortHouse_Display2_Text_0:
# 35 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "A small pile of sand is prominently\n"
	.string "displayed in the fancy case.$"

Route10_ResortHouse_Display3_Text_0:
# 38 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "...it's either really small, or they\n"
	.string "forgot to put something in.$"

Route10_ResortHouse_Receptionist_Text::
# 12 "data/maps/Route10_ResortHouse/scripts.pory"
	.string "Hello and Welcome to the\nSoothing Sands Resort!\p"
	.string "We're currently fully booked,\nbut we should have an opening in...\p"
	.string "About 3 Months!\p"
	.string "Would you like to make a reservation?$"
