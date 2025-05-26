#include <memory>

#include "wopl/wopl_file.h"

#if __cplusplus >= 201103L

#include <memory>
struct WOPLFile_Deleter
{
    void operator()(WOPLFile *file) const
        { WOPL_Free(file); }
};
typedef std::unique_ptr<WOPLFile, WOPLFile_Deleter> WOPLFile_Ptr;

#endif
