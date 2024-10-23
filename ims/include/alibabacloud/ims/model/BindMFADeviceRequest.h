/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_IMS_MODEL_BINDMFADEVICEREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_BINDMFADEVICEREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT BindMFADeviceRequest : public RpcServiceRequest {
public:
	BindMFADeviceRequest();
	~BindMFADeviceRequest();
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::string getU2fAppId() const;
	void setU2fAppId(const std::string &u2fAppId);
	std::string getAuthenticationCode2() const;
	void setAuthenticationCode2(const std::string &authenticationCode2);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getAuthenticationCode1() const;
	void setAuthenticationCode1(const std::string &authenticationCode1);
	std::string getU2fPublicKey() const;
	void setU2fPublicKey(const std::string &u2fPublicKey);
	std::string getU2fVersion() const;
	void setU2fVersion(const std::string &u2fVersion);
	std::string getSerialNumber() const;
	void setSerialNumber(const std::string &serialNumber);
	std::string getU2fKeyHandler() const;
	void setU2fKeyHandler(const std::string &u2fKeyHandler);
	std::string getUserPrincipalName() const;
	void setUserPrincipalName(const std::string &userPrincipalName);
	std::string getU2fAttestationCert() const;
	void setU2fAttestationCert(const std::string &u2fAttestationCert);

private:
	std::string akProxySuffix_;
	std::string u2fAppId_;
	std::string authenticationCode2_;
	std::string type_;
	std::string authenticationCode1_;
	std::string u2fPublicKey_;
	std::string u2fVersion_;
	std::string serialNumber_;
	std::string u2fKeyHandler_;
	std::string userPrincipalName_;
	std::string u2fAttestationCert_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_BINDMFADEVICEREQUEST_H_
