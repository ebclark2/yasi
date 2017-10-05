#include <string>
#include <vector>

namespace yasi {

class tuple {
public:
    void set_value(std::string new_value);
    std::string const& get_value() const;
private:
    std::string value;
};

}
