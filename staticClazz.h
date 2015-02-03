class staticClazz {
private:
    static int _global_num;  //OCUnusedGlobalDeclarationInspection Field '_global_num' is never used (fixed after reloading CMakeLists.txt)
    //Safe delete work!!

    int a; //OCUnusedGlobalDeclarationInspection  Field 'a' is never used (fixed after reloading CMakeLists.txt)
    //Safe delete work!!
public:
    int getA() const;

    staticClazz();

    void nullMethod();
};