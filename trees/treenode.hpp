#include <vector>
using namespace std;


// / @brief 
// / @tparam T 
template <typename T>
class treenode{

public:
    T data;
    vector<treenode<T>*> children;
    treenode(T data)
    {
        this->data = data;
    }
};