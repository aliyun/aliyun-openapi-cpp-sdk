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

#ifndef ALIBABACLOUD_NLB_MODEL_UPDATELOADBALANCERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_UPDATELOADBALANCERATTRIBUTEREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT UpdateLoadBalancerAttributeRequest : public RpcServiceRequest {
public:
	UpdateLoadBalancerAttributeRequest();
	~UpdateLoadBalancerAttributeRequest();
	bool getCrossZoneEnabled() const;
	void setCrossZoneEnabled(bool crossZoneEnabled);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	int getCps() const;
	void setCps(int cps);
	bool getTrafficAffinityEnabled() const;
	void setTrafficAffinityEnabled(bool trafficAffinityEnabled);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);

private:
	bool crossZoneEnabled_;
	std::string clientToken_;
	std::string loadBalancerName_;
	std::string regionId_;
	bool dryRun_;
	int cps_;
	bool trafficAffinityEnabled_;
	std::vector<std::string> securityGroupIds_;
	std::string loadBalancerId_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_UPDATELOADBALANCERATTRIBUTEREQUEST_H_
