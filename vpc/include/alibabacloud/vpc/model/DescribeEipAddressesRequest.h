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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEIPADDRESSESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEIPADDRESSESREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeEipAddressesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeEipAddressesRequest();
	~DescribeEipAddressesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPublicIpAddressPoolId() const;
	void setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId);
	std::string getFilter2Value() const;
	void setFilter2Value(const std::string &filter2Value);
	std::string getISP() const;
	void setISP(const std::string &iSP);
	std::string getEipName() const;
	void setEipName(const std::string &eipName);
	std::string getEipAddress() const;
	void setEipAddress(const std::string &eipAddress);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLockReason() const;
	void setLockReason(const std::string &lockReason);
	std::string getFilter1Key() const;
	void setFilter1Key(const std::string &filter1Key);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getSegmentInstanceId() const;
	void setSegmentInstanceId(const std::string &segmentInstanceId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getFilter1Value() const;
	void setFilter1Value(const std::string &filter1Value);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	bool getSecurityProtectionEnabled() const;
	void setSecurityProtectionEnabled(bool securityProtectionEnabled);
	bool getServiceManaged() const;
	void setServiceManaged(bool serviceManaged);
	std::string getAllocationId() const;
	void setAllocationId(const std::string &allocationId);
	bool getIncludeReservationData() const;
	void setIncludeReservationData(bool includeReservationData);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAssociatedInstanceType() const;
	void setAssociatedInstanceType(const std::string &associatedInstanceType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getBandwidthPackageId() const;
	void setBandwidthPackageId(const std::string &bandwidthPackageId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getFilter2Key() const;
	void setFilter2Key(const std::string &filter2Key);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getAssociatedInstanceId() const;
	void setAssociatedInstanceId(const std::string &associatedInstanceId);

private:
	long resourceOwnerId_;
	std::string publicIpAddressPoolId_;
	std::string filter2Value_;
	std::string iSP_;
	std::string eipName_;
	std::string eipAddress_;
	std::string resourceGroupId_;
	std::string lockReason_;
	std::string filter1Key_;
	std::vector<Tag> tag_;
	std::string segmentInstanceId_;
	bool dryRun_;
	std::string filter1Value_;
	long ownerId_;
	std::string status_;
	bool securityProtectionEnabled_;
	bool serviceManaged_;
	std::string allocationId_;
	bool includeReservationData_;
	int pageNumber_;
	std::string regionId_;
	std::string associatedInstanceType_;
	int pageSize_;
	std::string bandwidthPackageId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string filter2Key_;
	std::string chargeType_;
	std::string associatedInstanceId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEIPADDRESSESREQUEST_H_
