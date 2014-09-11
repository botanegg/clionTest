#include "app.h"

App &App::instance() {
    static App singleton;
    return singleton;
}