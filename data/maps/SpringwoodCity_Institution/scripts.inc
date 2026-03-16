SpringwoodCity_Institution_MapScripts::
# 2 "data/maps/SpringwoodCity_Institution/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringwoodCity_Institution_CheckState
	.byte 0


SpringwoodCity_Institution_CheckState::
# 6 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 4
	goto_if_ge SpringwoodCity_Institution_CheckState_2
SpringwoodCity_Institution_CheckState_1:
# 10 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_set FLAG_CLEARED_ROUTE5, SpringwoodCity_Institution_CheckState_4
	return

SpringwoodCity_Institution_CheckState_2:
# 7 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setflag FLAG_TEMP_A
	goto SpringwoodCity_Institution_CheckState_1

SpringwoodCity_Institution_CheckState_4:
# 11 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setflag FLAG_TEMP_10
# 12 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setflag FLAG_TEMP_11
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setflag FLAG_TEMP_12
	return


SpringwoodCity_Institution_Receptionist::
# 18 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 19 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_0
# 20 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_eq SpringwoodCity_Institution_Receptionist_2
# 23 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 3
	goto_if_eq SpringwoodCity_Institution_Receptionist_3
SpringwoodCity_Institution_Receptionist_1:
# 26 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_Receptionist_2:
# 21 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1, MSGBOX_NPC
# 22 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 3
	goto SpringwoodCity_Institution_Receptionist_1

SpringwoodCity_Institution_Receptionist_3:
# 24 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_1, MSGBOX_NPC
	goto SpringwoodCity_Institution_Receptionist_1


SpringwoodCity_Institution_Display2::
# 39 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display2_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Institution_Display3::
# 43 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display3_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Institution_Scientist::
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist2::
# 51 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist3::
# 55 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist3_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist4::
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist4_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist5::
# 63 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist5_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist6::
# 67 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist6_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Employee::
# 71 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Employee2::
# 75 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Maniac::
# 79 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock
# 80 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_unset FLAG_GOTTEN_POKEDEX_REWARD, SpringwoodCity_Institution_Maniac_2
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Maniac_Text_4, MSGBOX_NPC
SpringwoodCity_Institution_Maniac_1:
# 99 "data/maps/SpringwoodCity_Institution/scripts.pory"
	release
	return

SpringwoodCity_Institution_Maniac_2:
# 81 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Maniac_Text_0, MSGBOX_NPC
# 83 "data/maps/SpringwoodCity_Institution/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 85 "data/maps/SpringwoodCity_Institution/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8006
# 87 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_0x8006, 20
	goto_if_ge SpringwoodCity_Institution_Maniac_5
# 94 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Maniac_Text_3, MSGBOX_NPC
	goto SpringwoodCity_Institution_Maniac_1

SpringwoodCity_Institution_Maniac_5:
# 88 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Maniac_Text_1
# 89 "data/maps/SpringwoodCity_Institution/scripts.pory"
	closemessage
# 90 "data/maps/SpringwoodCity_Institution/scripts.pory"
	giveitem ITEM_MAX_REPEL, 5
# 91 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Maniac_Text_2
# 92 "data/maps/SpringwoodCity_Institution/scripts.pory"
	closemessage
	goto SpringwoodCity_Institution_Maniac_1


SpringwoodCity_Institution_RockEnjoyer::
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_set FLAG_TEMP_10, SpringwoodCity_Institution_RockEnjoyer_5
SpringwoodCity_Institution_RockEnjoyer_3:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_RockEnjoyer_Text_2, MSGBOX_NPC
SpringwoodCity_Institution_RockEnjoyer_1:
# 119 "data/maps/SpringwoodCity_Institution/scripts.pory"
	release
	return

SpringwoodCity_Institution_RockEnjoyer_2:
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_RockEnjoyer_Text_0, MSGBOX_NPC
# 106 "data/maps/SpringwoodCity_Institution/scripts.pory"
	delay 32
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_RockEnjoyer_Text_1
# 108 "data/maps/SpringwoodCity_Institution/scripts.pory"
	closemessage
