/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _B3_ENTRYPOINT_FIXP_SBE_ORDERMASSACTIONREQUEST_CXX_H_
#define _B3_ENTRYPOINT_FIXP_SBE_ORDERMASSACTIONREQUEST_CXX_H_

#if defined(SBE_HAVE_CMATH)
/* cmath needed for std::numeric_limits<double>::quiet_NaN() */
#  include <cmath>
#  define SBE_FLOAT_NAN std::numeric_limits<float>::quiet_NaN()
#  define SBE_DOUBLE_NAN std::numeric_limits<double>::quiet_NaN()
#else
/* math.h needed for NAN */
#  include <math.h>
#  define SBE_FLOAT_NAN NAN
#  define SBE_DOUBLE_NAN NAN
#endif

#if __cplusplus >= 201103L
#  define SBE_CONSTEXPR constexpr
#  define SBE_NOEXCEPT noexcept
#else
#  define SBE_CONSTEXPR
#  define SBE_NOEXCEPT
#endif

#if __cplusplus >= 201703L
#  include <string_view>
#  define SBE_NODISCARD [[nodiscard]]
#else
#  define SBE_NODISCARD
#endif

#if !defined(__STDC_LIMIT_MACROS)
#  define __STDC_LIMIT_MACROS 1
#endif

#include <cstdint>
#include <cstring>
#include <iomanip>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>

#if defined(WIN32) || defined(_WIN32)
#  define SBE_BIG_ENDIAN_ENCODE_16(v) _byteswap_ushort(v)
#  define SBE_BIG_ENDIAN_ENCODE_32(v) _byteswap_ulong(v)
#  define SBE_BIG_ENDIAN_ENCODE_64(v) _byteswap_uint64(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_16(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_32(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_64(v) (v)
#elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#  define SBE_BIG_ENDIAN_ENCODE_16(v) __builtin_bswap16(v)
#  define SBE_BIG_ENDIAN_ENCODE_32(v) __builtin_bswap32(v)
#  define SBE_BIG_ENDIAN_ENCODE_64(v) __builtin_bswap64(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_16(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_32(v) (v)
#  define SBE_LITTLE_ENDIAN_ENCODE_64(v) (v)
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#  define SBE_LITTLE_ENDIAN_ENCODE_16(v) __builtin_bswap16(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_32(v) __builtin_bswap32(v)
#  define SBE_LITTLE_ENDIAN_ENCODE_64(v) __builtin_bswap64(v)
#  define SBE_BIG_ENDIAN_ENCODE_16(v) (v)
#  define SBE_BIG_ENDIAN_ENCODE_32(v) (v)
#  define SBE_BIG_ENDIAN_ENCODE_64(v) (v)
#else
#  error "Byte Ordering of platform not determined. Set __BYTE_ORDER__ manually before including this file."
#endif

#if !defined(SBE_BOUNDS_CHECK_EXPECT)
#  if defined(SBE_NO_BOUNDS_CHECK)
#    define SBE_BOUNDS_CHECK_EXPECT(exp, c) (false)
#  elif defined(_MSC_VER)
#    define SBE_BOUNDS_CHECK_EXPECT(exp, c) (exp)
#  else 
#    define SBE_BOUNDS_CHECK_EXPECT(exp, c) (__builtin_expect(exp, c))
#  endif

#endif

#define SBE_NULLVALUE_INT8 (std::numeric_limits<std::int8_t>::min)()
#define SBE_NULLVALUE_INT16 (std::numeric_limits<std::int16_t>::min)()
#define SBE_NULLVALUE_INT32 (std::numeric_limits<std::int32_t>::min)()
#define SBE_NULLVALUE_INT64 (std::numeric_limits<std::int64_t>::min)()
#define SBE_NULLVALUE_UINT8 (std::numeric_limits<std::uint8_t>::max)()
#define SBE_NULLVALUE_UINT16 (std::numeric_limits<std::uint16_t>::max)()
#define SBE_NULLVALUE_UINT32 (std::numeric_limits<std::uint32_t>::max)()
#define SBE_NULLVALUE_UINT64 (std::numeric_limits<std::uint64_t>::max)()


