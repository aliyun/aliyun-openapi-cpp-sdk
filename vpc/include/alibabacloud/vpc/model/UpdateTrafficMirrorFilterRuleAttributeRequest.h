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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATETRAFFICMIRRORFILTERRULEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATETRAFFICMIRRORFILTERRULEATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT UpdateTrafficMirrorFilterRuleAttributeRequest : public RpcServiceRequest {
public:
	UpdateTrafficMirrorFilterRuleAttributeRequest();
	~UpdateTrafficMirrorFilterRuleAttributeRequest();
	std::string getSourcePortRange() const;
	void setSourcePortRange(const std::string &sourcePortRange);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDestinationPortRange() const;
	void setDestinationPortRange(const std::string &destinationPortRange);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRuleAction() const;
	void setRuleAction(const std::string &ruleAction);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSourceCidrBlock() const;
	void setSourceCidrBlock(const std::string &sourceCidrBlock);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getPriority() const;
	void setPriority(int priority);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTrafficMirrorFilterRuleId() const;
	void setTrafficMirrorFilterRuleId(const std::string &trafficMirrorFilterRuleId);

private:
	std::string sourcePortRange_;
	long resourceOwnerId_;
	std::string destinationPortRange_;
	std::string clientToken_;
	std::string ruleAction_;
	std::string protocol_;
	std::string regionId_;
	std::string sourceCidrBlock_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string destinationCidrBlock_;
	std::string ownerAccount_;
	int priority_;
	long ownerId_;
	std::string trafficMirrorFilterRuleId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATETRAFFICMIRRORFILTERRULEATTRIBUTEREQUEST_H_