# 109 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setflag FLAG_CLEARED_ROUTE5
# 110 "data/maps/SpringwoodCity_Institution/scripts.pory"
	fadescreen FADE_TO_BLACK
# 111 "data/maps/SpringwoodCity_Institution/scripts.pory"
	removeobject 14
# 112 "data/maps/SpringwoodCity_Institution/scripts.pory"
	playse SE_FLEE
# 113 "data/maps/SpringwoodCity_Institution/scripts.pory"
	delay 60
# 114 "data/maps/SpringwoodCity_Institution/scripts.pory"
	special DrawWholeMapView
# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto SpringwoodCity_Institution_RockEnjoyer_1

SpringwoodCity_Institution_RockEnjoyer_4:
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_set FLAG_TEMP_12, SpringwoodCity_Institution_RockEnjoyer_2
	goto SpringwoodCity_Institution_RockEnjoyer_3

SpringwoodCity_Institution_RockEnjoyer_5:
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_set FLAG_TEMP_11, SpringwoodCity_Institution_RockEnjoyer_4
	goto SpringwoodCity_Institution_RockEnjoyer_3


SpringwoodCity_Institution_StairBlocker1::
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 1
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerL
	return


SpringwoodCity_Institution_StairBlocker2::
# 128 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 2
# 129 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerL
	return


SpringwoodCity_Institution_StairBlocker3::
# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 3
# 134 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerL
	return


SpringwoodCity_Institution_StairBlocker4::
# 138 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 4
# 139 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerR
	return


SpringwoodCity_Institution_StairBlocker5::
# 143 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 5
# 144 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerR
	return


SpringwoodCity_Institution_StairBlocker6::
# 148 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 6
# 149 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerR
	return


SpringwoodCity_Institution_StairBlockerL::
# 153 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 3
	goto_if_lt SpringwoodCity_Institution_StairBlockerL_1
	return

SpringwoodCity_Institution_StairBlockerL_1:
# 153 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlockerR::
# 158 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker::
# 162 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 163 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 164 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_3
# 165 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_4
# 166 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_5
# 167 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_6
# 168 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_7
# 169 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_8
SpringwoodCity_Institution_StairBlocker_1:
# 171 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 173 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_StairBlocker_Text_0
# 174 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_10
# 176 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_3
SpringwoodCity_Institution_StairBlocker_9:
# 177 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Institution_StairBlocker_Movement_4
# 182 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 184 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_14
# 186 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_5
SpringwoodCity_Institution_StairBlocker_13:
# 187 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 189 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 190 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_19
# 191 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_20
# 192 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_21
# 193 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_22
# 194 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_23
# 195 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_24
SpringwoodCity_Institution_StairBlocker_17:
# 197 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 198 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_StairBlocker_3:
# 164 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_4:
# 165 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_5:
# 166 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_6:
# 167 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_7:
# 168 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_8:
# 169 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_10:
# 175 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_3
	goto SpringwoodCity_Institution_StairBlocker_9

SpringwoodCity_Institution_StairBlocker_14:
# 185 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_5
	goto SpringwoodCity_Institution_StairBlocker_13

SpringwoodCity_Institution_StairBlocker_19:
# 190 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_20:
# 191 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_21:
# 192 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_22:
# 193 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_23:
# 194 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_24:
# 195 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17


SpringwoodCity_Institution_Guard::
# 202 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Guard_Text_0, MSGBOX_NPC
	return


# 164 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_0:
# 164 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_left
# 164 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 165 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_1:
# 165 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 166 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_2:
# 166 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_right
# 166 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 175 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_3:
# 175 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
	step_end

# 177 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_4:
# 178 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock_facing_direction
# 179 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
# 180 "data/maps/SpringwoodCity_Institution/scripts.pory"
	unlock_facing_direction
	step_end

# 185 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_5:
# 185 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_up
	step_end

SpringwoodCity_Institution_Receptionist_Text_0:
# 19 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Welcome to the Libra Institute!\nDo you happen to have an appointment?$"