#include "RatioQty.h"
#include "ExecRestatementReasonValidForSingleCancel.h"
#include "NegotiationRejectCode.h"
#include "TextEncoding.h"
#include "RoutingInstruction.h"
#include "DeltaInMillis.h"
#include "OrdStatus.h"
#include "TimeInForce.h"
#include "ExecType.h"
#include "Boolean.h"
#include "FramingHeader.h"
#include "MassActionRejectReason.h"
#include "MessageType.h"
#include "InvestorID.h"
#include "TerminationCode.h"
#include "MassActionResponse.h"
#include "OrdType.h"
#include "SecurityIDSource.h"
#include "InboundBusinessHeader.h"
#include "SecurityResponseType.h"
#include "AllocTransType.h"
#include "AllocStatus.h"
#include "CredentialsEncoding.h"
#include "CxlRejResponseTo.h"
#include "CrossedIndicator.h"
#include "Price.h"
#include "PercentageOptional.h"
#include "QuoteReqID.h"
#include "MemoEncoding.h"
#include "PriceOffsetOptional.h"
#include "PosMaintStatus.h"
#include "PossResend.h"
#include "SelfTradePreventionInstruction.h"
#include "SimpleTimeInForce.h"
#include "RetransmitRejectCode.h"
#include "SimpleOrdType.h"
#include "QuoteStatus.h"
#include "BidirectionalBusinessHeader.h"
#include "PriceOptional.h"
#include "Side.h"
#include "GroupSizeEncoding.h"
#include "UTCTimestampNanosOptional.h"
#include "SendingTime.h"
#include "ExecuteUnderlyingTrade.h"
#include "QuoteStatusResponseTo.h"
#include "PosType.h"
#include "CustodianInfo.h"
#include "MassActionScope.h"
#include "AllocNoOrdersType.h"
#include "MassActionType.h"
#include "PosMaintAction.h"
#include "MessageHeader.h"
#include "EstablishRejectCode.h"
#include "Percentage.h"
#include "QuoteCancelType.h"
#include "AllocType.h"
#include "ExecRestatementReasonValidForMassCancel.h"
#include "AccountType.h"
#include "UTCTimestampNanos.h"
#include "ExecRestatementReason.h"
#include "ClientAppEncoding.h"
#include "DeskIDEncoding.h"
#include "SettlType.h"
#include "CancelOnDisconnectType.h"
#include "OutboundBusinessHeader.h"
#include "AllocReportType.h"
#include "FlowType.h"
#include "MultiLegReportingType.h"
#include "OrderCategory.h"
#include "PosTransType.h"

namespace b3 {
namespace entrypoint {
namespace fixp {
namespace sbe {

class OrderMassActionRequest
{
private:
    char *m_buffer = nullptr;
    std::uint64_t m_bufferLength = 0;
    std::uint64_t m_offset = 0;
    std::uint64_t m_position = 0;
    std::uint64_t m_actingBlockLength = 0;
    std::uint64_t m_actingVersion = 0;

    inline std::uint64_t *sbePositionPtr() SBE_NOEXCEPT
    {
        return &m_position;
    }

public:
    static const std::uint16_t SBE_BLOCK_LENGTH = static_cast<std::uint16_t>(54);
    static const std::uint16_t SBE_TEMPLATE_ID = static_cast<std::uint16_t>(701);
    static const std::uint16_t SBE_SCHEMA_ID = static_cast<std::uint16_t>(1);
    static const std::uint16_t SBE_SCHEMA_VERSION = static_cast<std::uint16_t>(2);
    static constexpr const char* SBE_SEMANTIC_VERSION = "8.0.0";

    enum MetaAttribute
    {
        EPOCH, TIME_UNIT, SEMANTIC_TYPE, PRESENCE
    };

