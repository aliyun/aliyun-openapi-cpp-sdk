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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEEIPADDRESSESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEEIPADDRESSESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeEipAddressesRequest : public RpcServiceRequest {
public:
	DescribeEipAddressesRequest();
	~DescribeEipAddressesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getFilter2Value() const;
	void setFilter2Value(const std::string &filter2Value);
	std::string getISP() const;
	void setISP(const std::string &iSP);
	std::string getAllocationId() const;
	void setAllocationId(const std::string &allocationId);
	std::string getEipAddress() const;
	void setEipAddress(const std::string &eipAddress);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getLockReason() const;
	void setLockReason(const std::string &lockReason);
	std::string getFilter1Key() const;
	void setFilter1Key(const std::string &filter1Key);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAssociatedInstanceType() const;
	void setAssociatedInstanceType(const std::string &associatedInstanceType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getFilter1Value() const;
	void setFilter1Value(const std::string &filter1Value);
	std::string getFilter2Key() const;
	void setFilter2Key(const std::string &filter2Key);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getAssociatedInstanceId() const;
	void setAssociatedInstanceId(const std::string &associatedInstanceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string filter2Value_;
	std::string iSP_;
	std::string allocationId_;
	std::string eipAddress_;
	int pageNumber_;
	std::string lockReason_;
	std::string filter1Key_;
	std::string regionId_;
	std::string associatedInstanceType_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string filter1Value_;
	std::string filter2Key_;
	long ownerId_;
	std::string chargeType_;
	std::string associatedInstanceId_;
	std::string status_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEEIPADDRESSESREQUEST_H_
