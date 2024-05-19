#include <stdio.h>
#include <unistd.h>
int main() {
 // Check and display _POSIX_VERSION constant
 printf("_POSIX_VERSION constant: %ld\n", _POSIX_VERSION);
 // Print POSIX defined configuration options supported on the system
#ifdef _POSIX_ASYNCHRONOUS_IO
 printf("POSIX Asynchronous I/O supported\n");
#endif
#ifdef _POSIX_BARRIERS
 printf("POSIX Barriers supported\n");
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
 printf("POSIX Chown Restricted supported\n");
#endif
#ifdef _POSIX_CLOCK_SELECTION
 printf("POSIX Clock Selection supported\n");
#endif
#ifdef _POSIX_CPUTIME
 printf("POSIX CPU Time supported\n");
#endif
#ifdef _POSIX_FSYNC
 printf("POSIX Fsync supported\n");
#endif
#ifdef _POSIX_IPV6
 printf("POSIX IPv6 supported\n");
#endif
return 0;
}
