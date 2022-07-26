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
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPrimaryIpAddress() const;
	void setPrimaryIpAddress(const std::string &primaryIpAddress);

private:
	std::string pageNumber_;
	std::string ensRegionId_;
	std::string pageSize_;
	std::string vSwitchId_;
	std::string instanceId_;
	std::string primaryIpAddress_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
