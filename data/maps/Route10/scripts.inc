Route10_MapScripts::
# 2 "data/maps/Route10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0


Route10_OnTransition::
# 6 "data/maps/Route10/scripts.pory"
	goto_if_unset FLAG_CLEARED_SCORCHED_CHAMBERS, Route10_OnTransition_1
# 15 "data/maps/Route10/scripts.pory"
	setvar VAR_TEMP_A, 1
# 16 "data/maps/Route10/scripts.pory"
	setflag FLAG_TEMP_B
	return

Route10_OnTransition_1:
# 7 "data/maps/Route10/scripts.pory"
	setflag FLAG_TEMP_A
# 10 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_ROUTE10_MAGMA_GRUNT
	goto_if 1, Route10_OnTransition_5
	return

Route10_OnTransition_4:
# 11 "data/maps/Route10/scripts.pory"
	setflag FLAG_TEMP_B
	return

Route10_OnTransition_5:
# 10 "data/maps/Route10/scripts.pory"
	compare VAR_EVELYNN_STATE, 4
	goto_if_ge Route10_OnTransition_4
	return


Route10_Sign::
# 21 "data/maps/Route10/scripts.pory"
	msgbox Route10_Sign_Text_0, MSGBOX_SIGN
	return


Route10_ResortOwner::
# 25 "data/maps/Route10/scripts.pory"
	msgbox Route10_ResortOwner_Text, MSGBOX_NPC
	return


Route10_SandEnjoyer1::
# 35 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer1_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer2::
# 39 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer2_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer3::
# 43 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer3_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer4::
# 47 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer4_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer5::
# 51 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer5_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer6::
# 55 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer6_Text_0, MSGBOX_NPC
	return


Route10_SandEnjoyer7::
# 59 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandEnjoyer7_Text_0, MSGBOX_NPC
	return


Route10_SandMagmaGrunt::
# 63 "data/maps/Route10/scripts.pory"
	msgbox Route10_SandMagmaGrunt_Text_0, MSGBOX_NPC
	return


Route10_MagmaGrunt::
# 67 "data/maps/Route10/scripts.pory"
	lockall
# 68 "data/maps/Route10/scripts.pory"
	compare VAR_EVELYNN_STATE < 4, 0
	goto_if_ne Route10_MagmaGrunt_2
Route10_MagmaGrunt_1:
# 73 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_ROUTE10_MAGMA_GRUNT
	goto_if 0, Route10_MagmaGrunt_5
# 86 "data/maps/Route10/scripts.pory"
	msgbox Route10_MagmaGrunt_Text_4, MSGBOX_NPC
Route10_MagmaGrunt_4:
# 88 "data/maps/Route10/scripts.pory"
	releaseall
	return

Route10_MagmaGrunt_2:
# 69 "data/maps/Route10/scripts.pory"
	msgbox Route10_MagmaGrunt_Text_0
# 70 "data/maps/Route10/scripts.pory"
	closemessage
	goto Route10_MagmaGrunt_1

Route10_MagmaGrunt_5:
# 74 "data/maps/Route10/scripts.pory"
	msgbox Route10_MagmaGrunt_Text_1, MSGBOX_NPC
# 75 "data/maps/Route10/scripts.pory"
	applymovement 24, Route10_MagmaGrunt_Movement_0
# 76 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route10/scripts.pory"
	delay 60
# 78 "data/maps/Route10/scripts.pory"
	applymovement 24, Route10_MagmaGrunt_Movement_1
# 79 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_ROUTE10_MAGMA_GRUNT, Route10_MagmaGrunt_Text_2, Route10_MagmaGrunt_Text_3
	goto Route10_MagmaGrunt_4


Route10_MagmaGrunt2::
# 92 "data/maps/Route10/scripts.pory"
	msgbox Route10_MagmaGrunt2_Text_0, MSGBOX_NPC
	return


Route10_Hiker::
# 96 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_ROUTE10_HIKER, Route10_Hiker_Text_0, Route10_Hiker_Text_1
# 101 "data/maps/Route10/scripts.pory"
	msgbox Route10_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_Youngster::
# 106 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_ROUTE10_YOUNGSTER, Route10_Youngster_Text_0, Route10_Youngster_Text_1
# 111 "data/maps/Route10/scripts.pory"
	msgbox Route10_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


Route10_RemoveBlocker::
# 116 "data/maps/Route10/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


Route10_Guard::
# 120 "data/maps/Route10/scripts.pory"
	msgbox Route10_Guard_Text_0, MSGBOX_NPC
	return


Route10_ResortBlocker::
# 124 "data/maps/Route10/scripts.pory"
	lockall
# 125 "data/maps/Route10/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Route10/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 127 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route10/scripts.pory"
	applymovement 18, Route10_ResortBlocker_Movement_0
# 129 "data/maps/Route10/scripts.pory"
	message Route10_ResortBlocker_Text_0
# 130 "data/maps/Route10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route10_ResortBlocker_Movement_1
# 131 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route10/scripts.pory"
	applymovement 18, Common_Movement_Delay48
# 133 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route10/scripts.pory"
	closemessage
# 135 "data/maps/Route10/scripts.pory"
	msgbox Route10_ResortBlocker_Text_1
# 136 "data/maps/Route10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route10_MagmaGrunt_Movement_0
# 137 "data/maps/Route10/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route10/scripts.pory"
	releaseall
	return


