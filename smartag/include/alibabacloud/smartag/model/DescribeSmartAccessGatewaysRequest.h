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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT DescribeSmartAccessGatewaysRequest : public RpcServiceRequest {
public:
	DescribeSmartAccessGatewaysRequest();
	~DescribeSmartAccessGatewaysRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAclIds() const;
	void setAclIds(const std::string &aclIds);
	bool getCanAssociateQos() const;
	void setCanAssociateQos(bool canAssociateQos);
	std::string getSoftwareVersion() const;
	void setSoftwareVersion(const std::string &softwareVersion);
	std::string getUnboundAclIds() const;
	void setUnboundAclIds(const std::string &unboundAclIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getVersionComparator() const;
	void setVersionComparator(const std::string &versionComparator);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getHardwareType() const;
	void setHardwareType(const std::string &hardwareType);
	std::vector<std::string> getSmartAGIds() const;
	void setSmartAGIds(const std::vector<std::string> &smartAGIds);
	std::string getApplicationBandwidthPackageId() const;
	void setApplicationBandwidthPackageId(const std::string &applicationBandwidthPackageId);
	std::string getSerialNumber() const;
	void setSerialNumber(const std::string &serialNumber);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getAssociatedCcnId() const;
	void setAssociatedCcnId(const std::string &associatedCcnId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBusinessState() const;
	void setBusinessState(const std::string &businessState);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string aclIds_;
	bool canAssociateQos_;
	std::string softwareVersion_;
	std::string unboundAclIds_;
	int pageNumber_;
	std::string versionComparator_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::string instanceType_;
	std::string hardwareType_;
	std::vector<std::string> smartAGIds_;
	std::string applicationBandwidthPackageId_;
	std::string serialNumber_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string associatedCcnId_;
	long ownerId_;
	std::string businessState_;
	std::string name_;
	std::string smartAGId_;
	std::string status_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSREQUEST_H_
