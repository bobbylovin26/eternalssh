#include <stdio.h>
#include <stdlib.h>


//TODO: Will be options, later
#define TIMEOUT_VALUE 5000
#define PORT_LOCAL_OUT 5234
#define PORT_LOCAL_IN (PORT_LOCAL_OUT+1)
#define PORT_REMOTE 5235



/*******************************************************************
 * Open the SSH master connection, killing every opened connections 
 * first
 *******************************************************************/
int open_master()
{
}

/*******************************************************************
 * Kill any opened connection
 *******************************************************************/
int kill_all_connections()
{
}

/*******************************************************************
 * Send packet through checking tunnel (localhost:PORT_LOCAL_OUT), 
 * check for it on localhost:PORT_LOCAL_IN before timeout          
 *******************************************************************/
int alive_check() 
{

}

int main(int argc, char **argv)
{

}