    union sbe_float_as_uint_u
    {
        float fp_value;
        std::uint32_t uint_value;
    };

    union sbe_double_as_uint_u
    {
        double fp_value;
        std::uint64_t uint_value;
    };

    using messageHeader = MessageHeader;

    OrderMassActionRequest() = default;

    OrderMassActionRequest(
        char *buffer,
        const std::uint64_t offset,
        const std::uint64_t bufferLength,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion) :
        m_buffer(buffer),
        m_bufferLength(bufferLength),
        m_offset(offset),
        m_position(sbeCheckPosition(offset + actingBlockLength)),
        m_actingBlockLength(actingBlockLength),
        m_actingVersion(actingVersion)
    {
    }

    OrderMassActionRequest(char *buffer, const std::uint64_t bufferLength) :
        OrderMassActionRequest(buffer, 0, bufferLength, sbeBlockLength(), sbeSchemaVersion())
    {
    }

    OrderMassActionRequest(
        char *buffer,
        const std::uint64_t bufferLength,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion) :
        OrderMassActionRequest(buffer, 0, bufferLength, actingBlockLength, actingVersion)
    {
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeBlockLength() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(54);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t sbeBlockAndHeaderLength() SBE_NOEXCEPT
    {
        return messageHeader::encodedLength() + sbeBlockLength();
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeTemplateId() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(701);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeSchemaId() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(1);
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint16_t sbeSchemaVersion() SBE_NOEXCEPT
    {
        return static_cast<std::uint16_t>(2);
    }

    SBE_NODISCARD static const char *sbeSemanticVersion() SBE_NOEXCEPT
    {
        return "8.0.0";
    }

    SBE_NODISCARD static SBE_CONSTEXPR const char *sbeSemanticType() SBE_NOEXCEPT
    {
        return "";
    }

    SBE_NODISCARD std::uint64_t offset() const SBE_NOEXCEPT
    {
        return m_offset;
    }

    OrderMassActionRequest &wrapForEncode(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        return *this = OrderMassActionRequest(buffer, offset, bufferLength, sbeBlockLength(), sbeSchemaVersion());
    }

    OrderMassActionRequest &wrapAndApplyHeader(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        messageHeader hdr(buffer, offset, bufferLength, sbeSchemaVersion());

        hdr
            .blockLength(sbeBlockLength())
            .templateId(sbeTemplateId())
            .schemaId(sbeSchemaId())
            .version(sbeSchemaVersion());

        return *this = OrderMassActionRequest(
            buffer,
            offset + messageHeader::encodedLength(),
            bufferLength,
            sbeBlockLength(),
            sbeSchemaVersion());
    }

    OrderMassActionRequest &wrapForDecode(
        char *buffer,
        const std::uint64_t offset,
        const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion,
        const std::uint64_t bufferLength)
    {
        return *this = OrderMassActionRequest(buffer, offset, bufferLength, actingBlockLength, actingVersion);
    }

    OrderMassActionRequest &sbeRewind()
    {
        return wrapForDecode(m_buffer, m_offset, m_actingBlockLength, m_actingVersion, m_bufferLength);
    }

    SBE_NODISCARD std::uint64_t sbePosition() const SBE_NOEXCEPT
    {
        return m_position;
    }

    // NOLINTNEXTLINE(readability-convert-member-functions-to-static)
    std::uint64_t sbeCheckPosition(const std::uint64_t position)
    {
        if (SBE_BOUNDS_CHECK_EXPECT((position > m_bufferLength), false))
        {
            throw std::runtime_error("buffer too short [E100]");
        }
        return position;
    }

    void sbePosition(const std::uint64_t position)
    {
        m_position = sbeCheckPosition(position);
    }

    SBE_NODISCARD std::uint64_t encodedLength() const SBE_NOEXCEPT
    {
        return sbePosition() - m_offset;
    }

    SBE_NODISCARD std::uint64_t decodeLength() const
    {
        OrderMassActionRequest skipper(m_buffer, m_offset, m_bufferLength, sbeBlockLength(), m_actingVersion);
        skipper.skip();
        return skipper.encodedLength();
    }

    SBE_NODISCARD const char *buffer() const SBE_NOEXCEPT
    {
        return m_buffer;
    }

    SBE_NODISCARD char *buffer() SBE_NOEXCEPT
    {
        return m_buffer;
    }

    SBE_NODISCARD std::uint64_t bufferLength() const SBE_NOEXCEPT
    {
        return m_bufferLength;
    }

    SBE_NODISCARD std::uint64_t actingVersion() const SBE_NOEXCEPT
    {
        return m_actingVersion;
    }

    SBE_NODISCARD static const char *messageTypeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t messageTypeId() SBE_NOEXCEPT
    {
        return 35;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t messageTypeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool messageTypeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t messageTypeEncodingOffset() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t messageTypeEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR MessageType::Value messageTypeConstValue() SBE_NOEXCEPT
    {
        return MessageType::Value::OrderMassActionRequest;
    }

    SBE_NODISCARD MessageType::Value messageType() const
    {
        return MessageType::Value::OrderMassActionRequest;
    }

    SBE_NODISCARD std::uint8_t messageTypeRaw() const SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(MessageType::Value::OrderMassActionRequest);
    }

    SBE_NODISCARD static const char *businessHeaderMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t businessHeaderId() SBE_NOEXCEPT
    {
        return 35524;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t businessHeaderSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool businessHeaderInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t businessHeaderEncodingOffset() SBE_NOEXCEPT
    {
        return 0;
    }

private:
    InboundBusinessHeader m_businessHeader;

public:
    SBE_NODISCARD InboundBusinessHeader &businessHeader()
    {
        m_businessHeader.wrap(m_buffer, m_offset + 0, m_actingVersion, m_bufferLength);
        return m_businessHeader;
    }

    SBE_NODISCARD static const char *massActionTypeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t massActionTypeId() SBE_NOEXCEPT
    {
        return 1373;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t massActionTypeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool massActionTypeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t massActionTypeEncodingOffset() SBE_NOEXCEPT
    {
        return 18;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t massActionTypeEncodingLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t massActionTypeRaw() const SBE_NOEXCEPT
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 18, sizeof(std::uint8_t));
        return (val);
    }

    SBE_NODISCARD MassActionType::Value massActionType() const
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 18, sizeof(std::uint8_t));
        return MassActionType::get((val));
    }

    OrderMassActionRequest &massActionType(const MassActionType::Value value) SBE_NOEXCEPT
    {
        std::uint8_t val = (value);
        std::memcpy(m_buffer + m_offset + 18, &val, sizeof(std::uint8_t));
        return *this;
    }

    SBE_NODISCARD static const char *massActionScopeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t massActionScopeId() SBE_NOEXCEPT
    {
        return 1374;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t massActionScopeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool massActionScopeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t massActionScopeEncodingOffset() SBE_NOEXCEPT
    {
        return 19;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t massActionScopeEncodingLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t massActionScopeRaw() const SBE_NOEXCEPT
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 19, sizeof(std::uint8_t));
        return (val);
    }

    SBE_NODISCARD MassActionScope::Value massActionScope() const
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 19, sizeof(std::uint8_t));
        return MassActionScope::get((val));
    }

