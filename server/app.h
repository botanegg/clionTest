#ifndef _SERVER_APP_H_
#define _SERVER_APP_H_

class App {
public:
    static App &instance();

protected:
private:
    App(); /// run quick-fix it (build fail)

    ~App(); /// run quick-fix it (build fail)

    App(const App &_rhs); /// run quick-fix it (build fail)

    App &operator=(const App &_rhs);
};

#endif /* _SERVER_APP_H_ */