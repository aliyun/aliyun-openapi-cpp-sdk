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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORENTRYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateIPv6TranslatorEntryRequest : public RpcServiceRequest {
public:
	CreateIPv6TranslatorEntryRequest();
	~CreateIPv6TranslatorEntryRequest();
	int getBackendIpv4Port() const;
	void setBackendIpv4Port(int backendIpv4Port);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEntryName() const;
	void setEntryName(const std::string &entryName);
	std::string getAclStatus() const;
	void setAclStatus(const std::string &aclStatus);
	int getEntryBandwidth() const;
	void setEntryBandwidth(int entryBandwidth);
	std::string getAclType() const;
	void setAclType(const std::string &aclType);
	int getAllocateIpv6Port() const;
	void setAllocateIpv6Port(int allocateIpv6Port);
	std::string getEntryDescription() const;
	void setEntryDescription(const std::string &entryDescription);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBackendIpv4Addr() const;
	void setBackendIpv4Addr(const std::string &backendIpv4Addr);
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransProtocol() const;
	void setTransProtocol(const std::string &transProtocol);
	std::string getIpv6TranslatorId() const;
	void setIpv6TranslatorId(const std::string &ipv6TranslatorId);

private:
	int backendIpv4Port_;
	long resourceOwnerId_;
	std::string entryName_;
	std::string aclStatus_;
	int entryBandwidth_;
	std::string aclType_;
	int allocateIpv6Port_;
	std::string entryDescription_;
	std::string regionId_;
	std::string backendIpv4Addr_;
	std::string aclId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transProtocol_;
	std::string ipv6TranslatorId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEIPV6TRANSLATORENTRYREQUEST_H_
