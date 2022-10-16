#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_H_

#include "Aspose.Cells.Systems/Security/Cryptography/CryptographicException.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API CryptographicUnexpectedOperationException : public CryptographicException
					{
					public:
						CryptographicUnexpectedOperationException() : CryptographicException("CryptographicException")
						{
							CryptographicException::SetErrorCode(-2147024809);
						}
						CryptographicUnexpectedOperationException(const char* message) : CryptographicException(message)
						{
							CryptographicException::SetErrorCode(-2147024809);
						}
						CryptographicUnexpectedOperationException(StringPtr message) : CryptographicException(message)
						{
							CryptographicException::SetErrorCode(-2147024809);
						}
						CryptographicUnexpectedOperationException(StringPtr message, StringPtr paramName)
						{
							_message = message;
							_paramName = paramName;
							CryptographicException::SetErrorCode(-2147024809);
						}
						virtual ~CryptographicUnexpectedOperationException() {}

					};
				} // namespace Cryptography
			}	// namespace Security
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_H_
