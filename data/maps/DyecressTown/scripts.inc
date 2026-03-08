DyecressTown_MapScripts::
# 2 "data/maps/DyecressTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_OnLoad
	.byte 0


DyecressTown_OnLoad::
# 6 "data/maps/DyecressTown/scripts.pory"
	compare VAR_DYECRESS_MYSTERY_STATE, 2
	goto_if_le DyecressTown_OnLoad_1
	return

DyecressTown_OnLoad_1:
# 7 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_A
	return


DyecressFirstVisit::
# 12 "data/maps/DyecressTown/scripts.pory"
	goto_if_unset FLAG_FIRST_VISIT_DYECRESS, DyecressFirstVisit_1
	return

DyecressFirstVisit_1:
# 13 "data/maps/DyecressTown/scripts.pory"
	lock
# 14 "data/maps/DyecressTown/scripts.pory"
	applymovement 14, DyecressFirstVisit_Movement_0
# 15 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 16 "data/maps/DyecressTown/scripts.pory"
	playse SE_PIN
# 17 "data/maps/DyecressTown/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 18 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 19 "data/maps/DyecressTown/scripts.pory"
	delay 80
# 20 "data/maps/DyecressTown/scripts.pory"
	applymovement 14, DyecressFirstVisit_Movement_1
# 21 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 22 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_FIRST_VISIT_DYECRESS
# 23 "data/maps/DyecressTown/scripts.pory"
	removeobject 14
# 24 "data/maps/DyecressTown/scripts.pory"
	releaseall
	return


DyecressTown_Spenser::
# 29 "data/maps/DyecressTown/scripts.pory"
	lockall
# 30 "data/maps/DyecressTown/scripts.pory"
	switch VAR_DYECRESS_MYSTERY_STATE
# 31 "data/maps/DyecressTown/scripts.pory"
	case 0, DyecressTown_Spenser_3
# 36 "data/maps/DyecressTown/scripts.pory"
	case 1, DyecressTown_Spenser_4
# 37 "data/maps/DyecressTown/scripts.pory"
	case 2, DyecressTown_Spenser_4
# 41 "data/maps/DyecressTown/scripts.pory"
	case 3, DyecressTown_Spenser_5
DyecressTown_Spenser_5:
# 43 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Spenser_Text_1, MSGBOX_NPC
DyecressTown_Spenser_1:
# 45 "data/maps/DyecressTown/scripts.pory"
	releaseall
	return

DyecressTown_Spenser_3:
# 32 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Spenser_Text1, MSGBOX_NPC
# 33 "data/maps/DyecressTown/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 1
	goto DyecressTown_Spenser_1

DyecressTown_Spenser_4:
# 38 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Spenser_Text_0
	goto DyecressTown_Spenser_1


DyecressTown_Sign::
# 65 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign2::
# 69 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign2_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign3::
# 73 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign3_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign_Temple::
# 77 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Temple_Text_0, MSGBOX_YESNO
# 78 "data/maps/DyecressTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DyecressTown_Sign_Temple_1
# 80 "data/maps/DyecressTown/scripts.pory"
	closemessage
	return

DyecressTown_Sign_Temple_1:
# 79 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Temple_Text, MSGBOX_SIGN
	return


DyecressTown_OldMan::
# 98 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_OldMan_Text_0, MSGBOX_NPC
	return


DyecressTown_OldWoman::
# 102 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_OldWoman_Text_0, MSGBOX_NPC
	return


DyecressTown_Woman::
# 106 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Woman_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist1::
# 110 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist1_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist2::
# 114 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist2_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist3::
# 118 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist3_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist4::
# 122 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist4_Text_0, MSGBOX_NPC
	return


# 14 "data/maps/DyecressTown/scripts.pory"
DyecressFirstVisit_Movement_0:
# 14 "data/maps/DyecressTown/scripts.pory"
	face_left
	step_end

# 20 "data/maps/DyecressTown/scripts.pory"
DyecressFirstVisit_Movement_1:
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 20 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
	step_end

DyecressTown_Spenser_Text_0:
# 38 "data/maps/DyecressTown/scripts.pory"
	.string "I hope the researchers from Libra can\n"
	.string "help us uncover the origin of our town.$"

DyecressTown_Spenser_Text_1:
# 43 "data/maps/DyecressTown/scripts.pory"
	.string "As much as it pains me to have these\n"
	.string "coats scrutinise our wonderful history,\l"
	.string "I must admit that they are at least\l"
	.string "careful not to damage anything.$"

