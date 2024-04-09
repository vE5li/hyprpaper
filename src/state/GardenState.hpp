#pragma once

class SGardenState {
public:
    SGardenState();
    ~SGardenState();

    void update();

    bool needsReload = false;

// private:
    int m_leftOffset = 0;
};
