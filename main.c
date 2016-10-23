#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		struct sockaddr_un addr ;
		in t srv_fd , c l i _ f d ;
		s size _ t bytes ;
		char buf [ BUFFSIZE ] ;
		i f ( ( srv_ fd = socket ( AF_UNIX , SOCK_STREAM, 0 ) ) < 0)
		err_sys ( " socket error " ) ;
		memset(&addr , 0 , sizeof ( struct sockaddr_un ) ) ;
		addr . sun_family = AF_UNIX ;
		strncpy ( addr . sun_path , SRV_SOCK_PATH ,
		sizeof ( addr . sun_path ) - 1 ) ;
		i f ( access ( addr . sun_path , F_OK ) == 0)
		unlink ( addr . sun_path ) ;
		i f ( bind ( srv_fd , ( struct sockaddr * ) &addr ,
		sizeof ( struct sockaddr_un ) ) < 0)
		err_sys ( " bind error " ) ;
		
		
}
