SpringwoodCity_MapScripts::
# 2 "data/maps/SpringwoodCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringwoodCity_OnTransition
	.byte 0


SpringwoodCity_OnTransition::
# 6 "data/maps/SpringwoodCity/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, SpringwoodCity_OnTransition_3
	return

SpringwoodCity_OnTransition_1:
# 7 "data/maps/SpringwoodCity/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

SpringwoodCity_OnTransition_2:
# 6 "data/maps/SpringwoodCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, SpringwoodCity_OnTransition_1
	return

SpringwoodCity_OnTransition_3:
# 6 "data/maps/SpringwoodCity/scripts.pory"
	compare VAR_EVELYNN_STATE, 2
	goto_if_eq SpringwoodCity_OnTransition_2
	return


SpringwoodCity_LibraEvelynnTriggerL::
# 12 "data/maps/SpringwoodCity/scripts.pory"
	addobject 14
# 13 "data/maps/SpringwoodCity/scripts.pory"
	setobjectxy 14, 35, 21
# 14 "data/maps/SpringwoodCity/scripts.pory"
	call SpringwoodCity_LibraEvelynnTrigger
	return


SpringwoodCity_LibraEvelynnTriggerR::
# 18 "data/maps/SpringwoodCity/scripts.pory"
	addobject 14
# 19 "data/maps/SpringwoodCity/scripts.pory"
	setobjectxy 14, 36, 21
# 20 "data/maps/SpringwoodCity/scripts.pory"
	call SpringwoodCity_LibraEvelynnTrigger
	return


SpringwoodCity_LibraEvelynnTrigger::
# 24 "data/maps/SpringwoodCity/scripts.pory"
	lock
# 25 "data/maps/SpringwoodCity/scripts.pory"
	hidefollower
# 26 "data/maps/SpringwoodCity/scripts.pory"
	setvar VAR_TEMP_A, 0
# 27 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_0
# 28 "data/maps/SpringwoodCity/scripts.pory"
	playse SE_WALL_HIT
# 29 "data/maps/SpringwoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_LibraEvelynnTrigger_Movement_1
# 30 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 31 "data/maps/SpringwoodCity/scripts.pory"
	playse SE_PIN
# 32 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 34 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_2
# 36 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_LibraEvelynnTrigger_Text_0
# 38 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_3
# 39 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_4
# 41 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_5
# 43 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_4
# 45 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_2
# 47 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_LibraEvelynn_Text
# 49 "data/maps/SpringwoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_LibraEvelynnTrigger_Movement_6
# 50 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 14, SpringwoodCity_LibraEvelynnTrigger_Movement_7
# 51 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/SpringwoodCity/scripts.pory"
	removeobject 14
# 53 "data/maps/SpringwoodCity/scripts.pory"
	setvar VAR_EVELYNN_STATE, 3
# 54 "data/maps/SpringwoodCity/scripts.pory"
	release
	return


SpringwoodCity_Intro_Scientist::
# 66 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 67 "data/maps/SpringwoodCity/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq SpringwoodCity_Intro_Scientist_2
# 80 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text_0, MSGBOX_NPC
SpringwoodCity_Intro_Scientist_1:
# 82 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 2, SpringwoodCity_Intro_Scientist_Movement_0
# 83 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return

SpringwoodCity_Intro_Scientist_2:
# 68 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text1
# 69 "data/maps/SpringwoodCity/scripts.pory"
	playse SE_PIN
# 70 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 71 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/SpringwoodCity/scripts.pory"
	faceplayer
# 73 "data/maps/SpringwoodCity/scripts.pory"
	delay 24
# 74 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text2
# 75 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Intro_Scientist_Text3, MSGBOX_NPC
# 76 "data/maps/SpringwoodCity/scripts.pory"
	applymovement 1, SpringwoodCity_Intro_Scientist_Movement_0
# 77 "data/maps/SpringwoodCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/SpringwoodCity/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	goto SpringwoodCity_Intro_Scientist_1


SpringwoodCity_Sign_Name::
# 112 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Name_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Sign_Park::
# 116 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Park_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Sign_BigBuilding::
# 120 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_BigBuilding_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Sign_Gym::
# 124 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sign_Gym_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Sydney::
# 128 "data/maps/SpringwoodCity/scripts.pory"
	lockall
# 129 "data/maps/SpringwoodCity/scripts.pory"
	goto_if_unset FLAG_ITEM_SPRINGWOOD_CITY_SILVER_POWDER, SpringwoodCity_Sydney_2
# 141 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_4, MSGBOX_NPC
SpringwoodCity_Sydney_1:
# 143 "data/maps/SpringwoodCity/scripts.pory"
	releaseall
	return

SpringwoodCity_Sydney_2:
# 130 "data/maps/SpringwoodCity/scripts.pory"
	faceplayer
# 131 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_0
# 132 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_1, MSGBOX_YESNO
# 133 "data/maps/SpringwoodCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SpringwoodCity_Sydney_5
# 138 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_3, MSGBOX_NPC
	goto SpringwoodCity_Sydney_1

