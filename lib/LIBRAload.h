/*
 *
 *    [LIBRARY]    LIBRAload.h
 *    [TOOLKIT]    libra-utils @ libra-utils.org
 *    [LICENSE]    -
 *    [VERSION]    0.1.0
 *     [AUTHOR]    Jesper M. Olsen @ jm0.codes
 *       [DATE]    November 20th 2015
 *
 *    [PURPOSE]    to print "animated" ASCII loading lines
 *
 */

#ifndef IF_LIBRAload
#define IF_LIBRAload

void loading(int mode, char *loadText)
{
	switch (mode)
	{
		case 1:
    		while(1)
    		{ /* 1 - classic spinner, clockwise rotation pattern (/-\|) */
        		printf("\r%s/ ", loadText);
        		usleep(140000);
        		fflush(stdout);

        		printf("\r%s- ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s\\ ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s| ", loadText);
        		usleep(140000);
        		fflush(stdout);
    		}
    	break;
        case 2:
    		while(1)
    		{ /* 2 - sliding three dots from left to right, marquee-style! */
        		printf("\r%s...  ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s ... ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s  .. ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s   . ", loadText);
        		usleep(140000);
        		fflush(stdout);

        		printf("\r%s     ", loadText);
        		usleep(140000);
        		fflush(stdout);

        		printf("\r%s.    ", loadText);
        		usleep(140000);
        		fflush(stdout);

        		printf("\r%s..   ", loadText);
        		usleep(140000);
        		fflush(stdout);
        	}
        break;
        case 3:
    		while(1)
    		{ /* 3 - three dots one at a time, from left to right */
        		printf("\r%s     ", loadText);
        		usleep(300000);
        		fflush(stdout);
        
        		printf("\r%s.    ", loadText);
        		usleep(300000);
        		fflush(stdout);
        
        		printf("\r%s..   ", loadText);
        		usleep(300000);
        		fflush(stdout) ;
        
        		printf("\r%s...  ", loadText);
        		usleep(300000);
        		fflush(stdout);
        	}
        break;
        case 4:
    		while(1)
    		{ /* 4 - baloon animation */
        		printf("\r%s.     ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s o    ", loadText);
        		usleep(140000);
        		fflush(stdout);
        
        		printf("\r%s  O   ", loadText);
        		usleep(140000);
        		fflush(stdout) ;
        
        		printf("\r%s   @  ", loadText);
        		usleep(140000);
        		fflush(stdout);

        		printf("\r%s    * ", loadText);
        		usleep(140000);
        		fflush(stdout);
        	}
        break;
        case 5:
    		while(1)
    		{ /* 5 - python fish! */
        		printf("\r%s>))'>         ", loadText);
        		usleep(300000);
        		fflush(stdout);
        
        		printf("\r%s    >))'>     ", loadText);
        		usleep(300000);
        		fflush(stdout);
        
        		printf("\r%s        >))'> ", loadText);
        		usleep(300000);
        		fflush(stdout) ;
        
        		printf("\r%s    <'((<     ", loadText);
        		usleep(300000);
        		fflush(stdout);

        		printf("\r%s<'((<         ", loadText);
        		usleep(300000);
        		fflush(stdout);
        	}
        break;
        case 6:
    		while(1)
    		{ /* 6 - spinning X */
        		printf("\r%s+ ", loadText);
        		usleep(300000);
        		fflush(stdout);
        
        		printf("\r%sx ", loadText);
        		usleep(300000);
        		fflush(stdout);
        	}
        break;

    }
}

#endif