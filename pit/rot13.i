(10)	PLEASE DON'T GIVE UP
(1)	DO .2 <- '?.1$#64'~'#0$#65535'
	DO .2 <- '&"'.1~.2'~'"?'?.2~.2'$#32768"~"#0$#65535"'"$".2~.2"'~#1
	DO .3 <- '?#91$.1'~'#0$#65535'
	DO .3 <- '&"'#91~.3'~'"?'?.3~.3'$#32768"~"#0$#65535"'"$".3~.3"'~#1
	PLEASE DO (11) NEXT
	PLEASE DO (2) NEXT
	PLEASE DO (12) NEXT
(11)	PLEASE DO (13) NEXT
	PLEASE FORGET #1
	PLEASE DO (12) NEXT
(13)	PLEASE DO (14) NEXT
	PLEASE FORGET #2
	PLEASE DO (12) NEXT
(14)	DO STASH .1
	DO .1 <- .3
	PLEASE DO (1000) NEXT
	DO .1 <- .3
	DO .2 <- #1
	PLEASE DO (1000) NEXT
	DO RETRIEVE .1
	DO RESUME .3
(12)	PLEASE FORGET #1
	DO .2 <- '?.1$#96'~'#0$#65535'
	DO .2 <- '&"'.1~.2'~'"?'?.2~.2'$#32768"~"#0$#65535"'"$".2~.2"'~#1
	DO .3 <- '?#123$.1'~'#0$#65535'
	DO .3 <- '&"'#123~.3'~'"?'?.3~.3'$#32768"~"#0$#65535"'"$".3~.3"'~#1
	PLEASE DO (15) NEXT
	PLEASE DO (3) NEXT
	PLEASE DO (16) NEXT
(15)	PLEASE DO (17) NEXT
	PLEASE FORGET #1
	DO (16) NEXT
(17)	DO (18) NEXT
	DO FORGET #2
	DO (16) NEXT
(18)	DO STASH .1
	DO .1 <- .3
	DO (1000) NEXT
	DO .1 <- .3
	DO .2 <- #1
	DO (1000) NEXT
	DO RETRIEVE .1
	DO RESUME .3
(16)	DO FORGET #1
	DO RESUME #1
(2)	DO .2 <- #65
	DO (1010) NEXT
	DO .1 <- .3
	DO .2 <- #13
	DO (1000) NEXT
	DO STASH .3
	DO .1 <- .3
	DO .2 <- #26
	DO (1040) NEXT
	DO .1 <- .3
	DO (1030) NEXT
	DO .2 <- .3
	DO RETRIEVE .3
	DO .1 <- .3
	DO (1010) NEXT
	DO .1 <- .3
	DO .2 <- #65
	DO (1000) NEXT
	DO .1 <- .3
	DO RESUME #1
(3)	DO .2 <- #97
	DO (1010) NEXT
	DO .1 <- .3
	DO .2 <- #13
	DO (1000) NEXT
	DO STASH .3
	DO .1 <- .3
	DO .2 <- #26
	DO (1040) NEXT
	DO .1 <- .3
	DO (1030) NEXT
	DO .2 <- .3
	DO RETRIEVE .3
	DO .1 <- .3
	DO (1010) NEXT
	DO .1 <- .3
	DO .2 <- #97
	DO (1000) NEXT
	DO .1 <- .3
	DO RESUME #1
	DO COME FROM (10)
	DO .4 <- #0
	DO .5 <- #0
	DO STASH .4 + .5
	DO ,1 <- #1
	DO COME FROM (33)
	DO WRITE IN ,1
	DO .1 <- ,1 SUB #1
	DO (31) NEXT
	PLEASE DO .6 <- #1
	PLEASE DO (34) NEXT
(32)	PLEASE RESUME '?.1$#256'~'#256$#256'
(31)	DO (32) NEXT
	DO FORGET #1
	DO .6 <- #0
	PLEASE DO (34) NEXT
(33)	DON'T GIVE UP
(34)	DO .6 <- "?!6'$#1"~#3
	DO (40) NEXT
	DO GIVE UP
(40)	DO (41) NEXT
	PLEASE FORGET #1
	DO (42) NEXT
(41)	DO RESUME .6
(42)	DO FORGET #1
	DO RETRIEVE .4
	DO .2 <- .4
	DO (1000) NEXT
	DO .4 <- .3~#255
	DO .3 <- .4
	DO STASH .4
	DO .1 <- .3
	DO (1) NEXT
	DO .3 <- !1~#15'$!1~#240'
	DO .3 <- !3~#15'$!3~#240'
	DO .2 <- !3~#15'$!3~#240'
	DO .1 <- .5
	DO (1010) NEXT
	DO .5 <- .2
	DO ,1 SUB #1 <- .3 
	PLEASE READ OUT ,1
	PLEASE RESUME #1