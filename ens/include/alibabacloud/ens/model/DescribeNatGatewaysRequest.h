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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBENATGATEWAYSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBENATGATEWAYSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeNatGatewaysRequest : public RpcServiceRequest {
public:
	DescribeNatGatewaysRequest();
	~DescribeNatGatewaysRequest();
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	std::vector<std::string> getEnsRegionIds() const;
	void setEnsRegionIds(const std::vector<std::string> &ensRegionIds);
	std::vector<std::string> getNatGatewayIds() const;
	void setNatGatewayIds(const std::vector<std::string> &natGatewayIds);

private:
	std::string ensRegionId_;
	std::string vSwitchId_;
	std::string name_;
	std::string networkId_;
	int pageNumber_;
	int pageSize_;
	std::string natGatewayId_;
	std::vector<std::string> ensRegionIds_;
	std::vector<std::string> natGatewayIds_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENATGATEWAYSREQUEST_H_
