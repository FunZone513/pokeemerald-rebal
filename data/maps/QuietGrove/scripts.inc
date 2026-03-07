QuietGrove_MapScripts::
# 2 "data/maps/QuietGrove/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, QuietGrove_OnTransition
	.byte 0


QuietGrove_OnTransition::
# 6 "data/maps/QuietGrove/scripts.pory"
	goto_if_unset FLAG_CLEARED_QUIET_GROVE, QuietGrove_OnTransition_1
	return

QuietGrove_OnTransition_1:
# 7 "data/maps/QuietGrove/scripts.pory"
	setflag FLAG_TEMP_A
# 8 "data/maps/QuietGrove/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


QuietGrove_AquaGrunt1::
# 13 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_AQUA_GRUNT1, QuietGrove_AquaGrunt1_Text_0, QuietGrove_AquaGrunt1_Text_1
# 18 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_AquaGrunt1_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_AquaGrunt2::
# 23 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_AQUA_GRUNT2, QuietGrove_AquaGrunt2_Text_0, QuietGrove_AquaGrunt2_Text_1
# 28 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_AquaGrunt2_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_AquaGrunt3::
# 33 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_AQUA_GRUNT3, QuietGrove_AquaGrunt3_Text_0, QuietGrove_AquaGrunt3_Text_1
# 38 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_AquaGrunt3_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_Admin::
# 43 "data/maps/QuietGrove/scripts.pory"
	lockall
# 44 "data/maps/QuietGrove/scripts.pory"
	setvar VAR_TEMP_A, 0
# 45 "data/maps/QuietGrove/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 46 "data/maps/QuietGrove/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq QuietGrove_Admin_2
QuietGrove_Admin_1:
# 50 "data/maps/QuietGrove/scripts.pory"
	delay 30
# 51 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Admin_Text
# 52 "data/maps/QuietGrove/scripts.pory"
	applymovement 11, QuietGrove_Admin_Movement_1
# 53 "data/maps/QuietGrove/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 54 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Admin_Text_0
# 55 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_no_intro TRAINER_QUIET_GROVE_ADMIN, QuietGrove_Admin_Text_1
# 56 "data/maps/QuietGrove/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Admin_Text2
# 58 "data/maps/QuietGrove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/QuietGrove/scripts.pory"
	delay 10
# 60 "data/maps/QuietGrove/scripts.pory"
	playse SE_EXIT
# 61 "data/maps/QuietGrove/scripts.pory"
	setflag FLAG_CLEARED_QUIET_GROVE
# 62 "data/maps/QuietGrove/scripts.pory"
	removeobject 11
# 63 "data/maps/QuietGrove/scripts.pory"
	removeobject 10
# 64 "data/maps/QuietGrove/scripts.pory"
	removeobject 9
# 65 "data/maps/QuietGrove/scripts.pory"
	removeobject 8
# 66 "data/maps/QuietGrove/scripts.pory"
	waitse
# 67 "data/maps/QuietGrove/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/QuietGrove/scripts.pory"
	releaseall
	return

QuietGrove_Admin_2:
# 47 "data/maps/QuietGrove/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, QuietGrove_Admin_Movement_0
# 48 "data/maps/QuietGrove/scripts.pory"
	waitmovement 0
	goto QuietGrove_Admin_1


QuietGrove_Sign::
# 87 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Sign_Text_0, MSGBOX_SIGN
	return


QuietGrove_BugCatcher::
# 91 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_BUG_CATCHER, QuietGrove_BugCatcher_Text_0, QuietGrove_BugCatcher_Text_1
# 96 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_Girl::
# 101 "data/maps/QuietGrove/scripts.pory"
	trainerbattle_single TRAINER_QUIET_GROVE_GIRL, QuietGrove_Girl_Text_0, QuietGrove_Girl_Text_1
# 106 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_Girl_Text_2, MSGBOX_AUTOCLOSE
	end


QuietGrove_LittleGirl::
# 111 "data/maps/QuietGrove/scripts.pory"
	msgbox QuietGrove_LittleGirl_Text, MSGBOX_NPC
	return


# 47 "data/maps/QuietGrove/scripts.pory"
QuietGrove_Admin_Movement_0:
# 47 "data/maps/QuietGrove/scripts.pory"
	walk_left
# 47 "data/maps/QuietGrove/scripts.pory"
	face_up
	step_end

# 52 "data/maps/QuietGrove/scripts.pory"
QuietGrove_Admin_Movement_1:
# 52 "data/maps/QuietGrove/scripts.pory"
	face_down
	step_end

