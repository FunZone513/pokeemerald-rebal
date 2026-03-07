SpringwoodCity_Institution_MapScripts::
# 2 "data/maps/SpringwoodCity_Institution/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringwoodCity_Institution_CheckState
	.byte 0


SpringwoodCity_Institution_CheckState::
# 6 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_ge SpringwoodCity_Institution_CheckState_1
	return

SpringwoodCity_Institution_CheckState_1:
# 7 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


SpringwoodCity_Institution_Receptionist::
# 12 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_0
# 14 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 1
	goto_if_eq SpringwoodCity_Institution_Receptionist_2
# 19 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_eq SpringwoodCity_Institution_Receptionist_3
SpringwoodCity_Institution_Receptionist_1:
# 22 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_Receptionist_2:
# 15 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_1
# 16 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1
# 17 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_A, 1
# 18 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 2
	goto SpringwoodCity_Institution_Receptionist_1

SpringwoodCity_Institution_Receptionist_3:
# 20 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Receptionist_Text_2
	goto SpringwoodCity_Institution_Receptionist_1


SpringwoodCity_Institution_Display2::
# 35 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display2_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Institution_Display3::
# 39 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Display3_Text_0, MSGBOX_SIGN
	return


SpringwoodCity_Institution_Scientist::
# 43 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist2::
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Scientist3::
# 51 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Scientist3_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Employee::
# 55 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Employee2::
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Employee2_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_Grunt::
# 63 "data/maps/SpringwoodCity_Institution/scripts.pory"
	goto_if_set FLAG_CLEARED_QUIET_GROVE, SpringwoodCity_Institution_Grunt_1
# 66 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Grunt_Text_1, MSGBOX_NPC
	return

SpringwoodCity_Institution_Grunt_1:
# 64 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Grunt_Text_0, MSGBOX_NPC
	return


SpringwoodCity_Institution_StairBlocker1::
# 71 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 1
# 72 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker2::
# 76 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 2
# 77 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker3::
# 81 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 3
# 82 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker4::
# 86 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 4
# 87 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker5::
# 91 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 5
# 92 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker6::
# 96 "data/maps/SpringwoodCity_Institution/scripts.pory"
	setvar VAR_TEMP_1, 6
# 97 "data/maps/SpringwoodCity_Institution/scripts.pory"
	call SpringwoodCity_Institution_StairBlocker
	return


SpringwoodCity_Institution_StairBlocker::
# 101 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lockall
# 102 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_3
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_4
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_5
# 106 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_6
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_7
# 108 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_8
SpringwoodCity_Institution_StairBlocker_1:
# 110 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 112 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_StairBlocker_Text_0
# 113 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_10
# 115 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_3
SpringwoodCity_Institution_StairBlocker_9:
# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpringwoodCity_Institution_StairBlocker_Movement_4
# 121 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 123 "data/maps/SpringwoodCity_Institution/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SpringwoodCity_Institution_StairBlocker_14
# 125 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_5
SpringwoodCity_Institution_StairBlocker_13:
# 126 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 128 "data/maps/SpringwoodCity_Institution/scripts.pory"
	switch VAR_TEMP_1
# 129 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 1, SpringwoodCity_Institution_StairBlocker_19
# 130 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 2, SpringwoodCity_Institution_StairBlocker_20
# 131 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 3, SpringwoodCity_Institution_StairBlocker_21
# 132 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 4, SpringwoodCity_Institution_StairBlocker_22
# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 5, SpringwoodCity_Institution_StairBlocker_23
# 134 "data/maps/SpringwoodCity_Institution/scripts.pory"
	case 6, SpringwoodCity_Institution_StairBlocker_24
SpringwoodCity_Institution_StairBlocker_17:
# 136 "data/maps/SpringwoodCity_Institution/scripts.pory"
	waitmovement 0
# 137 "data/maps/SpringwoodCity_Institution/scripts.pory"
	releaseall
	return

SpringwoodCity_Institution_StairBlocker_3:
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_4:
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_5:
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_6:
# 106 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_7:
# 107 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_8:
# 108 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_1

SpringwoodCity_Institution_StairBlocker_10:
# 114 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_3
	goto SpringwoodCity_Institution_StairBlocker_9

SpringwoodCity_Institution_StairBlocker_14:
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_5
	goto SpringwoodCity_Institution_StairBlocker_13

