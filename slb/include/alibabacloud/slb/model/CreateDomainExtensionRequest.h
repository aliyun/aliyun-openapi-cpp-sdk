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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATEDOMAINEXTENSIONREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATEDOMAINEXTENSIONREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT CreateDomainExtensionRequest : public RpcServiceRequest {
public:
	struct ServerCertificate {
		std::string bindingType;
		std::string certificateId;
		std::string standardType;
	};
	CreateDomainExtensionRequest();
	~CreateDomainExtensionRequest();
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<ServerCertificate> getServerCertificate() const;
	void setServerCertificate(const std::vector<ServerCertificate> &serverCertificate);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getCertificateId() const;
	void setCertificateId(const std::vector<std::string> &certificateId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getServerCertificateId() const;
	void setServerCertificateId(const std::string &serverCertificateId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::string getDomain() const;
	void setDomain(const std::string &domain);

private:
	std::string access_key_id_;
	long resourceOwnerId_;
	std::vector<ServerCertificate> serverCertificate_;
	std::string regionId_;
	int listenerPort_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> certificateId_;
	long ownerId_;
	std::string serverCertificateId_;
	std::string tags_;
	std::string loadBalancerId_;
	std::string domain_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_CREATEDOMAINEXTENSIONREQUEST_H_