SpringwoodCity_Sydney_5:
# 134 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sydney_Text_2, MSGBOX_NPC
# 135 "data/maps/SpringwoodCity/scripts.pory"
	giveitem ITEM_SILVER_POWDER, 1
# 136 "data/maps/SpringwoodCity/scripts.pory"
	setflag FLAG_ITEM_SPRINGWOOD_CITY_SILVER_POWDER
	goto SpringwoodCity_Sydney_1


SpringwoodCity_RichBoy::
# 147 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_RichBoy_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Artist::
# 151 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Artist_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Beauty::
# 155 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Beauty_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Athlete::
# 159 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Athlete_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Camper::
# 163 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Camper_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Boy::
# 167 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Boy_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Sailor::
# 171 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Sailor_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Fisherman::
# 175 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_Fisherman_Text_0, MSGBOX_NPC
	return


SpringwoodCity_AquaGrunt1::
# 179 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_AquaGrunt1_Text_0, MSGBOX_NPC
	return


SpringwoodCity_AquaGrunt2::
# 183 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_AquaGrunt2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_AquaGrunt3::
# 187 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_AquaGrunt3_Text_0, MSGBOX_NPC
	return


SpringwoodCity_AquaGrunt4::
# 191 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_AquaGrunt4_Text_0, MSGBOX_NPC
	return


SpringwoodCity_AquaGrunt5::
# 195 "data/maps/SpringwoodCity/scripts.pory"
	msgbox SpringwoodCity_AquaGrunt5_Text_0, MSGBOX_NPC
	return


# 27 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_0:
# 27 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
	step_end

# 29 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_1:
# 29 "data/maps/SpringwoodCity/scripts.pory"
	lock_facing_direction
# 29 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 29 "data/maps/SpringwoodCity/scripts.pory"
	unlock_facing_direction
	step_end

# 35 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_2:
# 35 "data/maps/SpringwoodCity/scripts.pory"
	face_down
	step_end

# 38 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_3:
# 38 "data/maps/SpringwoodCity/scripts.pory"
	face_left
	step_end

# 40 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_4:
# 40 "data/maps/SpringwoodCity/scripts.pory"
	delay_16
# 40 "data/maps/SpringwoodCity/scripts.pory"
	delay_16
	step_end

# 42 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_5:
# 42 "data/maps/SpringwoodCity/scripts.pory"
	face_right
	step_end

# 49 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_6:
# 49 "data/maps/SpringwoodCity/scripts.pory"
	face_right
# 49 "data/maps/SpringwoodCity/scripts.pory"
	lock_facing_direction
# 49 "data/maps/SpringwoodCity/scripts.pory"
	walk_left
# 49 "data/maps/SpringwoodCity/scripts.pory"
	unlock_facing_direction
	step_end

# 50 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_LibraEvelynnTrigger_Movement_7:
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
# 50 "data/maps/SpringwoodCity/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/SpringwoodCity/scripts.pory"
SpringwoodCity_Intro_Scientist_Movement_0:
# 76 "data/maps/SpringwoodCity/scripts.pory"
	face_up
	step_end

SpringwoodCity_LibraEvelynnTrigger_Text_0:
# 37 "data/maps/SpringwoodCity/scripts.pory"
	.string "What the-\nSo you're following me now?\p...\pNot a very talkative one are you?$"

SpringwoodCity_Intro_Scientist_Text_0:
# 80 "data/maps/SpringwoodCity/scripts.pory"
	.string "Route 4 is straight west from here,\njust past Route 3. Good Luck!$"

SpringwoodCity_Sign_Name_Text_0:
# 112 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood City\nA bustling coastal beauty.$"

SpringwoodCity_Sign_Park_Text_0:
# 116 "data/maps/SpringwoodCity/scripts.pory"
	.string "A small piece of nature, nurtured by us.$"

SpringwoodCity_Sign_BigBuilding_Text_0:
# 120 "data/maps/SpringwoodCity/scripts.pory"
	.string "Libra Institute\nBalancing science and nature.$"

SpringwoodCity_Sign_Gym_Text_0:
# 124 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood Gym\nHome of the strong.$"

SpringwoodCity_Sydney_Text_0:
# 131 "data/maps/SpringwoodCity/scripts.pory"
	.string "Psst, hey kid.$"

SpringwoodCity_Sydney_Text_1:
# 132 "data/maps/SpringwoodCity/scripts.pory"
	.string "Have you heard?$"

SpringwoodCity_Sydney_Text_2:
# 134 "data/maps/SpringwoodCity/scripts.pory"
	.string "Yeah you sure have.$"

SpringwoodCity_Sydney_Text_3:
# 138 "data/maps/SpringwoodCity/scripts.pory"
	.string "Bah!\nWasting my time.$"

SpringwoodCity_Sydney_Text_4:
# 141 "data/maps/SpringwoodCity/scripts.pory"
	.string "You didn't get it from me.$"

