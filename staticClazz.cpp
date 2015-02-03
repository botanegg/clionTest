#include "staticClazz.h" //optimize imports delete this line (fixed after reloading CMakeLists.txt)

int staticClazz::_global_num = 0; //OCUnusedGlobalDeclarationInspection

staticClazz::staticClazz() : a(_global_num++) {

}

int staticClazz::getA() const {
    staticClazz tryRenameRefactorThis; //try cancel rename refactor (twice 'esc') too
    //i see 'fun' in popup (press for "fun" :D)
    return a;
}

void staticClazz::nullMethod() {
    staticClazz staticClazz;
}
