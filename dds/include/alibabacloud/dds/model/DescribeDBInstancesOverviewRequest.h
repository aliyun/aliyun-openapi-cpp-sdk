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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESOVERVIEWREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESOVERVIEWREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeDBInstancesOverviewRequest : public RpcServiceRequest {
public:
	DescribeDBInstancesOverviewRequest();
	~DescribeDBInstancesOverviewRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getShowTags() const;
	void setShowTags(bool showTags);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceStatus() const;
	void setInstanceStatus(const std::string &instanceStatus);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	bool showTags_;
	std::string networkType_;
	std::string engineVersion_;
	std::string instanceClass_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string instanceType_;
	std::string instanceStatus_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string vSwitchId_;
	std::string instanceIds_;
	std::string vpcId_;
	std::string zoneId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESOVERVIEWREQUEST_H_
