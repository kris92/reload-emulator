#include "loderunner.h"
#include "karateka.h"
#include "prodos242.h"
#include "prodos203.h"

uint8_t* apple2_nib_images[] = {
    prodos242_nib_image,
    loderunner_nib_image,
    karateka_nib_image,
};

uint8_t* apple2_po_images[] = {
    prodos203_po_image,
};

uint32_t apple2_po_image_sizes[] = {
    sizeof(prodos203_po_image),
};

char* apple2_msc_images[] = {
//    "Total Replay v5.0.hdv",
};