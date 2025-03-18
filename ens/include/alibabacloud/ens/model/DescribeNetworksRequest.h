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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeNetworksRequest : public RpcServiceRequest {
public:
	DescribeNetworksRequest();
	~DescribeNetworksRequest();
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::vector<std::string> getNetworkIds() const;
	void setNetworkIds(const std::vector<std::string> &networkIds);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNetworkName() const;
	void setNetworkName(const std::string &networkName);
	std::vector<std::string> getEnsRegionIds() const;
	void setEnsRegionIds(const std::vector<std::string> &ensRegionIds);

private:
	std::string ensRegionId_;
	std::vector<std::string> networkIds_;
	std::string networkId_;
	int pageNumber_;
	int pageSize_;
	std::string networkName_;
	std::vector<std::string> ensRegionIds_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKSREQUEST_H_