DyecressTown_Sign_Text_0:
# 65 "data/maps/DyecressTown/scripts.pory"
	.string "Dyecress Town,\nA heritage overlooking the sea.$"

DyecressTown_Sign2_Text_0:
# 69 "data/maps/DyecressTown/scripts.pory"
	.string "Spenser's House.$"

DyecressTown_Sign3_Text_0:
# 73 "data/maps/DyecressTown/scripts.pory"
	.string "Herb Shop.\nA healthy alternative!$"

DyecressTown_Sign_Temple_Text_0:
# 77 "data/maps/DyecressTown/scripts.pory"
	.string "The words seem to have\neroded over time...\pDo you want to try reading it anyway?$"

DyecressTown_OldMan_Text_0:
# 98 "data/maps/DyecressTown/scripts.pory"
	.string "Dyecress Town used to be a medical hub\n"
	.string "for the region. While many of its roots\l"
	.string "have been lost to time, the culture of\l"
	.string "growing medicinal plants remains.$"

DyecressTown_OldWoman_Text_0:
# 102 "data/maps/DyecressTown/scripts.pory"
	.string "While these days many travel looking\n"
	.string "for the big city, this town and its\l"
	.string "residents have remained faithful to\l"
	.string "their long history.$"

DyecressTown_Woman_Text_0:
# 106 "data/maps/DyecressTown/scripts.pory"
	.string "Most of the flowering plants here can\n"
	.string "be used for medicine, and the petals\l"
	.string "can also make wonderful pigments.$"

DyecressTown_Scientist1_Text_0:
# 110 "data/maps/DyecressTown/scripts.pory"
	.string "I'm wondering if these bizarre pillars\n"
	.string "have some sort of purpose.$"

DyecressTown_Scientist2_Text_0:
# 114 "data/maps/DyecressTown/scripts.pory"
	.string "You can really feel the town's history\n"
	.string "just by being here.$"

DyecressTown_Scientist3_Text_0:
# 118 "data/maps/DyecressTown/scripts.pory"
	.string "The archway seems quite old, yet it's\n"
	.string "like it hasn't aged a day since it was\l"
	.string "built.$"

DyecressTown_Scientist4_Text_0:
# 122 "data/maps/DyecressTown/scripts.pory"
	.string "The text on this sign is much too\n"
	.string "degraded to be read, so we're using a\l"
	.string "new method to try and gather more\l"
	.string "clues.$"

DyecressTown_Spenser_Text1::
# 48 "data/maps/DyecressTown/scripts.pory"
	.string "The history of Dyecress is something\nthat many know exists,\lbut few remember details.\p"
	.string "While the specifics of the history have\nbeen lost over time, the guidance\l"
	.string "granted by our predecessors\lremains in our hearts and actions.\p"
	.string "Thus, the current is built upon the\nefforts of the past.\p"
	.string "To forget where we come from is to\nforget where we're headed.\p"
	.string "These old bones have been working\ntirelessly trying to uncover the\lsecret of the town's origin.\p"
	.string "While my time has been spent sifting\nthrough old books, I've heard tell that\l"
	.string "the upstart folks in the city have\lfound new ways of uncovering and\ldeciphering lost texts.\p"
	.string "I'm no longer the man I was in my youth,\nso I'm unable to make the trip myself,\l"
	.string "and many of the residents here are also\ltoo elderly to travel the distance.\p"
	.string "Could you do an old soul a favour?\p"
	.string "I would appreciate you sending word to\nLibra Institute in Springwood City,\l"
	.string "requesting someone to finally unravel\lthe history of our town.$"

DyecressTown_Sign_Temple_Text::
# 83 "data/maps/DyecressTown/scripts.pory"
	.string "_e =_o -e_-=an,\ns_-_l r-__=_er __-=e w-- __=_.\p"
	.string "=__ _e w-o p_o_p-=,\n__ -_ =n =-_i- _-c__.\p"
	.string "F__ a-= _-_t =e -o,\n-nd __- t=-= -_ l__k,\p"
	.string "w_'_- =_-__s re__-n;\nFa_t__-.$"

DyecressTown_Sign_Temple_TextFixed::
# 90 "data/maps/DyecressTown/scripts.pory"
	.string "We who remain,\nshall remember those who came.\p"
	.string "For we who prosper,\ndo so on their backs.\p"
	.string "For all that we do,\nand all that we lack,\p"
	.string "we'll always remain;\nFaithful.$"
