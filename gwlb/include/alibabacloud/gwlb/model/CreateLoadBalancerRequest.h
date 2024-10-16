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

#ifndef ALIBABACLOUD_GWLB_MODEL_CREATELOADBALANCERREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_CREATELOADBALANCERREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT CreateLoadBalancerRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	struct ZoneMappings {
		std::string vSwitchId;
		std::string zoneId;
	};
	CreateLoadBalancerRequest();
	~CreateLoadBalancerRequest();
	bool getCrossZoneEnabled() const;
	void setCrossZoneEnabled(bool crossZoneEnabled);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::vector<ZoneMappings> getZoneMappings() const;
	void setZoneMappings(const std::vector<ZoneMappings> &zoneMappings);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	bool crossZoneEnabled_;
	std::string clientToken_;
	std::string addressIpVersion_;
	std::string resourceGroupId_;
	std::string loadBalancerName_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::vector<ZoneMappings> zoneMappings_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_CREATELOADBALANCERREQUEST_H_
