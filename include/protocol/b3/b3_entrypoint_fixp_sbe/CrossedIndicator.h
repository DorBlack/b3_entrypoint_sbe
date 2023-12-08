/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_CROSSEDINDICATOR_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_CROSSEDINDICATOR_CXX_H_

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

class CrossedIndicator
{
public:
    enum Value
    {
        STRUCTURED_TRANSACTION = static_cast<std::uint16_t>(1001),
        OPERATIONAL_ERROR = static_cast<std::uint16_t>(1002),
        TWAP_VWAP = static_cast<std::uint16_t>(1003),
        NULL_VALUE = static_cast<std::uint16_t>(0)
    };

    static CrossedIndicator::Value get(const std::uint16_t value)
    {
        switch (value)
        {
            case static_cast<std::uint16_t>(1001): return STRUCTURED_TRANSACTION;
            case static_cast<std::uint16_t>(1002): return OPERATIONAL_ERROR;
            case static_cast<std::uint16_t>(1003): return TWAP_VWAP;
            case static_cast<std::uint16_t>(0): return NULL_VALUE;
        }

        throw std::runtime_error("unknown value for enum CrossedIndicator [E103]");
    }

    static const char *c_str(const CrossedIndicator::Value value)
    {
        switch (value)
        {
            case STRUCTURED_TRANSACTION: return "STRUCTURED_TRANSACTION";
            case OPERATIONAL_ERROR: return "OPERATIONAL_ERROR";
            case TWAP_VWAP: return "TWAP_VWAP";
            case NULL_VALUE: return "NULL_VALUE";
        }

        throw std::runtime_error("unknown value for enum CrossedIndicator [E103]:");
    }

    template<typename CharT, typename Traits>
    friend std::basic_ostream<CharT, Traits> & operator << (
        std::basic_ostream<CharT, Traits> &os, CrossedIndicator::Value m)
    {
        return os << CrossedIndicator::c_str(m);
    }
};

}
}
}
}

#endif