# 75 "data/maps/Route10/scripts.pory"
Route10_MagmaGrunt_Movement_0:
# 75 "data/maps/Route10/scripts.pory"
	face_up
	step_end

# 78 "data/maps/Route10/scripts.pory"
Route10_MagmaGrunt_Movement_1:
# 78 "data/maps/Route10/scripts.pory"
	face_player
	step_end

# 128 "data/maps/Route10/scripts.pory"
Route10_ResortBlocker_Movement_0:
# 128 "data/maps/Route10/scripts.pory"
	face_left
	step_end

# 130 "data/maps/Route10/scripts.pory"
Route10_ResortBlocker_Movement_1:
# 130 "data/maps/Route10/scripts.pory"
	walk_up
# 130 "data/maps/Route10/scripts.pory"
	face_right
	step_end

Route10_Sign_Text_0:
# 21 "data/maps/Route10/scripts.pory"
	.string "Soothing Sands Resort.$"

Route10_SandEnjoyer1_Text_0:
# 35 "data/maps/Route10/scripts.pory"
	.string "The warm sand really soothes my old\n"
	.string "joints.$"

Route10_SandEnjoyer2_Text_0:
# 39 "data/maps/Route10/scripts.pory"
	.string "The trek to get here makes this place\n"
	.string "feel all the more special, so it's worth\l"
	.string "it.$"

Route10_SandEnjoyer3_Text_0:
# 43 "data/maps/Route10/scripts.pory"
	.string "My late husband and I used to come here\n"
	.string "every week, but it's just not the same\l"
	.string "without him.$"

Route10_SandEnjoyer4_Text_0:
# 47 "data/maps/Route10/scripts.pory"
	.string "I can't believe we managed\nto get a spot here!\pMy boyfriend is the best!$"

Route10_SandEnjoyer5_Text_0:
# 51 "data/maps/Route10/scripts.pory"
	.string "...this was so expensive...$"

Route10_SandEnjoyer6_Text_0:
# 55 "data/maps/Route10/scripts.pory"
	.string "There's sand here, but it's not a beach?$"

Route10_SandEnjoyer7_Text_0:
# 59 "data/maps/Route10/scripts.pory"
	.string "I'm not sure these sand beds are\n"
	.string "designed for someone of my stature.$"

Route10_SandMagmaGrunt_Text_0:
# 63 "data/maps/Route10/scripts.pory"
	.string "Can't a girl enjoy the warm sand here!?\nI'd never be able to otherwise!$"

Route10_MagmaGrunt_Text_0:
# 69 "data/maps/Route10/scripts.pory"
	.string "...I can't believe they dropped\nall the Numel Pokeballs...$"

Route10_MagmaGrunt_Text_1:
# 74 "data/maps/Route10/scripts.pory"
	.string "Oh hey, I'm here to stop random people\n"
	.string "from interrupting our business.$"

Route10_MagmaGrunt_Text_2:
# 82 "data/maps/Route10/scripts.pory"
	.string "Wait a second, who are you!?$"

Route10_MagmaGrunt_Text_3:
# 83 "data/maps/Route10/scripts.pory"
	.string "Darn, if only I wasn't under contract to\n"
	.string "battle people.$"

Route10_MagmaGrunt_Text_4:
# 86 "data/maps/Route10/scripts.pory"
	.string "You already beat up my Pokemon, I can't\n"
	.string "stop you from walking in.$"

Route10_MagmaGrunt2_Text_0:
# 92 "data/maps/Route10/scripts.pory"
	.string "We were told to set up a barricade\nhere to stop people going through.\pHuh? Why?\pI dunno man,\nI'm not paid enough to care.$"

Route10_Hiker_Text_0:
# 98 "data/maps/Route10/scripts.pory"
	.string "There sure are a lot of old people\n"
	.string "around here.$"

Route10_Hiker_Text_1:
# 99 "data/maps/Route10/scripts.pory"
	.string "I'm not that old yet right?$"

Route10_Hiker_Text_2:
# 101 "data/maps/Route10/scripts.pory"
	.string "The resort here is really popular with\n"
	.string "the elderly folks.$"

Route10_Youngster_Text_0:
# 108 "data/maps/Route10/scripts.pory"
	.string "Aha! You can give me something to do!$"

Route10_Youngster_Text_1:
# 109 "data/maps/Route10/scripts.pory"
	.string "Aw man, losing is no fun...$"

Route10_Youngster_Text_2:
# 111 "data/maps/Route10/scripts.pory"
	.string "My Grandma is at the resort, but there's\n"
	.string "nothing for me to do here.$"

Route10_Guard_Text_0:
# 120 "data/maps/Route10/scripts.pory"
	.string "I'm here to stop people who\ndon't have a booking.\pAnyone who enters from here\nhas to go through me.$"

Route10_ResortBlocker_Text_0:
# 129 "data/maps/Route10/scripts.pory"
	.string "Hey!$"

Route10_ResortBlocker_Text_1:
# 135 "data/maps/Route10/scripts.pory"
	.string "Sorry, but you don't have a booking,\nso you're not allowed to go in.$"

Route10_ResortOwner_Text::
# 28 "data/maps/Route10/scripts.pory"
	.string "Hey there!\nThank you for clearing out Team Magma,\nthose guys weren't good for business.\p"
	.string "Thanks to you, I no longer\nhave to worry about my customers\lbeing harassed!\p"
	.string "As a thank you, you're free to go\nwherever and use the facilities in the\lresort as you please, thanks again!$"