    OrderMassActionRequest &massActionScope(const MassActionScope::Value value) SBE_NOEXCEPT
    {
        std::uint8_t val = (value);
        std::memcpy(m_buffer + m_offset + 19, &val, sizeof(std::uint8_t));
        return *this;
    }

    SBE_NODISCARD static const char *clOrdIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "required";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t clOrdIDId() SBE_NOEXCEPT
    {
        return 11;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t clOrdIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool clOrdIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t clOrdIDEncodingOffset() SBE_NOEXCEPT
    {
        return 20;
    }

    static SBE_CONSTEXPR std::uint64_t clOrdIDNullValue() SBE_NOEXCEPT
    {
        return SBE_NULLVALUE_UINT64;
    }

    static SBE_CONSTEXPR std::uint64_t clOrdIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t clOrdIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t clOrdIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t clOrdID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 20, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    OrderMassActionRequest &clOrdID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 20, &val, sizeof(std::uint64_t));
        return *this;
    }

    SBE_NODISCARD static const char *execRestatementReasonMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t execRestatementReasonId() SBE_NOEXCEPT
    {
        return 378;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t execRestatementReasonSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool execRestatementReasonInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t execRestatementReasonEncodingOffset() SBE_NOEXCEPT
    {
        return 28;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t execRestatementReasonEncodingLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t execRestatementReasonRaw() const SBE_NOEXCEPT
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 28, sizeof(std::uint8_t));
        return (val);
    }

