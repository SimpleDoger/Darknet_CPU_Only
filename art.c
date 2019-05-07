#include "darknet.h"

#include <sys/time.h>

void demo_art(char *cfgfile, char *weightfile, int cam_index)
{
}


void run_art(int argc, char **argv)
{
    int cam_index = find_int_arg(argc, argv, "-c", 0);
    char *cfg = argv[2];
    char *weights = argv[3];
    demo_art(cfg, weights, cam_index);
}

