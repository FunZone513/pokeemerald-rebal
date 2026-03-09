SpringwoodCity_Institution_MapScripts::
# 2 "data/maps/SpringwoodCity_Institution/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringwoodCity_Institution_CheckState
	.byte 0


SpringwoodCity_Institution_CheckState::
# 6 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 4
	goto_if_ge SpringwoodCity_Institution_CheckState_1
	return

SpringwoodCity_Institution_CheckState_1:
# 7 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setflag FLAG_TEMP_A
	return


SpringwoodCity_Institution_Receptionist::
# 12 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_0
# 14 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_eq SpringwoodCity_Institution_Receptionist_2
# 17 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 3
	goto_if_eq SpringwoodCity_Institution_Receptionist_3
SpringwoodCity_Institution_Receptionist_1:
# 20 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_Receptionist_2:
# 15 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1, MSGBOX_NPC
# 16 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 3
	goto SpringwoodCity_Institution_Receptionist_1

SpringwoodCity_Institution_Receptionist_3:
# 18 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_1, MSGBOX_NPC
	goto SpringwoodCity_Institution_Receptionist_1


SpringwoodCity_Institution_Display2::
# 33 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display2_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Institution_Display3::
# 37 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display3_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Institution_Scientist::
# 41 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist2::
# 45 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist3::
# 49 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist3_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist4::
# 53 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist4_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist5::
# 57 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist5_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist6::
# 61 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist6_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Employee::
# 65 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Employee2::
# 69 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Grunt::
# 73 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, SpringwoodCity_Institution_Grunt_1
# 76 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Grunt_Text_1, MSGBOX_NPC
	return

SpringwoodCity_Institution_Grunt_1:
# 74 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Grunt_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_StairBlocker1::
# 81 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 1
# 82 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerL
	return


SpringwoodCity_Institution_StairBlocker2::
# 86 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 2
# 87 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerL
	return


SpringwoodCity_Institution_StairBlocker3::
# 91 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 3
# 92 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerL
	return


SpringwoodCity_Institution_StairBlocker4::
# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 4
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerR
	return


SpringwoodCity_Institution_StairBlocker5::
# 101 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 5
# 102 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerR
	return


SpringwoodCity_Institution_StairBlocker6::
# 106 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 6
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlockerR
	return


SpringwoodCity_Institution_StairBlockerL::
# 111 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 3
	goto_if_lt SpringwoodCity_Institution_StairBlockerL_1
	return

SpringwoodCity_Institution_StairBlockerL_1:
# 111 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlockerR::
# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker::
# 120 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 121 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_3
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_4
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_5
# 125 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_6
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_7
# 127 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_8
SpringwoodCity_Institution_StairBlocker_1:
# 129 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 131 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_StairBlocker_Text_0
# 132 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_10
# 134 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_3
SpringwoodCity_Institution_StairBlocker_9:
# 135 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Institution_StairBlocker_Movement_4
# 140 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 142 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_14
# 144 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_5
SpringwoodCity_Institution_StairBlocker_13:
# 145 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 147 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 148 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_19
# 149 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_20
# 150 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_21
# 151 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_22
# 152 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_23
# 153 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_24
SpringwoodCity_Institution_StairBlocker_17:
# 155 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 156 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_StairBlocker_3:
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_4:
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_5:
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_6:
# 125 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_7:
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_8:
# 127 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_10:
# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_3
	goto SpringwoodCity_Institution_StairBlocker_9

SpringwoodCity_Institution_StairBlocker_14:
# 143 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_5
	goto SpringwoodCity_Institution_StairBlocker_13

SpringwoodCity_Institution_StairBlocker_19:
# 148 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_20:
# 149 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_21:
# 150 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_22:
# 151 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_23:
# 152 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_24:
# 153 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17


SpringwoodCity_Institution_Guard::
# 160 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Guard_Text_0, MSGBOX_NPC
	return


# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_0:
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_left
# 122 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_1:
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_2:
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_right
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_3:
# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_4:
# 136 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock_facing_direction
# 137 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
# 138 "data/maps/SpringwoodCity_Institution/scripts.pory"
	unlock_facing_direction
	step_end

# 143 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_5:
# 143 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_up
	step_end

SpringwoodCity_Institution_Receptionist_Text_0:
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Welcome to the Libra Institute!\nDo you happen to have an appointment?$"

SpringwoodCity_Institution_Receptionist_Text_1:
# 18 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "If you're looking for the researchers\n"
	.string "to help out Simon, you'll find them up\l"
	.string "the stairs to the left.$"

SpringwoodCity_Institution_Display2_Text_0:
# 33 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Whatever is behind that glass sure\n"
	.string "looks impressive.$"

SpringwoodCity_Institution_Display3_Text_0:
# 37 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...isn't that just a stick?$"

SpringwoodCity_Institution_Scientist_Text_0:
# 41 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We don't have much of a breakroom in\n"
	.string "the lab areas upstairs, so when we get\l"
	.string "free time we sort of just hang out in\l"
	.string "the lobby.$"

SpringwoodCity_Institution_Scientist2_Text_0:
# 45 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We collaborate with the Research Lab on\n"
	.string "Route 4 sometimes. They discover\l"
	.string "things, we refine them.$"

SpringwoodCity_Institution_Scientist3_Text_0:
# 49 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Trying to determine research budgets\n"
	.string "is always a pain.$"

SpringwoodCity_Institution_Scientist4_Text_0:
# 53 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I've heard that there's a mystery at\n"
	.string "Dyecress Town, but we don't have\l"
	.string "permission to look into it.$"

SpringwoodCity_Institution_Scientist5_Text_0:
# 57 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Our project got dropped, so we're kinda\n"
	.string "just standing around waiting for a new\l"
	.string "one.$"

SpringwoodCity_Institution_Scientist6_Text_0:
# 61 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I hope we don't get fired before we can\n"
	.string "get a new task, how else am I going to\l"
	.string "feed myself and my 43 barboach babies?$"

SpringwoodCity_Institution_Employee_Text_0:
# 65 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "While the researchers do good work, do\n"
	.string "they really need that much money?$"

SpringwoodCity_Institution_Employee2_Text_0:
# 69 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Honestly I'm just here to make sure\n"
	.string "these two don't fight.$"

SpringwoodCity_Institution_Grunt_Text_0:
# 74 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Huh? What am I still doing here?\pI told you, these are PJs!$"

SpringwoodCity_Institution_Grunt_Text_1:
# 76 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "The security guys keep looking at me\nlike I'm some suspicious individual.\pI uhh...\nI just forgot to take off my PJs\lthis morning!$"

SpringwoodCity_Institution_StairBlocker_Text_0:
# 131 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I apologise,\nbut you don't have permission\lto acces the upper floors.$"

SpringwoodCity_Institution_Guard_Text_0:
# 160 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Go right on ahead.$"

SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1::
# 23 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...\p"
	.string "You have a message from a wordy Old Man\nin Dyecress Town?\p"
	.string "I see!\p"
	.string "Our insitute has had quite an interest\nin Dyecress for quite a while now,\lbut Simon was reluctant to let us\linvestigate the town.\p"
	.string "If he's sent you here as a request for\nhelp, then I can only imagine how\lstumped he must be on his current task.\p"
	.string "Please make your way up the stairs to\nthe left, our in-house researches would\lbe honoured to lend a hand.$"
