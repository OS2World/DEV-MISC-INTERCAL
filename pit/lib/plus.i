(2000)	PLEASE DO STASH .1 + .2 + .3
	DO .2 <- #1
	DO (2001) NEXT
(2001)	PLEASE FORGET #1
	DO .3 <- "?!1~#1'$#1"~#3
	DO (2002) NEXT
	PLEASE DO .2 <- !2$#1'~'#65535$#1'
	DO .1 <- .1~#65534
	DO (2001) NEXT
(2002)	PLEASE DO (2003) NEXT
	DO RETRIEVE .1
	DO .3 <- .1
	PLEASE DO .1 <- '?.2$.3'~'#0$#65535'
	DO RETRIEVE .2 + .3
	DO RESUME #2
(2003)	DO RESUME .3
