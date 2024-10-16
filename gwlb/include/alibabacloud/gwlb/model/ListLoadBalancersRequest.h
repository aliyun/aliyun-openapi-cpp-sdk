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

#ifndef ALIBABACLOUD_GWLB_MODEL_LISTLOADBALANCERSREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_LISTLOADBALANCERSREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT ListLoadBalancersRequest : public RpcServiceRequest {
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
	int getSkip() const;
	void setSkip(int skip);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<std::string> getZoneIds() const;
	void setZoneIds(const std::vector<std::string> &zoneIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getVpcIds() const;
	void setVpcIds(const std::vector<std::string> &vpcIds);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getLoadBalancerBusinessStatus() const;
	void setLoadBalancerBusinessStatus(const std::string &loadBalancerBusinessStatus);
	std::string getLoadBalancerStatus() const;
	void setLoadBalancerStatus(const std::string &loadBalancerStatus);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::vector<std::string> loadBalancerNames_;
	std::vector<std::string> loadBalancerIds_;
	int skip_;
	std::string addressIpVersion_;
	std::string resourceGroupId_;
	std::vector<std::string> zoneIds_;
	std::string nextToken_;
	std::vector<std::string> vpcIds_;
	std::vector<Tag> tag_;
	std::string loadBalancerBusinessStatus_;
	std::string loadBalancerStatus_;
	int maxResults_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_LISTLOADBALANCERSREQUEST_H_
