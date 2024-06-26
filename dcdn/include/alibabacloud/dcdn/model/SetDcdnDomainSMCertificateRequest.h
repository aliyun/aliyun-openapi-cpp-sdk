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

#ifndef ALIBABACLOUD_DCDN_MODEL_SETDCDNDOMAINSMCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_SETDCDNDOMAINSMCERTIFICATEREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT SetDcdnDomainSMCertificateRequest : public RpcServiceRequest {
public:
	SetDcdnDomainSMCertificateRequest();
	~SetDcdnDomainSMCertificateRequest();
	std::string getSSLProtocol() const;
	void setSSLProtocol(const std::string &sSLProtocol);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCertIdentifier() const;
	void setCertIdentifier(const std::string &certIdentifier);

private:
	std::string sSLProtocol_;
	std::string securityToken_;
	std::string domainName_;
	long ownerId_;
	std::string certIdentifier_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_SETDCDNDOMAINSMCERTIFICATEREQUEST_H_
