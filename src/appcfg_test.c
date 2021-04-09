
#include <stdio.h>
#include <stdlib.h>

#include "appcfg.h"

int main (int argc, char **argv)
{
   int ret = EXIT_FAILURE;

   if (!(appcfg_read_cline (argc, argv))) {
      APPCFGLOG ("Failed to read the command line\n");
      goto errorexit;
   }

   ret = EXIT_SUCCESS;
errorexit:

   return ret;
}
