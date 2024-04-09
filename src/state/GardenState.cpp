#include "GardenState.hpp"

#include "../Hyprpaper.hpp"

SGardenState::SGardenState() {
    Debug::log(LOG, "Garden was created");
}

SGardenState::~SGardenState() {
}

void SGardenState::update() {
    Debug::log(LOG, "Garden was updated");
    m_leftOffset += 5;
    needsReload = true;
}
