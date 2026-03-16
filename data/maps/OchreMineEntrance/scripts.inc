OchreMineEntrance_MapScripts::
	.byte 0


OchreMineEntrance_Hiker::
# 4 "data/maps/OchreMineEntrance/scripts.pory"
	lockall
# 5 "data/maps/OchreMineEntrance/scripts.pory"
	msgbox OchreMineEntrance_Hiker_Text_0, MSGBOX_NPC
# 6 "data/maps/OchreMineEntrance/scripts.pory"
	releaseall
	return


OchreMineEntrance_AquaGrunt::
# 10 "data/maps/OchreMineEntrance/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_MINE_ENTRANCE_AQUA_GRUNT, OchreMineEntrance_AquaGrunt_Text_0, OchreMineEntrance_AquaGrunt_Text_1
# 15 "data/maps/OchreMineEntrance/scripts.pory"
	msgbox OchreMineEntrance_AquaGrunt_Text_2, MSGBOX_AUTOCLOSE
	end


OchreMineEntrance_Hiker_Text_0:
# 5 "data/maps/OchreMineEntrance/scripts.pory"
	.string "I used to work in the mine, but ever\n"
	.string "since the nerds showed up I've all but\l"
	.string "lost my job.$"

OchreMineEntrance_AquaGrunt_Text_0:
# 12 "data/maps/OchreMineEntrance/scripts.pory"
	.string "Hey! What are you looking at?$"

OchreMineEntrance_AquaGrunt_Text_1:
# 13 "data/maps/OchreMineEntrance/scripts.pory"
	.string "I didn't really want to battle you, but\n"
	.string "I'm contractually obligated to.$"

OchreMineEntrance_AquaGrunt_Text_2:
# 15 "data/maps/OchreMineEntrance/scripts.pory"
	.string "I was told to come here to stop the\n"
	.string "researchers from doing whatever it is\l"
	.string "that they're doing, but I'm not really up\l"
	.string "to it. I know most of these guys...$"
