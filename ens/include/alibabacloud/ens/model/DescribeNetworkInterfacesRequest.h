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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeNetworkInterfacesRequest : public RpcServiceRequest {
public:
	DescribeNetworkInterfacesRequest();
	~DescribeNetworkInterfacesRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getNetworkInterfaceName() const;
	void setNetworkInterfaceName(const std::string &networkInterfaceName);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);
	std::vector<std::string> getIpv6Address() const;
	void setIpv6Address(const std::vector<std::string> &ipv6Address);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::vector<std::string> getNetworkInterfaceIds() const;
	void setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	bool getShowDetail() const;
	void setShowDetail(bool showDetail);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::vector<std::string> getEnsRegionIds() const;
	void setEnsRegionIds(const std::vector<std::string> &ensRegionIds);
	std::string getPrimaryIpAddress() const;
	void setPrimaryIpAddress(const std::string &primaryIpAddress);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	std::string type_;
	std::string ensRegionId_;
	std::string networkInterfaceName_;
	std::string vSwitchId_;
	std::string instanceId_;
	std::string networkId_;
	std::vector<std::string> ipv6Address_;
	std::string status_;
	std::vector<std::string> networkInterfaceIds_;
	std::string securityGroupId_;
	std::string pageNumber_;
	bool showDetail_;
	std::string pageSize_;
	std::vector<std::string> ensRegionIds_;
	std::string primaryIpAddress_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