QuietGrove_AquaGrunt1_Text_0:
# 15 "data/maps/QuietGrove/scripts.pory"
	.string "Yo these little trees are harshing my\n"
	.string "vibes man!$"

QuietGrove_AquaGrunt1_Text_1:
# 16 "data/maps/QuietGrove/scripts.pory"
	.string "Curse these tiny arboreal terrors...$"

QuietGrove_AquaGrunt1_Text_2:
# 18 "data/maps/QuietGrove/scripts.pory"
	.string "These little trees just keep coming\n"
	.string "back, even after we cut them down!$"

QuietGrove_AquaGrunt2_Text_0:
# 25 "data/maps/QuietGrove/scripts.pory"
	.string "Yeah! Team Aqua!$"

QuietGrove_AquaGrunt2_Text_1:
# 26 "data/maps/QuietGrove/scripts.pory"
	.string "No! Team Aquan't!$"

QuietGrove_AquaGrunt2_Text_2:
# 28 "data/maps/QuietGrove/scripts.pory"
	.string "If we were in water I would've won...$"

QuietGrove_AquaGrunt3_Text_0:
# 35 "data/maps/QuietGrove/scripts.pory"
	.string "...Why are we in a forest?$"

QuietGrove_AquaGrunt3_Text_1:
# 36 "data/maps/QuietGrove/scripts.pory"
	.string "No really, aren't we the ocean guys?$"

QuietGrove_AquaGrunt3_Text_2:
# 38 "data/maps/QuietGrove/scripts.pory"
	.string "I don't understand what we're doing\n"
	.string "with all these... trees.$"

QuietGrove_Admin_Text_0:
# 54 "data/maps/QuietGrove/scripts.pory"
	.string "They've sent a child to stop us.$"

QuietGrove_Admin_Text_1:
# 55 "data/maps/QuietGrove/scripts.pory"
	.string "Oho!$"

QuietGrove_Sign_Text_0:
# 87 "data/maps/QuietGrove/scripts.pory"
	.string "Quiet Grove,\nWatch out for bugs!$"

QuietGrove_BugCatcher_Text_0:
# 93 "data/maps/QuietGrove/scripts.pory"
	.string "This place is great for catching bug\n"
	.string "types!$"

QuietGrove_BugCatcher_Text_1:
# 94 "data/maps/QuietGrove/scripts.pory"
	.string "Darn, I guess the ones here weren't as\n"
	.string "good as I thought.$"

QuietGrove_BugCatcher_Text_2:
# 96 "data/maps/QuietGrove/scripts.pory"
	.string "I thought there would be strong\n"
	.string "Pokemon here after hearing that there\l"
	.string "was a rowdy one.$"

QuietGrove_Girl_Text_0:
# 103 "data/maps/QuietGrove/scripts.pory"
	.string "I got lost! I hate it here! So many bugs!$"

QuietGrove_Girl_Text_1:
# 104 "data/maps/QuietGrove/scripts.pory"
	.string "Ew ew ew ew ew.$"

QuietGrove_Girl_Text_2:
# 106 "data/maps/QuietGrove/scripts.pory"
	.string "I thought a battle would distract me\n"
	.string "but now I'm just stuck here without my\l"
	.string "Pokemon...$"

QuietGrove_Admin_Text::
# 71 "data/maps/QuietGrove/scripts.pory"
	.string "I was hoping we would've bought enough\ntime with the Parasect and the rockslide,\l"
	.string "but they sure reacted quickly to it.\p"
	.string "Even after all that hard work\nbehind the scenes...\p"
	.string "Such a let down, we had only just\nstarted getting the info we wanted.\p"
	.string "And to cap off this colossal failure,$"

QuietGrove_Admin_Text2::
# 79 "data/maps/QuietGrove/scripts.pory"
	.string "You're not quite the pushover\nI thought you would be.\p"
	.string "Alright, I guess we'll retreat for now.\p"
	.string "I'll be seeing you later though,\nwe have unfinished business.\p"
	.string "I won't back down so easily next time.$"

QuietGrove_LittleGirl_Text::
# 114 "data/maps/QuietGrove/scripts.pory"
	.string "My friend lives around here somewhere,\nthey always pop out of nowhere!\p"
	.string "I don't see them every time,\nbut it's always fun when they come back!\p"
	.string "Last time they brought a funny lady,\nshe looked a little sad when she saw me,\lbut we had played a whole bunch after!\p"
	.string "I hope my friend didn't get scared off by\nangry Pokemon, they're only little,\llike me.\p"
	.string "You should come play with us next\ntime they're here!$"
