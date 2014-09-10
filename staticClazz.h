class staticClazz {
private:
    static int _global_num;  //OCUnusedGlobalDeclarationInspection Field '_global_num' is never used
    //Safe delete work!!

    int a; //OCUnusedGlobalDeclarationInspection  Field 'a' is never used
    //Safe delete work!!
public:
    int getA() const;

    staticClazz();
};