    SBE_NODISCARD ExecRestatementReasonValidForMassCancel::Value execRestatementReason() const
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 28, sizeof(std::uint8_t));
        return ExecRestatementReasonValidForMassCancel::get((val));
    }

    OrderMassActionRequest &execRestatementReason(const ExecRestatementReasonValidForMassCancel::Value value) SBE_NOEXCEPT
    {
        std::uint8_t val = (value);
        std::memcpy(m_buffer + m_offset + 28, &val, sizeof(std::uint8_t));
        return *this;
    }

    SBE_NODISCARD static const char *ordTagIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t ordTagIDId() SBE_NOEXCEPT
    {
        return 35505;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t ordTagIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool ordTagIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t ordTagIDEncodingOffset() SBE_NOEXCEPT
    {
        return 29;
    }

    static SBE_CONSTEXPR std::uint8_t ordTagIDNullValue() SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(0);
    }

    static SBE_CONSTEXPR std::uint8_t ordTagIDMinValue() SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(0);
    }

    static SBE_CONSTEXPR std::uint8_t ordTagIDMaxValue() SBE_NOEXCEPT
    {
        return static_cast<std::uint8_t>(254);
    }

    static SBE_CONSTEXPR std::size_t ordTagIDEncodingLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD std::uint8_t ordTagID() const SBE_NOEXCEPT
    {
        std::uint8_t val;
        std::memcpy(&val, m_buffer + m_offset + 29, sizeof(std::uint8_t));
        return (val);
    }

    OrderMassActionRequest &ordTagID(const std::uint8_t value) SBE_NOEXCEPT
    {
        std::uint8_t val = (value);
        std::memcpy(m_buffer + m_offset + 29, &val, sizeof(std::uint8_t));
        return *this;
    }

    SBE_NODISCARD static const char *sideMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t sideId() SBE_NOEXCEPT
    {
        return 54;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t sideSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool sideInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t sideEncodingOffset() SBE_NOEXCEPT
    {
        return 30;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t sideEncodingLength() SBE_NOEXCEPT
    {
        return 1;
    }

    SBE_NODISCARD char sideRaw() const SBE_NOEXCEPT
    {
        char val;
        std::memcpy(&val, m_buffer + m_offset + 30, sizeof(char));
        return (val);
    }

    SBE_NODISCARD Side::Value side() const
    {
        char val;
        std::memcpy(&val, m_buffer + m_offset + 30, sizeof(char));
        return Side::get((val));
    }

    OrderMassActionRequest &side(const Side::Value value) SBE_NOEXCEPT
    {
        char val = (value);
        std::memcpy(m_buffer + m_offset + 30, &val, sizeof(char));
        return *this;
    }

    SBE_NODISCARD static const char *assetMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t assetId() SBE_NOEXCEPT
    {
        return 6937;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t assetSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool assetInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t assetEncodingOffset() SBE_NOEXCEPT
    {
        return 32;
    }

    static SBE_CONSTEXPR char assetNullValue() SBE_NOEXCEPT
    {
        return static_cast<char>(0);
    }

    static SBE_CONSTEXPR char assetMinValue() SBE_NOEXCEPT
    {
        return static_cast<char>(32);
    }

    static SBE_CONSTEXPR char assetMaxValue() SBE_NOEXCEPT
    {
        return static_cast<char>(126);
    }

    static SBE_CONSTEXPR std::size_t assetEncodingLength() SBE_NOEXCEPT
    {
        return 6;
    }

    static SBE_CONSTEXPR std::uint64_t assetLength() SBE_NOEXCEPT
    {
        return 6;
    }

    SBE_NODISCARD const char *asset() const SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 32;
    }

    SBE_NODISCARD char *asset() SBE_NOEXCEPT
    {
        return m_buffer + m_offset + 32;
    }

    SBE_NODISCARD char asset(const std::uint64_t index) const
    {
        if (index >= 6)
        {
            throw std::runtime_error("index out of range for asset [E104]");
        }

        char val;
        std::memcpy(&val, m_buffer + m_offset + 32 + (index * 1), sizeof(char));
        return (val);
    }

    OrderMassActionRequest &asset(const std::uint64_t index, const char value)
    {
        if (index >= 6)
        {
            throw std::runtime_error("index out of range for asset [E105]");
        }

        char val = (value);
        std::memcpy(m_buffer + m_offset + 32 + (index * 1), &val, sizeof(char));
        return *this;
    }

    std::uint64_t getAsset(char *const dst, const std::uint64_t length) const
    {
        if (length > 6)
        {
            throw std::runtime_error("length too large for getAsset [E106]");
        }

        std::memcpy(dst, m_buffer + m_offset + 32, sizeof(char) * static_cast<std::size_t>(length));
        return length;
    }

    OrderMassActionRequest &putAsset(const char *const src) SBE_NOEXCEPT
    {
        std::memcpy(m_buffer + m_offset + 32, src, sizeof(char) * 6);
        return *this;
    }

    SBE_NODISCARD std::string getAssetAsString() const
    {
        const char *buffer = m_buffer + m_offset + 32;
        std::size_t length = 0;

        for (; length < 6 && *(buffer + length) != '\0'; ++length);
        std::string result(buffer, length);

        return result;
    }

    std::string getAssetAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getAssetAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    #if __cplusplus >= 201703L
    SBE_NODISCARD std::string_view getAssetAsStringView() const SBE_NOEXCEPT
    {
        const char *buffer = m_buffer + m_offset + 32;
        std::size_t length = 0;

        for (; length < 6 && *(buffer + length) != '\0'; ++length);
        std::string_view result(buffer, length);

        return result;
    }
    #endif

    #if __cplusplus >= 201703L
    OrderMassActionRequest &putAsset(const std::string_view str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 6)
        {
            throw std::runtime_error("string too large for putAsset [E106]");
        }

        std::memcpy(m_buffer + m_offset + 32, str.data(), srcLength);
        for (std::size_t start = srcLength; start < 6; ++start)
        {
            m_buffer[m_offset + 32 + start] = 0;
        }

        return *this;
    }
    #else
    OrderMassActionRequest &putAsset(const std::string &str)
    {
        const std::size_t srcLength = str.length();
        if (srcLength > 6)
        {
            throw std::runtime_error("string too large for putAsset [E106]");
        }

        std::memcpy(m_buffer + m_offset + 32, str.c_str(), srcLength);
        for (std::size_t start = srcLength; start < 6; ++start)
        {
            m_buffer[m_offset + 32 + start] = 0;
        }

        return *this;
    }
    #endif

    SBE_NODISCARD static const char *securityIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t securityIDId() SBE_NOEXCEPT
    {
        return 48;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t securityIDSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool securityIDInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityIDEncodingOffset() SBE_NOEXCEPT
    {
        return 38;
    }

    static SBE_CONSTEXPR std::uint64_t securityIDNullValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t securityIDMinValue() SBE_NOEXCEPT
    {
        return UINT64_C(0x0);
    }

    static SBE_CONSTEXPR std::uint64_t securityIDMaxValue() SBE_NOEXCEPT
    {
        return UINT64_C(0xfffffffffffffffe);
    }

    static SBE_CONSTEXPR std::size_t securityIDEncodingLength() SBE_NOEXCEPT
    {
        return 8;
    }

    SBE_NODISCARD std::uint64_t securityID() const SBE_NOEXCEPT
    {
        std::uint64_t val;
        std::memcpy(&val, m_buffer + m_offset + 38, sizeof(std::uint64_t));
        return SBE_LITTLE_ENDIAN_ENCODE_64(val);
    }

    OrderMassActionRequest &securityID(const std::uint64_t value) SBE_NOEXCEPT
    {
        std::uint64_t val = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        std::memcpy(m_buffer + m_offset + 38, &val, sizeof(std::uint64_t));
        return *this;
    }

    SBE_NODISCARD static const char *securityIDSourceMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t securityIDSourceId() SBE_NOEXCEPT
    {
        return 22;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t securityIDSourceSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool securityIDSourceInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityIDSourceEncodingOffset() SBE_NOEXCEPT
    {
        return 46;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityIDSourceEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD static SBE_CONSTEXPR SecurityIDSource::Value securityIDSourceConstValue() SBE_NOEXCEPT
    {
        return SecurityIDSource::Value::EXCHANGE_SYMBOL;
    }

    SBE_NODISCARD SecurityIDSource::Value securityIDSource() const
    {
        return SecurityIDSource::Value::EXCHANGE_SYMBOL;
    }

    SBE_NODISCARD char securityIDSourceRaw() const SBE_NOEXCEPT
    {
        return static_cast<char>(SecurityIDSource::Value::EXCHANGE_SYMBOL);
    }

    SBE_NODISCARD static const char *securityExchangeMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "constant";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t securityExchangeId() SBE_NOEXCEPT
    {
        return 207;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t securityExchangeSinceVersion() SBE_NOEXCEPT
    {
        return 0;
    }

    SBE_NODISCARD bool securityExchangeInActingVersion() SBE_NOEXCEPT
    {
        return true;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t securityExchangeEncodingOffset() SBE_NOEXCEPT
    {
        return 46;
    }

    static SBE_CONSTEXPR char securityExchangeNullValue() SBE_NOEXCEPT
    {
        return static_cast<char>(0);
    }

    static SBE_CONSTEXPR char securityExchangeMinValue() SBE_NOEXCEPT
    {
        return static_cast<char>(32);
    }

    static SBE_CONSTEXPR char securityExchangeMaxValue() SBE_NOEXCEPT
    {
        return static_cast<char>(126);
    }

    static SBE_CONSTEXPR std::size_t securityExchangeEncodingLength() SBE_NOEXCEPT
    {
        return 0;
    }

    static SBE_CONSTEXPR std::uint64_t securityExchangeLength() SBE_NOEXCEPT
    {
        return 4;
    }

    SBE_NODISCARD const char *securityExchange() const
    {
        static const std::uint8_t securityExchangeValues[] = { 66, 86, 77, 70, 0 };

        return (const char *)securityExchangeValues;
    }

    SBE_NODISCARD char securityExchange(const std::uint64_t index) const
    {
        static const std::uint8_t securityExchangeValues[] = { 66, 86, 77, 70, 0 };

        return (char)securityExchangeValues[index];
    }

    std::uint64_t getSecurityExchange(char *dst, const std::uint64_t length) const
    {
        static std::uint8_t securityExchangeValues[] = { 66, 86, 77, 70 };
        std::uint64_t bytesToCopy = length < sizeof(securityExchangeValues) ? length : sizeof(securityExchangeValues);

        std::memcpy(dst, securityExchangeValues, static_cast<std::size_t>(bytesToCopy));
        return bytesToCopy;
    }

    std::string getSecurityExchangeAsString() const
    {
        static const std::uint8_t SecurityExchangeValues[] = { 66, 86, 77, 70 };

        return std::string((const char *)SecurityExchangeValues, 4);
    }

    std::string getSecurityExchangeAsJsonEscapedString()
    {
        std::ostringstream oss;
        std::string s = getSecurityExchangeAsString();

        for (const auto c : s)
        {
            switch (c)
            {
                case '"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;

                default:
                    if ('\x00' <= c && c <= '\x1f')
                    {
                        oss << "\\u" << std::hex << std::setw(4)
                            << std::setfill('0') << (int)(c);
                    }
                    else
                    {
                        oss << c;
                    }
            }
        }

        return oss.str();
    }

    SBE_NODISCARD static const char *investorIDMetaAttribute(const MetaAttribute metaAttribute) SBE_NOEXCEPT
    {
        switch (metaAttribute)
        {
            case MetaAttribute::PRESENCE: return "optional";
            default: return "";
        }
    }

    static SBE_CONSTEXPR std::uint16_t investorIDId() SBE_NOEXCEPT
    {
        return 35508;
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::uint64_t investorIDSinceVersion() SBE_NOEXCEPT
    {
        return 2;
    }

    SBE_NODISCARD bool investorIDInActingVersion() SBE_NOEXCEPT
    {
        return m_actingVersion >= investorIDSinceVersion();
    }

    SBE_NODISCARD static SBE_CONSTEXPR std::size_t investorIDEncodingOffset() SBE_NOEXCEPT
    {
        return 46;
    }

private:
    InvestorID m_investorID;

public:
    SBE_NODISCARD InvestorID &investorID()
    {
        m_investorID.wrap(m_buffer, m_offset + 46, m_actingVersion, m_bufferLength);
        return m_investorID;
    }

template<typename CharT, typename Traits>
friend std::basic_ostream<CharT, Traits> & operator << (
    std::basic_ostream<CharT, Traits> &builder, OrderMassActionRequest &_writer)
{
    OrderMassActionRequest writer(
        _writer.m_buffer,
        _writer.m_offset,
        _writer.m_bufferLength,
        _writer.m_actingBlockLength,
        _writer.m_actingVersion);

    builder << '{';
    builder << R"("Name": "OrderMassActionRequest", )";
    builder << R"("sbeTemplateId": )";
    builder << writer.sbeTemplateId();
    builder << ", ";

    builder << R"("messageType": )";
    builder << '"' << writer.messageType() << '"';

    builder << ", ";
    builder << R"("businessHeader": )";
    builder << writer.businessHeader();

    builder << ", ";
    builder << R"("massActionType": )";
    builder << '"' << writer.massActionType() << '"';

    builder << ", ";
    builder << R"("massActionScope": )";
    builder << '"' << writer.massActionScope() << '"';

    builder << ", ";
    builder << R"("clOrdID": )";
    builder << +writer.clOrdID();

    builder << ", ";
    builder << R"("execRestatementReason": )";
    builder << '"' << writer.execRestatementReason() << '"';

    builder << ", ";
    builder << R"("ordTagID": )";
    builder << +writer.ordTagID();

    builder << ", ";
    builder << R"("side": )";
    builder << '"' << writer.side() << '"';

    builder << ", ";
    builder << R"("asset": )";
    builder << '"' <<
        writer.getAssetAsJsonEscapedString().c_str() << '"';

    builder << ", ";
    builder << R"("securityID": )";
    builder << +writer.securityID();

    builder << ", ";
    builder << R"("securityIDSource": )";
    builder << '"' << writer.securityIDSource() << '"';

    builder << ", ";
    builder << R"("investorID": )";
    if (writer.investorIDInActingVersion())
    {
        builder << writer.investorID();
    }
    else
    {
        builder << "{}";
    }

    builder << '}';

    return builder;
}

void skip()
{
}

SBE_NODISCARD static SBE_CONSTEXPR bool isConstLength() SBE_NOEXCEPT
{
    return true;
}

SBE_NODISCARD static std::size_t computeLength()
{
#if defined(__GNUG__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
#endif
    std::size_t length = sbeBlockLength();

    return length;
#if defined(__GNUG__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif
}
};
}
}
}
}
#endif
