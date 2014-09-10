#include "staticClazz.h" //optimize imports delete this line

int staticClazz::_global_num = 0; //OCUnusedGlobalDeclarationInspection

staticClazz::staticClazz() : a(_global_num++) {

}

int staticClazz::getA() const {
    return a;
}