SpringwoodCity_Institution_StairBlocker_19:
# 129 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_20:
# 130 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_21:
# 131 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 2, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_22:
# 132 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_2
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_23:
# 133 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_1
	goto SpringwoodCity_Institution_StairBlocker_17

SpringwoodCity_Institution_StairBlocker_24:
# 134 "data/maps/SpringwoodCity_Institution/scripts.pory"
	applymovement 3, SpringwoodCity_Institution_StairBlocker_Movement_0
	goto SpringwoodCity_Institution_StairBlocker_17


SpringwoodCity_Institution_Guard::
# 141 "data/maps/SpringwoodCity_Institution/scripts.pory"
	msgbox SpringwoodCity_Institution_Guard_Text_0, MSGBOX_NPC
	return


# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_0:
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_left
# 103 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_1:
# 104 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_2:
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_right
# 105 "data/maps/SpringwoodCity_Institution/scripts.pory"
	face_down
	step_end

# 114 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_3:
# 114 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_4:
# 117 "data/maps/SpringwoodCity_Institution/scripts.pory"
	lock_facing_direction
# 118 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_down
# 119 "data/maps/SpringwoodCity_Institution/scripts.pory"
	unlock_facing_direction
	step_end

# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
SpringwoodCity_Institution_StairBlocker_Movement_5:
# 124 "data/maps/SpringwoodCity_Institution/scripts.pory"
	walk_up
	step_end

SpringwoodCity_Institution_Receptionist_Text_0:
# 13 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Welcome to the Libra Institute!\nWould you happen to have an appointment?$"

SpringwoodCity_Institution_Receptionist_Text_1:
# 15 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...$"

SpringwoodCity_Institution_Receptionist_Text_2:
# 20 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Oh you're the one helping out Spenser.\n"
	.string "You'll find our researchers up the\l"
	.string "stairs to the left.$"

SpringwoodCity_Institution_Display2_Text_0:
# 35 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Whatever is behind that glass sure\n"
	.string "looks impressive.$"

SpringwoodCity_Institution_Display3_Text_0:
# 39 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "...isn't that just a stick?$"

SpringwoodCity_Institution_Scientist_Text_0:
# 43 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We don't have much of a breakroom in\n"
	.string "the lab areas upstairs, so when we get\l"
	.string "free time we sort of just hang out in\l"
	.string "the lobby.$"

SpringwoodCity_Institution_Scientist2_Text_0:
# 47 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "We collaborate with the Research Lab\non Route 4 sometimes.\pThey discover things, we refine them.$"

SpringwoodCity_Institution_Scientist3_Text_0:
# 51 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Trying to determine research budgets\n"
	.string "is always a pain.$"

SpringwoodCity_Institution_Employee_Text_0:
# 55 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "While the researchers do good work, do\n"
	.string "they really need that much money?$"

SpringwoodCity_Institution_Employee2_Text_0:
# 59 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Honestly I'm just here to make sure\n"
	.string "these two don't fight.$"

SpringwoodCity_Institution_Grunt_Text_0:
# 64 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Huh? What am I still doing here?\pI told you, these are PJs!$"

SpringwoodCity_Institution_Grunt_Text_1:
# 66 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "The security guys keep looking at me\nlike I'm some suspicious individual.\pI uhh...\nI just forgot to take off my PJs\lthis morning!$"

SpringwoodCity_Institution_StairBlocker_Text_0:
# 112 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "I apologise,\nbut you don't have permission\lto acces the upper floors.$"

SpringwoodCity_Institution_Guard_Text_0:
# 141 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "Go right on ahead.$"

SpringwoodCity_Institution_Receptionist_Dyecress_Mystery1::
# 25 "data/maps/SpringwoodCity_Institution/scripts.pory"
	.string "You have a message from a wordy Old Man\nin Dyecress Town?\p"
	.string "I see!\p"
	.string "Our insitute has had quite an interest\nin Dyecress for quite a while now,\l"
	.string "but Old Spenser was reluctant to let us\linvestigate the town.\p"
	.string "If he's sent you here as a request for\nhelp, then I can only imagine how stumped\lhe must be on his current task.\p"
	.string "Please make your way up the stairs to\nthe left, our in-house researches would\lbe honoured to lend a hand.$"
