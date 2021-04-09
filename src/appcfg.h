
#ifndef H_APPCFG
#define H_APPCFG

#include <stdbool.h>

#define APPCFGLOG(...)     do {\
   printf ("[%s:%i] ", __FILE__, __LINE__);\
   printf (__VA_ARGS__);\
} while (0)

#ifdef __cplusplus
extern "C" {
#endif

   bool appcfg_read_cline (int argc, char **argv);

#ifdef __cplusplus
};
#endif

#endif

