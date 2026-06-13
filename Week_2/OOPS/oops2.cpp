#include <iostream>
using namespace std;

namespace music {
    class Playable {
    public:
        virtual void play() = 0;
        virtual ~Playable() {}
    };
}

namespace music {
namespace string_instruments {

    class Veena : public Playable {
    public:
        void play() override {
            cout << "Playing Veena" << endl;
        }
    };

}
}

namespace music {
namespace wind {

    class Saxophone : public Playable {
    public:
        void play() override {
            cout << "Playing Saxophone" << endl;
        }
    };

}
}

int main() {
    using namespace music;

    string_instruments::Veena veena;
    veena.play();

    wind::Saxophone saxophone;
    saxophone.play();

    Playable* p;

    p = &veena;
    p->play();

    p = &saxophone;
    p->play();

    return 0;
}