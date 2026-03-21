MtScorch_Entrance_MapScripts::
	.byte 0


MtScorch_Entrance_Sign::
# 4 "data/maps/MtScorch_Entrance/scripts.pory"
	msgbox MtScorch_Entrance_Sign_Text_0
	return


MtScorch_Entrance_RichBoy::
# 8 "data/maps/MtScorch_Entrance/scripts.pory"
	trainerbattle_single TRAINER_MT_SCORCH_ENTRANCE_RICH_BOY, MtScorch_Entrance_RichBoy_Text_0, MtScorch_Entrance_RichBoy_Text_1
# 13 "data/maps/MtScorch_Entrance/scripts.pory"
	msgbox MtScorch_Entrance_RichBoy_Text_2, MSGBOX_AUTOCLOSE
	end


MtScorch_Entrance_Sign_Text_0:
# 4 "data/maps/MtScorch_Entrance/scripts.pory"
	.string "Mt Scorch,\nDon't get too hot and bothered.$"

MtScorch_Entrance_RichBoy_Text_0:
# 10 "data/maps/MtScorch_Entrance/scripts.pory"
	.string "My Pokemon is far to valuable to\n"
	.string "actually take up a volcano.$"

MtScorch_Entrance_RichBoy_Text_1:
# 11 "data/maps/MtScorch_Entrance/scripts.pory"
	.string "How dare you...!$"

MtScorch_Entrance_RichBoy_Text_2:
# 13 "data/maps/MtScorch_Entrance/scripts.pory"
	.string "I didn't even want to climb anyway, so\n"
	.string "you've done me a favour.$"
