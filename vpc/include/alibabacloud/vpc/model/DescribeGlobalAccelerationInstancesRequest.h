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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEGLOBALACCELERATIONINSTANCESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEGLOBALACCELERATIONINSTANCESREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeGlobalAccelerationInstancesRequest : public RpcServiceRequest {
public:
	DescribeGlobalAccelerationInstancesRequest();
	~DescribeGlobalAccelerationInstancesRequest();
	std::string getIpAddress() const;
	void setIpAddress(const std::string &ipAddress);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getBandwidthType() const;
	void setBandwidthType(const std::string &bandwidthType);
	bool getIncludeReservationData() const;
	void setIncludeReservationData(bool includeReservationData);
	std::string getGlobalAccelerationInstanceId() const;
	void setGlobalAccelerationInstanceId(const std::string &globalAccelerationInstanceId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getServiceLocation() const;
	void setServiceLocation(const std::string &serviceLocation);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getServerId() const;
	void setServerId(const std::string &serverId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string ipAddress_;
	long resourceOwnerId_;
	std::string bandwidthType_;
	bool includeReservationData_;
	std::string globalAccelerationInstanceId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string serviceLocation_;
	std::string ownerAccount_;
	long ownerId_;
	std::string serverId_;
	std::string name_;
	std::string status_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEGLOBALACCELERATIONINSTANCESREQUEST_H_
