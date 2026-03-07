OchreVale_MapScripts::
# 2 "data/maps/OchreVale/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OchreVale_OnLoad
	.byte 0


OchreVale_OnLoad::
# 6 "data/maps/OchreVale/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, OchreVale_OnLoad_1
	return

OchreVale_OnLoad_1:
# 7 "data/maps/OchreVale/scripts.pory"
	setmetatile 18, 37, METATILE_Fallarbor_RedRockWall, TRUE
# 8 "data/maps/OchreVale/scripts.pory"
	setmetatile 18, 36, METATILE_Fallarbor_RedRockWall, TRUE
	return


OchreVale_OldWoman::
# 13 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_OldWoman_Text_0, MSGBOX_NPC
	return


OchreVale_Scientist::
# 17 "data/maps/OchreVale/scripts.pory"
	goto_if_set FLAG_CLEARED_OCHRE_VALE_MINE, OchreVale_Scientist_1
# 20 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Scientist_Text_1, MSGBOX_NPC
	return

OchreVale_Scientist_1:
# 18 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Scientist_Text_0, MSGBOX_NPC
	return


OchreVale_Man::
# 25 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Man_Text_0, MSGBOX_NPC
	return


OchreVale_Youngster::
# 29 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_Youngster_Text_0, MSGBOX_NPC
	return


OchreVale_MagmaGrunt::
# 33 "data/maps/OchreVale/scripts.pory"
	lockall
# 34 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_MagmaGrunt_Text_0, MSGBOX_NPC
# 35 "data/maps/OchreVale/scripts.pory"
	applymovement 15, OchreVale_MagmaGrunt_Movement_0
# 36 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 37 "data/maps/OchreVale/scripts.pory"
	releaseall
	return


OchreVale_MagmaGruntF::
# 41 "data/maps/OchreVale/scripts.pory"
	lockall
# 42 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_MagmaGruntF_Text_0
# 43 "data/maps/OchreVale/scripts.pory"
	playse SE_PIN
# 44 "data/maps/OchreVale/scripts.pory"
	applymovement 13, OchreVale_MagmaGruntF_Movement_0
# 45 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 46 "data/maps/OchreVale/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 47 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 48 "data/maps/OchreVale/scripts.pory"
	applymovement 13, Common_Movement_Delay48
# 49 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 50 "data/maps/OchreVale/scripts.pory"
	msgbox OchreVale_MagmaGruntF_Text_1
# 51 "data/maps/OchreVale/scripts.pory"
	applymovement 13, OchreVale_MagmaGruntF_Movement_1
# 52 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 53 "data/maps/OchreVale/scripts.pory"
	releaseall
	return


OchreVale_Numel::
# 57 "data/maps/OchreVale/scripts.pory"
	lockall
# 58 "data/maps/OchreVale/scripts.pory"
	applymovement 14, OchreVale_MagmaGruntF_Movement_0
# 59 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 60 "data/maps/OchreVale/scripts.pory"
	playmoncry SPECIES_NUMEL, CRY_MODE_NORMAL
# 61 "data/maps/OchreVale/scripts.pory"
	waitmoncry
# 62 "data/maps/OchreVale/scripts.pory"
	delay 48
# 63 "data/maps/OchreVale/scripts.pory"
	applymovement 14, OchreVale_Numel_Movement_0
# 64 "data/maps/OchreVale/scripts.pory"
	setseenmon SPECIES_NUMEL
# 65 "data/maps/OchreVale/scripts.pory"
	waitmovement 0
# 66 "data/maps/OchreVale/scripts.pory"
	releaseall
	return


# 35 "data/maps/OchreVale/scripts.pory"
OchreVale_MagmaGrunt_Movement_0:
# 35 "data/maps/OchreVale/scripts.pory"
	face_up
	step_end

# 44 "data/maps/OchreVale/scripts.pory"
OchreVale_MagmaGruntF_Movement_0:
# 44 "data/maps/OchreVale/scripts.pory"
	face_player
	step_end

# 51 "data/maps/OchreVale/scripts.pory"
OchreVale_MagmaGruntF_Movement_1:
# 51 "data/maps/OchreVale/scripts.pory"
	face_left
	step_end

# 63 "data/maps/OchreVale/scripts.pory"
OchreVale_Numel_Movement_0:
# 63 "data/maps/OchreVale/scripts.pory"
	face_right
	step_end

OchreVale_OldWoman_Text_0:
# 13 "data/maps/OchreVale/scripts.pory"
	.string "Ochre Vale is home to a large quarry,\n"
	.string "not that much digging is done there\l"
	.string "anymore.$"

OchreVale_Scientist_Text_0:
# 18 "data/maps/OchreVale/scripts.pory"
	.string "The entrance to the mine is just left of\n"
	.string "here, it might not be that easy to\l"
	.string "navigate inside but people still go\l"
	.string "there now that the main quarrying has\l"
	.string "stopped.$"

OchreVale_Scientist_Text_1:
# 20 "data/maps/OchreVale/scripts.pory"
	.string "We've been having a bit of trouble with\n"
	.string "Team Magma in Ochre Vale Mine recently,\l"
	.string "I'm not sure why they've decided to do\l"
	.string "this.$"

OchreVale_Man_Text_0:
# 25 "data/maps/OchreVale/scripts.pory"
	.string "While I'm glad the noise from the mining\n"
	.string "has ceased, I do miss the economic\l"
	.string "growth that came with it.$"

OchreVale_Youngster_Text_0:
# 29 "data/maps/OchreVale/scripts.pory"
	.string "The dirt down here is really brown!$"

OchreVale_MagmaGrunt_Text_0:
# 34 "data/maps/OchreVale/scripts.pory"
	.string "Huh? I'm not doing anything suspicious!\n"
	.string "Shut up!$"

OchreVale_MagmaGruntF_Text_0:
# 42 "data/maps/OchreVale/scripts.pory"
	.string "Awww! Who's a good little Numel?$"

OchreVale_MagmaGruntF_Text_1:
# 50 "data/maps/OchreVale/scripts.pory"
	.string "Do you mind?\nI'm playing with my Numel!\pWhat?\pI'm not causing any trouble!\nCan't a girl hang out with her Numel\lin peace?$"
