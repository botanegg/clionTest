#ifndef _CLIENT_APP_H_
#define _CLIENT_APP_H_

class App {
public:
    static App &instance();

protected:
private:
    App();

    ~App();

    App(const App &_rhs);

    App &operator=(const App &_rhs);
};

#endif /* _CLIENT_APP_H_ */