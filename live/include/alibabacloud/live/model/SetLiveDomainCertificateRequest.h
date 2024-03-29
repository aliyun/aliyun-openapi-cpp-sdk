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

#ifndef ALIBABACLOUD_LIVE_MODEL_SETLIVEDOMAINCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETLIVEDOMAINCERTIFICATEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SetLiveDomainCertificateRequest : public RpcServiceRequest {
public:
	SetLiveDomainCertificateRequest();
	~SetLiveDomainCertificateRequest();
	std::string getSSLProtocol() const;
	void setSSLProtocol(const std::string &sSLProtocol);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getCertType() const;
	void setCertType(const std::string &certType);
	std::string getSSLPri() const;
	void setSSLPri(const std::string &sSLPri);
	std::string getForceSet() const;
	void setForceSet(const std::string &forceSet);
	std::string getCertName() const;
	void setCertName(const std::string &certName);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSSLPub() const;
	void setSSLPub(const std::string &sSLPub);

private:
	std::string sSLProtocol_;
	std::string securityToken_;
	std::string certType_;
	std::string sSLPri_;
	std::string forceSet_;
	std::string certName_;
	std::string domainName_;
	long ownerId_;
	std::string sSLPub_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SETLIVEDOMAINCERTIFICATEREQUEST_H_
