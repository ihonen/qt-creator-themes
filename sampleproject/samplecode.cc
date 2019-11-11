#include <iostream>
#include <memory>
#include <vector>
#include <QObject>

#define MY_MACRO(x) (do_stuff(x))

class SomeClass;

namespace
{
    const std::shared_ptr<SomeClass> OTHER_CLASS_PTR = nullptr;
}

/** @brief Super important class that does X, Y and Z. */
class MyClass : public QObject
{
    Q_OBJECT
signals:
    void my_signal(std::vector<SomeClass*>&);
public slots:
    void my_slot();
public:
    MyClass();
    virtual ~MyClass() = default;
private:
    // Super important enum class.
    enum class MyNestedEnumClass {VALUE1, VALUE2, VALUE3};
    int my_member1;
    MyNestedEnumClass my_member2;

    int my_member_function() const
    {
       return my_member1 + static_cast<int>(my_member2);
    }
};

void my_function(int n)
{
    std::string my_str = "";
    switch (n)
    {
        case 0:
            my_str = "n equals 0";
            break;
        case 1:
            my_str = "n equals 1";
            break;
        case 2:
            my_str = "n equals 2";
            break;
        default:
            return;
    }
    std::cout << my_str << std::endl;
}

int main(int argc, char* argv[])
{
    switch (argc)
    {
        default:
            return 0;
    }
}
