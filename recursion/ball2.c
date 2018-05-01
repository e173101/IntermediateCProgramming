/*
 * ball2.c
 * blud & red & green
 * can't take two red balls in a row.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int ball)
{
	if(ball==3)return 2*f(2)+2*f(1);
	if(ball==2)return 8;//b or g :2*f(1) + r:2 
	if(ball==1)return 3;//b or r or g
	return f(ball-1) + f(ball-2);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("please give me a number");
		return EXIT_FAILURE;
	}
	int balls = strtol(argv[1], NULL, 10);
	int ways = f(balls);
	printf("f(%d)=%d\n",balls,ways);
	return EXIT_SUCCESS;
}
