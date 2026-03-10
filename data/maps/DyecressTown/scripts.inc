DyecressTown_MapScripts::
# 2 "data/maps/DyecressTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DyecressTown_OnLoad
	.byte 0


DyecressTown_OnLoad::
# 6 "data/maps/DyecressTown/scripts.pory"
	switch VAR_DYECRESS_MYSTERY_STATE
# 7 "data/maps/DyecressTown/scripts.pory"
	case 0, DyecressTown_OnLoad_2
# 11 "data/maps/DyecressTown/scripts.pory"
	case 1, DyecressTown_OnLoad_3
# 12 "data/maps/DyecressTown/scripts.pory"
	case 2, DyecressTown_OnLoad_3
# 13 "data/maps/DyecressTown/scripts.pory"
	case 3, DyecressTown_OnLoad_3
# 18 "data/maps/DyecressTown/scripts.pory"
	case 4, DyecressTown_OnLoad_4
# 19 "data/maps/DyecressTown/scripts.pory"
	case 5, DyecressTown_OnLoad_4
DyecressTown_OnLoad_4:
# 21 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_B
# 22 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_C
	return

DyecressTown_OnLoad_2:
# 8 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_A
	return

DyecressTown_OnLoad_3:
# 14 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_A
# 15 "data/maps/DyecressTown/scripts.pory"
	setflag FLAG_TEMP_B
	return


DyecressFirstVisit::
# 27 "data/maps/DyecressTown/scripts.pory"
	switch VAR_DYECRESS_MYSTERY_STATE
# 28 "data/maps/DyecressTown/scripts.pory"
	case 0, DyecressFirstVisit_2
# 29 "data/maps/DyecressTown/scripts.pory"
	case 1, DyecressFirstVisit_3
	return

DyecressFirstVisit_2:
# 28 "data/maps/DyecressTown/scripts.pory"
	call DyecressTown_Baltoy_Bait
	return

DyecressFirstVisit_3:
# 29 "data/maps/DyecressTown/scripts.pory"
	call DyecressTown_FirstTempleVisit
	return


DyecressTown_Baltoy_Bait::
# 37 "data/maps/DyecressTown/scripts.pory"
	lock
# 38 "data/maps/DyecressTown/scripts.pory"
	applymovement 14, DyecressTown_Baltoy_Bait_Movement_0
# 39 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/DyecressTown/scripts.pory"
	playse SE_PIN
# 41 "data/maps/DyecressTown/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 42 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/DyecressTown/scripts.pory"
	delay 80
# 44 "data/maps/DyecressTown/scripts.pory"
	applymovement 14, DyecressTown_Baltoy_Bait_Movement_1
# 45 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/DyecressTown/scripts.pory"
	removeobject 14
# 47 "data/maps/DyecressTown/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 1
# 48 "data/maps/DyecressTown/scripts.pory"
	releaseall
	return


DyecressTown_FirstTempleVisit::
# 52 "data/maps/DyecressTown/scripts.pory"
	lock
# 53 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_0
# 54 "data/maps/DyecressTown/scripts.pory"
	playse SE_LEDGE
# 55 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_0
# 57 "data/maps/DyecressTown/scripts.pory"
	playse SE_LEDGE
# 58 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_1
# 60 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/DyecressTown/scripts.pory"
	delay 60
# 62 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_2
# 63 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_3
# 65 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_4
# 66 "data/maps/DyecressTown/scripts.pory"
	waitmovement 15
# 67 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_5
# 68 "data/maps/DyecressTown/scripts.pory"
	waitmovement 10
# 70 "data/maps/DyecressTown/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 71 "data/maps/DyecressTown/scripts.pory"
	compare VAR_TEMP_A, 19
	goto_if_eq DyecressTown_FirstTempleVisit_2
# 73 "data/maps/DyecressTown/scripts.pory"
	compare VAR_TEMP_A, 21
	goto_if_eq DyecressTown_FirstTempleVisit_3
# 75 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_8
DyecressTown_FirstTempleVisit_1:
# 76 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_MysteryText_Start, MSGBOX_NPC
# 80 "data/maps/DyecressTown/scripts.pory"
	compare VAR_TEMP_A, 19
	goto_if_eq DyecressTown_FirstTempleVisit_8
# 82 "data/maps/DyecressTown/scripts.pory"
	compare VAR_TEMP_A, 21
	goto_if_eq DyecressTown_FirstTempleVisit_9
# 84 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_1
DyecressTown_FirstTempleVisit_7:
# 85 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_10
# 88 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/DyecressTown/scripts.pory"
	applymovement 15, DyecressTown_FirstTempleVisit_Movement_6
# 90 "data/maps/DyecressTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/DyecressTown/scripts.pory"
	setvar VAR_DYECRESS_MYSTERY_STATE, 2
# 92 "data/maps/DyecressTown/scripts.pory"
	releaseall
	return

DyecressTown_FirstTempleVisit_2:
# 72 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_6
	goto DyecressTown_FirstTempleVisit_1

