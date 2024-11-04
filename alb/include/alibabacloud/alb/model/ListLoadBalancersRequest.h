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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTLOADBALANCERSREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_LISTLOADBALANCERSREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ListLoadBalancersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListLoadBalancersRequest();
	~ListLoadBalancersRequest();
	std::vector<std::string> getLoadBalancerNames() const;
	void setLoadBalancerNames(const std::vector<std::string> &loadBalancerNames);
	std::vector<std::string> getLoadBalancerIds() const;
	void setLoadBalancerIds(const std::vector<std::string> &loadBalancerIds);
	std::vector<std::string> getLoadBalancerEditions() const;
	void setLoadBalancerEditions(const std::vector<std::string> &loadBalancerEditions);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getLoadBalancerBussinessStatus() const;
	void setLoadBalancerBussinessStatus(const std::string &loadBalancerBussinessStatus);
	std::string getDNSName() const;
	void setDNSName(const std::string &dNSName);
	std::string getAddressType() const;
	void setAddressType(const std::string &addressType);
	std::vector<std::string> getVpcIds() const;
	void setVpcIds(const std::vector<std::string> &vpcIds);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getLoadBalancerStatus() const;
	void setLoadBalancerStatus(const std::string &loadBalancerStatus);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getIpv6AddressType() const;
	void setIpv6AddressType(const std::string &ipv6AddressType);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::vector<std::string> loadBalancerNames_;
	std::vector<std::string> loadBalancerIds_;
	std::vector<std::string> loadBalancerEditions_;
	std::string addressIpVersion_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::string loadBalancerBussinessStatus_;
	std::string dNSName_;
	std::string addressType_;
	std::vector<std::string> vpcIds_;
	std::vector<Tag> tag_;
	std::string address_;
	std::string loadBalancerStatus_;
	std::string internetChargeType_;
	int maxResults_;
	std::string zoneId_;
	std::string ipv6AddressType_;
	std::string payType_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_LISTLOADBALANCERSREQUEST_H_
