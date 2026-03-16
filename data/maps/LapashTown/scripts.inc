LapashTown_MapScripts::
	.byte 0


LapashTown_Sign_Town::
# 4 "data/maps/LapashTown/scripts.pory"
	msgbox LapashTown_Sign_Town_Text_0, MSGBOX_SIGN
	return


LapashTown_Artist::
# 8 "data/maps/LapashTown/scripts.pory"
	msgbox LapashTown_Artist_Text_0, MSGBOX_NPC
	return


LapashTown_OldWoman::
# 12 "data/maps/LapashTown/scripts.pory"
	msgbox LapashTown_OldWoman_Text, MSGBOX_NPC
	return


LapashTown_Sign_Town_Text_0:
# 4 "data/maps/LapashTown/scripts.pory"
	.string "Lapash Town,\nWere worries are laid to rest.$"

LapashTown_Artist_Text_0:
# 8 "data/maps/LapashTown/scripts.pory"
	.string "The way the ash falls is almost... \nelegant... like a dance...$"

LapashTown_OldWoman_Text::
# 15 "data/maps/LapashTown/scripts.pory"
	.string "There's a superstition that the ash is\ncomprised of those that we've lost, and\l"
	.string "that it's what's left over after they\lascend from the earth they're buried in\lup into the sky.\p"
	.string "Whether you believe it or not is up to\nyou, but it can give some folks a sense\lof closure, so it's worth thinking about.$"
