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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCONNECTTRAFFICQOSRULEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCONNECTTRAFFICQOSRULEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyExpressConnectTrafficQosRuleRequest : public RpcServiceRequest {
public:
	ModifyExpressConnectTrafficQosRuleRequest();
	~ModifyExpressConnectTrafficQosRuleRequest();
	std::string getDstCidr() const;
	void setDstCidr(const std::string &dstCidr);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getSrcCidr() const;
	void setSrcCidr(const std::string &srcCidr);
	std::string getDstIPv6Cidr() const;
	void setDstIPv6Cidr(const std::string &dstIPv6Cidr);
	std::string getDstPortRange() const;
	void setDstPortRange(const std::string &dstPortRange);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getQosId() const;
	void setQosId(const std::string &qosId);
	std::string getQueueId() const;
	void setQueueId(const std::string &queueId);
	int getMatchDscp() const;
	void setMatchDscp(int matchDscp);
	std::string getRuleDescription() const;
	void setRuleDescription(const std::string &ruleDescription);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getRemarkingDscp() const;
	void setRemarkingDscp(int remarkingDscp);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getPriority() const;
	void setPriority(int priority);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSrcPortRange() const;
	void setSrcPortRange(const std::string &srcPortRange);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);
	std::string getSrcIPv6Cidr() const;
	void setSrcIPv6Cidr(const std::string &srcIPv6Cidr);

private:
	std::string dstCidr_;
	std::string clientToken_;
	std::string ruleName_;
	std::string srcCidr_;
	std::string dstIPv6Cidr_;
	std::string dstPortRange_;
	std::string protocol_;
	std::string regionId_;
	std::string qosId_;
	std::string queueId_;
	int matchDscp_;
	std::string ruleDescription_;
	std::string resourceOwnerAccount_;
	int remarkingDscp_;
	std::string ownerAccount_;
	int priority_;
	long ownerId_;
	std::string srcPortRange_;
	std::string ruleId_;
	std::string srcIPv6Cidr_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCONNECTTRAFFICQOSRULEREQUEST_H_
