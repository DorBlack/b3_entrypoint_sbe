/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_EXECTYPE_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_EXECTYPE_CXX_H_

#if !defined(__STDC_LIMIT_MACROS)
#  define __STDC_LIMIT_MACROS 1
#endif

#include <cstdint>
#include <iomanip>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <sstream>
#include <string>

#define SBE_NULLVALUE_INT8 (std::numeric_limits<std::int8_t>::min)()
#define SBE_NULLVALUE_INT16 (std::numeric_limits<std::int16_t>::min)()
#define SBE_NULLVALUE_INT32 (std::numeric_limits<std::int32_t>::min)()
#define SBE_NULLVALUE_INT64 (std::numeric_limits<std::int64_t>::min)()
#define SBE_NULLVALUE_UINT8 (std::numeric_limits<std::uint8_t>::max)()
#define SBE_NULLVALUE_UINT16 (std::numeric_limits<std::uint16_t>::max)()
#define SBE_NULLVALUE_UINT32 (std::numeric_limits<std::uint32_t>::max)()
#define SBE_NULLVALUE_UINT64 (std::numeric_limits<std::uint64_t>::max)()

namespace b3 {
namespace entrypoint {
namespace fixp {
namespace sbe {

class ExecType
{
public:
    enum Value
    {
        TRADE = static_cast<char>(70),
        TRADE_CANCEL = static_cast<char>(72),
        NULL_VALUE = static_cast<char>(0)
    };

    static ExecType::Value get(const char value)
    {
        switch (value)
        {
            case static_cast<char>(70): return TRADE;
            case static_cast<char>(72): return TRADE_CANCEL;
            case static_cast<char>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum ExecType [E103]");
    }

    static const char *c_str(const ExecType::Value value)
    {
        switch (value)
        {
            case TRADE: return "TRADE";
            case TRADE_CANCEL: return "TRADE_CANCEL";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum ExecType [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, ExecType::Value m)
    {
        return os << ExecType::c_str(m);
    }
};

}
}
}
}

#endif