DyecressTown_FirstTempleVisit_3:
# 74 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_7
	goto DyecressTown_FirstTempleVisit_1

DyecressTown_FirstTempleVisit_8:
# 81 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_3
	goto DyecressTown_FirstTempleVisit_7

DyecressTown_FirstTempleVisit_9:
# 83 "data/maps/DyecressTown/scripts.pory"
	applymovement 10, DyecressTown_FirstTempleVisit_Movement_9
	goto DyecressTown_FirstTempleVisit_7


DyecressTown_Spenser::
# 96 "data/maps/DyecressTown/scripts.pory"
	lockall
# 97 "data/maps/DyecressTown/scripts.pory"
	switch VAR_DYECRESS_MYSTERY_STATE
# 98 "data/maps/DyecressTown/scripts.pory"
	case 0, DyecressTown_Spenser_3
# 99 "data/maps/DyecressTown/scripts.pory"
	case 1, DyecressTown_Spenser_3
# 100 "data/maps/DyecressTown/scripts.pory"
	case 2, DyecressTown_Spenser_3
DyecressTown_Spenser_1:
# 106 "data/maps/DyecressTown/scripts.pory"
	releaseall
	return

DyecressTown_Spenser_3:
# 101 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Spenser_Text_0, MSGBOX_NPC
	goto DyecressTown_Spenser_1


DyecressTown_Sign::
# 126 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign2::
# 130 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign2_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign3::
# 134 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign3_Text_0, MSGBOX_SIGN
	return


DyecressTown_Sign_Temple::
# 138 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Temple_Text_0, MSGBOX_YESNO
# 139 "data/maps/DyecressTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DyecressTown_Sign_Temple_1
# 141 "data/maps/DyecressTown/scripts.pory"
	closemessage
	return

DyecressTown_Sign_Temple_1:
# 140 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Sign_Temple_Text, MSGBOX_SIGN
	return


DyecressTown_OldMan::
# 159 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_OldMan_Text_0, MSGBOX_NPC
	return


DyecressTown_OldWoman::
# 163 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_OldWoman_Text_0, MSGBOX_NPC
	return


DyecressTown_Woman::
# 167 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Woman_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist1::
# 171 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist1_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist2::
# 175 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist2_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist3::
# 179 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist3_Text_0, MSGBOX_NPC
	return


DyecressTown_Scientist4::
# 183 "data/maps/DyecressTown/scripts.pory"
	msgbox DyecressTown_Scientist4_Text_0, MSGBOX_NPC
	return


# 38 "data/maps/DyecressTown/scripts.pory"
DyecressTown_Baltoy_Bait_Movement_0:
# 38 "data/maps/DyecressTown/scripts.pory"
	face_left
	step_end

# 44 "data/maps/DyecressTown/scripts.pory"
DyecressTown_Baltoy_Bait_Movement_1:
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_left
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
# 44 "data/maps/DyecressTown/scripts.pory"
	walk_fast_up
	step_end

# 53 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_0:
# 53 "data/maps/DyecressTown/scripts.pory"
	jump_in_place_down
	step_end

# 59 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_1:
# 59 "data/maps/DyecressTown/scripts.pory"
	face_up
	step_end

# 62 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_2:
# 62 "data/maps/DyecressTown/scripts.pory"
	face_left
# 62 "data/maps/DyecressTown/scripts.pory"
	lock_facing_direction
	step_end

# 64 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_3:
# 64 "data/maps/DyecressTown/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_4:
# 65 "data/maps/DyecressTown/scripts.pory"
	walk_down
# 65 "data/maps/DyecressTown/scripts.pory"
	walk_down
# 65 "data/maps/DyecressTown/scripts.pory"
	walk_down
# 65 "data/maps/DyecressTown/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_5:
# 67 "data/maps/DyecressTown/scripts.pory"
	unlock_facing_direction
# 67 "data/maps/DyecressTown/scripts.pory"
	face_down
	step_end

# 72 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_6:
# 72 "data/maps/DyecressTown/scripts.pory"
	walk_left
# 72 "data/maps/DyecressTown/scripts.pory"
	face_down
	step_end

# 74 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_7:
# 74 "data/maps/DyecressTown/scripts.pory"
	walk_right
# 74 "data/maps/DyecressTown/scripts.pory"
	face_down
	step_end

# 75 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_8:
# 75 "data/maps/DyecressTown/scripts.pory"
	face_down
	step_end

# 83 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_9:
# 83 "data/maps/DyecressTown/scripts.pory"
	walk_left
	step_end

# 87 "data/maps/DyecressTown/scripts.pory"
DyecressTown_FirstTempleVisit_Movement_10:
# 87 "data/maps/DyecressTown/scripts.pory"
	walk_up
# 87 "data/maps/DyecressTown/scripts.pory"
	walk_up
# 87 "data/maps/DyecressTown/scripts.pory"
	walk_up
