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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATENETWORKACLENTRIESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATENETWORKACLENTRIESREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT UpdateNetworkAclEntriesRequest : public RpcServiceRequest {
public:
	struct EgressAclEntries {
		std::string networkAclEntryId;
		std::string entryType;
		std::string networkAclEntryName;
		std::string policy;
		std::string description;
		std::string protocol;
		std::string destinationCidrIp;
		std::string ipVersion;
		std::string port;
	};
	struct IngressAclEntries {
		std::string networkAclEntryId;
		std::string entryType;
		std::string networkAclEntryName;
		std::string policy;
		std::string sourceCidrIp;
		std::string ipVersion;
		std::string description;
		std::string protocol;
		std::string port;
	};
	UpdateNetworkAclEntriesRequest();
	~UpdateNetworkAclEntriesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<EgressAclEntries> getEgressAclEntries() const;
	void setEgressAclEntries(const std::vector<EgressAclEntries> &egressAclEntries);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNetworkAclId() const;
	void setNetworkAclId(const std::string &networkAclId);
	bool getUpdateIngressAclEntries() const;
	void setUpdateIngressAclEntries(bool updateIngressAclEntries);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getUpdateEgressAclEntries() const;
	void setUpdateEgressAclEntries(bool updateEgressAclEntries);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<IngressAclEntries> getIngressAclEntries() const;
	void setIngressAclEntries(const std::vector<IngressAclEntries> &ingressAclEntries);

private:
	long resourceOwnerId_;
	std::vector<EgressAclEntries> egressAclEntries_;
	std::string clientToken_;
	std::string regionId_;
	std::string networkAclId_;
	bool updateIngressAclEntries_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool updateEgressAclEntries_;
	long ownerId_;
	std::vector<IngressAclEntries> ingressAclEntries_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATENETWORKACLENTRIESREQUEST_H_
