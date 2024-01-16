#include <string>

using namespace std;

class Weapon{
public:
    Weapon();
    ~Weapon();
    const string& getType();
    void setType(string type);
private:
    string type;
};