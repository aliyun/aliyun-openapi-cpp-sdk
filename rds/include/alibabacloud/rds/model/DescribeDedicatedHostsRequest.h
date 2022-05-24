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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeDedicatedHostsRequest : public RpcServiceRequest {
public:
	DescribeDedicatedHostsRequest();
	~DescribeDedicatedHostsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getHostType() const;
	void setHostType(const std::string &hostType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getHostStatus() const;
	void setHostStatus(const std::string &hostStatus);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAllocationStatus() const;
	void setAllocationStatus(const std::string &allocationStatus);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOrderId() const;
	void setOrderId(long orderId);
	std::string getDedicatedHostId() const;
	void setDedicatedHostId(const std::string &dedicatedHostId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string hostType_;
	std::string accessKeyId_;
	std::string hostStatus_;
	std::string regionId_;
	std::string allocationStatus_;
	std::string dedicatedHostGroupId_;
	std::string resourceOwnerAccount_;
	long orderId_;
	std::string dedicatedHostId_;
	long ownerId_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDEDICATEDHOSTSREQUEST_H_
