Route8_MapScripts::
	.byte 0


Route8_Picnicker::
# 4 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_PICNICKER, Route8_Picnicker_Text_0, Route8_Picnicker_Text_1
# 9 "data/maps/Route8/scripts.pory"
	msgbox Route8_Picnicker_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Collector::
# 14 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_COLLECTOR, Route8_Collector_Text_0, Route8_Collector_Text_1
# 19 "data/maps/Route8/scripts.pory"
	msgbox Route8_Collector_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Twins1::
# 24 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_ROUTE8_TWINS, Route8_Twins1_Text_0, Route8_Twins1_Text_1, Route8_Twins1_Text_2
# 30 "data/maps/Route8/scripts.pory"
	msgbox Route8_Twins1_Text_3, MSGBOX_AUTOCLOSE
	end


Route8_Twins2::
# 35 "data/maps/Route8/scripts.pory"
	trainerbattle_double TRAINER_ROUTE8_TWINS, Route8_Twins2_Text_0, Route8_Twins2_Text_1, Route8_Twins2_Text_2
# 41 "data/maps/Route8/scripts.pory"
	msgbox Route8_Twins2_Text_3, MSGBOX_AUTOCLOSE
	end


Route8_BlackBelt::
# 46 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_BLACKBELT, Route8_BlackBelt_Text_0, Route8_BlackBelt_Text_1
# 51 "data/maps/Route8/scripts.pory"
	msgbox Route8_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


Route8_Sign::
# 56 "data/maps/Route8/scripts.pory"
	lockall
# 57 "data/maps/Route8/scripts.pory"
	msgbox Route8_Sign_Text_0, MSGBOX_SIGN
# 58 "data/maps/Route8/scripts.pory"
	releaseall
	return


Route8_Picnicker_Text_0:
# 6 "data/maps/Route8/scripts.pory"
	.string "The ocean cliffs here are beautiful!$"

Route8_Picnicker_Text_1:
# 7 "data/maps/Route8/scripts.pory"
	.string "I shall look out over the sea and forget\n"
	.string "all about this.$"

Route8_Picnicker_Text_2:
# 9 "data/maps/Route8/scripts.pory"
	.string "The trail gets a bit technical around\n"
	.string "here.$"

Route8_Collector_Text_0:
# 16 "data/maps/Route8/scripts.pory"
	.string "I like to find rare Pokemon.$"

Route8_Collector_Text_1:
# 17 "data/maps/Route8/scripts.pory"
	.string "I thought having the rarest Pokemon\n"
	.string "made me the best Trainer.$"

Route8_Collector_Text_2:
# 19 "data/maps/Route8/scripts.pory"
	.string "Collectors like me enjoy finding the\n"
	.string "rarest Pokemon to fill out our teams\l"
	.string "with.$"

Route8_Twins1_Text_0:
# 26 "data/maps/Route8/scripts.pory"
	.string "We like to play on the cliffs edge!$"

Route8_Twins1_Text_1:
# 27 "data/maps/Route8/scripts.pory"
	.string "We're careful to not fall...$"

Route8_Twins1_Text_2:
# 28 "data/maps/Route8/scripts.pory"
	.string "Huh? Do you only have one Pokemon?\nLame!$"

Route8_Twins1_Text_3:
# 30 "data/maps/Route8/scripts.pory"
	.string "It's fun to play here, but the grown ups\n"
	.string "don't like it when we get near the\l"
	.string "cliffs...$"

Route8_Twins2_Text_0:
# 37 "data/maps/Route8/scripts.pory"
	.string "I bet our Pokemon are\nstronger than your Pokemon!$"

Route8_Twins2_Text_1:
# 38 "data/maps/Route8/scripts.pory"
	.string "I bet our Dad is stronger\nthan your Dad...$"

Route8_Twins2_Text_2:
# 39 "data/maps/Route8/scripts.pory"
	.string "Huh? Do you only have one Pokemon?\nCringe!$"

Route8_Twins2_Text_3:
# 41 "data/maps/Route8/scripts.pory"
	.string "Mum says that we used to have a big\n"
	.string "brother.$"

Route8_BlackBelt_Text_0:
# 48 "data/maps/Route8/scripts.pory"
	.string "THE SALT SPRAY ENCHANCES MY WORKOUT!$"

Route8_BlackBelt_Text_1:
# 49 "data/maps/Route8/scripts.pory"
	.string "NO! MY MUSCLES! YOU CAN'T FAIL ME NOW!$"

Route8_BlackBelt_Text_2:
# 51 "data/maps/Route8/scripts.pory"
	.string "The pain from getting salt water in my\n"
	.string "scratches makes me feel like I'm a\l"
	.string "protagonist going through a struggle.$"

Route8_Sign_Text_0:
# 57 "data/maps/Route8/scripts.pory"
	.string "Don't fall off.\nPlease.$"
