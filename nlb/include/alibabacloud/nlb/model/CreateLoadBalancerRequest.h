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

#ifndef ALIBABACLOUD_NLB_MODEL_CREATELOADBALANCERREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_CREATELOADBALANCERREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT CreateLoadBalancerRequest : public RpcServiceRequest {
public:
	struct ModificationProtectionConfig {
		std::string status;
		std::string reason;
	};
	struct LoadBalancerBillingConfig {
		std::string payType;
	};
	struct DeletionProtectionConfig {
		bool enabled;
		std::string reason;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct ZoneMappings {
		std::string vSwitchId;
		std::string zoneId;
		std::string privateIPv4Address;
		std::string allocationId;
	};
	CreateLoadBalancerRequest();
	~CreateLoadBalancerRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	ModificationProtectionConfig getModificationProtectionConfig() const;
	void setModificationProtectionConfig(const ModificationProtectionConfig &modificationProtectionConfig);
	LoadBalancerBillingConfig getLoadBalancerBillingConfig() const;
	void setLoadBalancerBillingConfig(const LoadBalancerBillingConfig &loadBalancerBillingConfig);
	std::string getBizFlag() const;
	void setBizFlag(const std::string &bizFlag);
	DeletionProtectionConfig getDeletionProtectionConfig() const;
	void setDeletionProtectionConfig(const DeletionProtectionConfig &deletionProtectionConfig);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAddressType() const;
	void setAddressType(const std::string &addressType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getBandwidthPackageId() const;
	void setBandwidthPackageId(const std::string &bandwidthPackageId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::vector<ZoneMappings> getZoneMappings() const;
	void setZoneMappings(const std::vector<ZoneMappings> &zoneMappings);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::string getLoadBalancerType() const;
	void setLoadBalancerType(const std::string &loadBalancerType);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string clientToken_;
	ModificationProtectionConfig modificationProtectionConfig_;
	LoadBalancerBillingConfig loadBalancerBillingConfig_;
	std::string bizFlag_;
	DeletionProtectionConfig deletionProtectionConfig_;
	std::string addressIpVersion_;
	std::string resourceGroupId_;
	std::string loadBalancerName_;
	std::string regionId_;
	std::string addressType_;
	std::vector<Tag> tag_;
	std::string bandwidthPackageId_;
	bool dryRun_;
	std::vector<ZoneMappings> zoneMappings_;
	std::vector<std::string> securityGroupIds_;
	std::string loadBalancerType_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_CREATELOADBALANCERREQUEST_H_
