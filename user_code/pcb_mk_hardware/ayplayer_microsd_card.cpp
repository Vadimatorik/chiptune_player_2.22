#include "ayplayer_microsd_card.h"

microsd_spi_cfg_t microsd_card_cfg = {
    .cs         = &sd2_cs_pin_obj,
    .p_spi_slow = &spi2_slow_obj,
    .p_spi_fast = &spi2_fast_obj
};

microsd_spi sd2( &microsd_card_cfg );
