#include "ayplayer_core_struct.h"

void ayplayer_state::play_state_set ( EC_AY_PLAY_STATE state ) {
    this->play_state = state;
}

EC_AY_PLAY_STATE ayplayer_state::play_state_get ( void ) {
    return this->play_state;
}

void ayplayer_state::active_window_set ( EC_AY_ACTIVE_WINDOW win ) {
    this->active_window = win;
}

EC_AY_ACTIVE_WINDOW ayplayer_state::active_window_get ( void ) {
    return this->active_window;
}
