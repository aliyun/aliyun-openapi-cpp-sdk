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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATETRAFFICMIRRORFILTERREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATETRAFFICMIRRORFILTERREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateTrafficMirrorFilterRequest : public RpcServiceRequest {
public:
	struct IngressRules {
		std::string action;
		std::string sourceCidrBlock;
		std::string protocol;
		std::string ipVersion;
		std::string destinationPortRange;
		int priority;
		std::string destinationCidrBlock;
		std::string sourcePortRange;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct EgressRules {
		std::string action;
		std::string sourceCidrBlock;
		std::string protocol;
		std::string ipVersion;
		std::string destinationPortRange;
		int priority;
		std::string destinationCidrBlock;
		std::string sourcePortRange;
	};
	CreateTrafficMirrorFilterRequest();
	~CreateTrafficMirrorFilterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<IngressRules> getIngressRules() const;
	void setIngressRules(const std::vector<IngressRules> &ingressRules);
	std::string getTrafficMirrorFilterName() const;
	void setTrafficMirrorFilterName(const std::string &trafficMirrorFilterName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<EgressRules> getEgressRules() const;
	void setEgressRules(const std::vector<EgressRules> &egressRules);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTrafficMirrorFilterDescription() const;
	void setTrafficMirrorFilterDescription(const std::string &trafficMirrorFilterDescription);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::vector<IngressRules> ingressRules_;
	std::string trafficMirrorFilterName_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::vector<EgressRules> egressRules_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string trafficMirrorFilterDescription_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATETRAFFICMIRRORFILTERREQUEST_H_