# 87 "data/maps/DyecressTown/scripts.pory"
	walk_up
	step_end

DyecressTown_Spenser_Text_0:
# 101 "data/maps/DyecressTown/scripts.pory"
	.string "I hope the researchers from Libra\n"
	.string "Institute can help us uncover the\l"
	.string "origin of our town.$"

DyecressTown_Sign_Text_0:
# 126 "data/maps/DyecressTown/scripts.pory"
	.string "Dyecress Town,\nA heritage overlooking the sea.$"

DyecressTown_Sign2_Text_0:
# 130 "data/maps/DyecressTown/scripts.pory"
	.string "Simon's House.$"

DyecressTown_Sign3_Text_0:
# 134 "data/maps/DyecressTown/scripts.pory"
	.string "Herb Shop.\nA healthy alternative!$"

DyecressTown_Sign_Temple_Text_0:
# 138 "data/maps/DyecressTown/scripts.pory"
	.string "The words seem to have\neroded over time...\pDo you want to try reading it anyway?$"

DyecressTown_OldMan_Text_0:
# 159 "data/maps/DyecressTown/scripts.pory"
	.string "Dyecress Town used to be a medical hub\n"
	.string "for the region. While many of its roots\l"
	.string "have been lost to time, the culture of\l"
	.string "growing medicinal plants remains.$"

DyecressTown_OldWoman_Text_0:
# 163 "data/maps/DyecressTown/scripts.pory"
	.string "While these days many travel looking\n"
	.string "for the big city, this town and its\l"
	.string "residents have remained faithful to\l"
	.string "their long history.$"

DyecressTown_Woman_Text_0:
# 167 "data/maps/DyecressTown/scripts.pory"
	.string "Most of the flowering plants here can\n"
	.string "be used for medicine, and the petals\l"
	.string "can also make wonderful pigments.$"

DyecressTown_Scientist1_Text_0:
# 171 "data/maps/DyecressTown/scripts.pory"
	.string "I'm wondering if these bizarre pillars\n"
	.string "have some sort of purpose.$"

DyecressTown_Scientist2_Text_0:
# 175 "data/maps/DyecressTown/scripts.pory"
	.string "You can really feel the town's history\n"
	.string "just by being here.$"

DyecressTown_Scientist3_Text_0:
# 179 "data/maps/DyecressTown/scripts.pory"
	.string "The archway seems quite old, yet it's\n"
	.string "like it hasn't aged a day since it was\l"
	.string "built.$"

DyecressTown_Scientist4_Text_0:
# 183 "data/maps/DyecressTown/scripts.pory"
	.string "The text on this sign is much too\n"
	.string "degraded to be read, so we're using a\l"
	.string "new method to try and gather more\l"
	.string "clues.$"

DyecressTown_MysteryText_Start::
# 109 "data/maps/DyecressTown/scripts.pory"
	.string "You're a new face around here,\nmy Baltoy is a little skittish around\lnew folks so don't mind it.\p"
	.string "You look like you've just started\nout on a Pokemon adventure of your own.\p"
	.string "It's nice of you to pop into our\ntown here, but I can't imagine there\lis much here that you would want to see.\p"
	.string "Most of the younger folks here\nhave already left for the city,\lso you're probably not going to find\lany exciting battles here.\p"
	.string "...\p"
	.string "Hmm...\p"
	.string "You may not find any battling here,\nbut every proper Pokemon adventure is\lin need of some quests right?\p"
	.string "I've been researching the history\nof the town for decades,\lbut time is catching up to me.\p"
	.string "As I don't have anyone to continue\nafter I'm gone, I would at least like\lto see how much progress can be made\lbefore my time is up.\p"
	.string "I've heard tell that the upstart folks\nin the city have found new ways of\luncovering and deciphering lost text.\p"
	.string "I'm no longer the man I was in my youth,\nso I'm unable to make the trip myself,\lso could you do an old soul a favour?\p"
	.string "I would appreciate you sending word to\nLibra Institute in Springwood City,\lrequesting someone to finally unravel\lthe history of our town.\p"
	.string "I'm sure I have some type of artifact\nlying around that could make it worth\lyour time and effort.$"

DyecressTown_Sign_Temple_Text::
# 144 "data/maps/DyecressTown/scripts.pory"
	.string "_e =_o -e_-=an,\ns_-_l r-__=_er __-=e w-- __=_.\p"
	.string "=__ _e w-o p_o_p-=,\n__ -_ =n =-_i- _-c__.\p"
	.string "F__ a-= _-_t =e -o,\n-nd __- t=-= -_ l__k,\p"
	.string "w_'_- =_-__s re__-n;\nFa_t__-.$"

DyecressTown_Sign_Temple_TextFixed::
# 151 "data/maps/DyecressTown/scripts.pory"
	.string "We who remain,\nshall remember those who came.\p"
	.string "For we who prosper,\ndo so on their backs.\p"
	.string "For all that we do,\nand all that we lack,\p"
	.string "we'll always remain;\nFaithful.$"
