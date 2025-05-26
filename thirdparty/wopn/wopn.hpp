#include <memory>

#include "wopn/wopn_file.h"

#if __cplusplus >= 201103L

#include <memory>
struct WOPNFile_Deleter
{
    void operator()(WOPNFile *file) const
        { WOPN_Free(file); }
};
typedef std::unique_ptr<WOPNFile, WOPNFile_Deleter> WOPNFile_Ptr;

#endif