SpringwoodCity_RichBoy_Text_0:
# 147 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood City might be on a seaside\n"
	.string "cliff, but that doesn't mean we get\l"
	.string "much salt spray. We must be too high up.$"

SpringwoodCity_Artist_Text_0:
# 151 "data/maps/SpringwoodCity/scripts.pory"
	.string "When I get into a creative slump, I find\n"
	.string "it nice to come and chill at the park.$"

SpringwoodCity_Beauty_Text_0:
# 155 "data/maps/SpringwoodCity/scripts.pory"
	.string "For such a large city there really isn't\n"
	.string "very much in the way of shopping is\l"
	.string "there?$"

SpringwoodCity_Athlete_Text_0:
# 159 "data/maps/SpringwoodCity/scripts.pory"
	.string "Running in the city can be difficult\n"
	.string "with all the people, but I'm scared of\l"
	.string "bug types so I can't run on any of the\l"
	.string "nearby routes...$"

SpringwoodCity_Camper_Text_0:
# 163 "data/maps/SpringwoodCity/scripts.pory"
	.string "Springwood City is just inland from a\n"
	.string "coastal cliffside, so make sure to\l"
	.string "watch your step!$"

SpringwoodCity_Boy_Text_0:
# 167 "data/maps/SpringwoodCity/scripts.pory"
	.string "Did you know that some Routes have super\nrare Pokemon?\pI wonder what Pokemon live around\nhere that I've never seen before.$"

SpringwoodCity_Sailor_Text_0:
# 171 "data/maps/SpringwoodCity/scripts.pory"
	.string "The bustle of Springwood City is real\ndifferent to the port town I'm from.$"

SpringwoodCity_Fisherman_Text_0:
# 175 "data/maps/SpringwoodCity/scripts.pory"
	.string "I'm sure that one of these days I'll\ncatch some super rare Pokemon that can\lonly be found in Springwood City's\lright-hand fountain!$"

SpringwoodCity_AquaGrunt1_Text_0:
# 179 "data/maps/SpringwoodCity/scripts.pory"
	.string "What? Do you mind?$"

SpringwoodCity_AquaGrunt2_Text_0:
# 183 "data/maps/SpringwoodCity/scripts.pory"
	.string "You can't just barge into people's\n"
	.string "conversations like that, very rude.$"

SpringwoodCity_AquaGrunt3_Text_0:
# 187 "data/maps/SpringwoodCity/scripts.pory"
	.string "I'm not doing anything weird, just\n"
	.string "hangin' out.$"

SpringwoodCity_AquaGrunt4_Text_0:
# 191 "data/maps/SpringwoodCity/scripts.pory"
	.string "You haven't seen anyone wearing red\n"
	.string "anywhere nearby have you?$"

SpringwoodCity_AquaGrunt5_Text_0:
# 195 "data/maps/SpringwoodCity/scripts.pory"
	.string "Buh?$"

SpringwoodCity_LibraEvelynn_Text::
# 57 "data/maps/SpringwoodCity/scripts.pory"
	.string "Wait... Are you the one that\ncleared out Quiet Grove?\p"
	.string "Hmmm...\p"
	.string "I'm not sure what you're after,\nbut if you're against Team Aqua then\lyou can't be all bad.\p"
	.string "Tell you what, I'll be in Spring Woods\nto check something.\p"
	.string "Be there.$"

SpringwoodCity_Intro_Scientist_Text1::
# 87 "data/maps/SpringwoodCity/scripts.pory"
	.string "Oh man...\nI forgot to tell the director\l"
	.string "that I left for Springwood Gym.\p"
	.string "I don't want to get in trouble,\nbut I also can't afford to waste time.\p"
	.string "I hope the current challenger doesn't\ntake too long.$"

SpringwoodCity_Intro_Scientist_Text2::
# 94 "data/maps/SpringwoodCity/scripts.pory"
	.string "Oh!\l"
	.string "I'm sorry I didn't notice you were there.\p"
	.string "I'm waiting to get into the Gym,\nbut someone is currently doing the\lGym Challenge.\p"
	.string "So I'm stuck out here waiting\nfor them to finish because I need\lto speak to the Gym Leader.$"

SpringwoodCity_Intro_Scientist_Text3::
# 101 "data/maps/SpringwoodCity/scripts.pory"
	.string "...\p"
	.string "What's that? You need to speak to\nhim about a Pokemon on Route 2?\p"
	.string "What a coincidence!\nThat's also why I'm here.\p"
	.string "He needed us to make a special potion\nto calm the Pokemon down, so I'm here\lto deliver it to him.\p"
	.string "Tell you what, can you go and tell the\nDirector at the Research Lab on Route 4\lthat the potion has been delivered?\p"
	.string "I'll make sure the Gym Leader\nclears out the Pokemon on Route 2\lafter the challenger leaves.\p"
	.string "Thanks in advance!$"
