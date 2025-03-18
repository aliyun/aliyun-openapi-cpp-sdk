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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeLoadBalancersRequest : public RpcServiceRequest {
public:
	DescribeLoadBalancersRequest();
	~DescribeLoadBalancersRequest();
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getServerId() const;
	void setServerId(const std::string &serverId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<std::string> getEnsRegionIds() const;
	void setEnsRegionIds(const std::vector<std::string> &ensRegionIds);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getLoadBalancerStatus() const;
	void setLoadBalancerStatus(const std::string &loadBalancerStatus);

private:
	std::string loadBalancerName_;
	std::string ensRegionId_;
	std::string serverId_;
	std::string vSwitchId_;
	std::string loadBalancerId_;
	std::string networkId_;
	int pageNumber_;
	int pageSize_;
	std::vector<std::string> ensRegionIds_;
	std::string address_;
	std::string loadBalancerStatus_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
