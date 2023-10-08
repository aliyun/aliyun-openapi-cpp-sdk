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

#ifndef ALIBABACLOUD_NLB_MODEL_LISTLOADBALANCERSREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_LISTLOADBALANCERSREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT ListLoadBalancersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	ListLoadBalancersRequest();
	~ListLoadBalancersRequest();
	std::vector<std::string> getLoadBalancerNames() const;
	void setLoadBalancerNames(const std::vector<std::string> &loadBalancerNames);
	std::vector<std::string> getLoadBalancerIds() const;
	void setLoadBalancerIds(const std::vector<std::string> &loadBalancerIds);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDNSName() const;
	void setDNSName(const std::string &dNSName);
	std::string getAddressType() const;
	void setAddressType(const std::string &addressType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<std::string> getVpcIds() const;
	void setVpcIds(const std::vector<std::string> &vpcIds);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getLoadBalancerBusinessStatus() const;
	void setLoadBalancerBusinessStatus(const std::string &loadBalancerBusinessStatus);
	std::string getLoadBalancerStatus() const;
	void setLoadBalancerStatus(const std::string &loadBalancerStatus);
	std::string getLoadBalancerType() const;
	void setLoadBalancerType(const std::string &loadBalancerType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getIpv6AddressType() const;
	void setIpv6AddressType(const std::string &ipv6AddressType);

private:
	std::vector<std::string> loadBalancerNames_;
	std::vector<std::string> loadBalancerIds_;
	std::string addressIpVersion_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::string regionId_;
	std::string dNSName_;
	std::string addressType_;
	std::vector<Tag> tag_;
	std::vector<std::string> vpcIds_;
	std::string address_;
	std::string loadBalancerBusinessStatus_;
	std::string loadBalancerStatus_;
	std::string loadBalancerType_;
	std::string zoneId_;
	int maxResults_;
	std::string ipv6AddressType_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_LISTLOADBALANCERSREQUEST_H_