SpringwoodCity_Institution_Receptionist_Text_1:
# 24 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "If you're looking for the researchers\n"
	.string "to help out Simon, you'll find them up\l"
	.string "the stairs to the left.$"

SpringwoodCity_Institution_Display2_Text_0:
# 39 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Whatever is behind that glass sure\n"
	.string "looks impressive.$"

SpringwoodCity_Institution_Display3_Text_0:
# 43 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...isn't that just a stick?$"

SpringwoodCity_Institution_Scientist_Text_0:
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We don't have much of a breakroom in\n"
	.string "the lab areas upstairs, so when we get\l"
	.string "free time we sort of just hang out in\l"
	.string "the lobby.$"

SpringwoodCity_Institution_Scientist2_Text_0:
# 51 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We collaborate with the Research Lab on\n"
	.string "Route 4 sometimes. They discover\l"
	.string "things, we refine them.$"

SpringwoodCity_Institution_Scientist3_Text_0:
# 55 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Trying to determine research budgets\n"
	.string "is always a pain.$"

SpringwoodCity_Institution_Scientist4_Text_0:
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I've heard that there's a mystery at\n"
	.string "Dyecress Town, but we don't have\l"
	.string "permission to look into it.$"

SpringwoodCity_Institution_Scientist5_Text_0:
# 63 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Our project got dropped, so we're kinda\n"
	.string "just standing around waiting for a new\l"
	.string "one.$"

SpringwoodCity_Institution_Scientist6_Text_0:
# 67 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I hope we don't get fired before we can\n"
	.string "get a new task, how else am I going to\l"
	.string "feed myself and my 43 barboach babies?$"

SpringwoodCity_Institution_Employee_Text_0:
# 71 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "While the researchers do good work, do\n"
	.string "they really need that much money?$"

SpringwoodCity_Institution_Employee2_Text_0:
# 75 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Honestly I'm just here to make sure\n"
	.string "these two don't fight.$"

SpringwoodCity_Institution_Maniac_Text_0:
# 81 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I'm promoting the Pokedex by giving out\n"
	.string "a reward to trainers that have caught\l"
	.string "at least 20 Pokemon.$"

SpringwoodCity_Institution_Maniac_Text_1:
# 88 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "{STR_VAR_2} Pokemon! Excellent!\nYou're eligible for this reward!$"

SpringwoodCity_Institution_Maniac_Text_2:
# 91 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I hope your journey continues to go\n"
	.string "well!$"

SpringwoodCity_Institution_Maniac_Text_3:
# 94 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Oh it looks like you have only caught\n{STR_VAR_2} Pokemon so far...\pGood luck with catching some more!$"

SpringwoodCity_Institution_Maniac_Text_4:
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Good day! I hope your travels are going\n"
	.string "well.$"

SpringwoodCity_Institution_RockEnjoyer_Text_0:
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "MY BABIES!\pWhy would you do that to my babies???$"

SpringwoodCity_Institution_RockEnjoyer_Text_1:
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "What's that? There's a mysterious rock\n"
	.string "that has been unearthed over on Route\l"
	.string "5? Why didn't you say so!$"

SpringwoodCity_Institution_RockEnjoyer_Text_2:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I LIKE ROCKS! NOTHING WILL\nSEPARATE ME FROM MY BABIES!$"

SpringwoodCity_Institution_StairBlocker_Text_0:
# 173 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I apologise,\nbut you don't have permission\lto acces the upper floors.$"

SpringwoodCity_Institution_Guard_Text_0:
# 202 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Go right on ahead.$"

SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1::
# 29 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...\p"
	.string "You have a message from a wordy Old Man\nin Dyecress Town?\p"
	.string "I see!\p"
	.string "Our insitute has had quite an interest\nin Dyecress for quite a while now,\lbut Simon was reluctant to let us\linvestigate the town.\p"
	.string "If he's sent you here as a request for\nhelp, then I can only imagine how\lstumped he must be on his current task.\p"
	.string "Please make your way up the stairs to\nthe left, our in-house researches would\lbe honoured to lend a hand.$"
