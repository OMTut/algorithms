#ifndef TPREMOVE_DUPES_H
#define TPREMOVE_DUPES_H

#include <vector>
#include <string>

using namespace std;

class TPRemove_Dupes {
    private:
        vector<int> data;
    public:
        TPRemove_Dupes(const vector<int>& data);
        int removeDupes();
};

#endif //TPREMOVE_DUPES_H