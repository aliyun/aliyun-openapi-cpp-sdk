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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeDBInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeDBInstancesRequest();
	~DescribeDBInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getReplicationFactor() const;
	void setReplicationFactor(const std::string &replicationFactor);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getExpired() const;
	void setExpired(const std::string &expired);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBNodeType() const;
	void setDBNodeType(const std::string &dBNodeType);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getDBInstanceStatus() const;
	void setDBInstanceStatus(const std::string &dBInstanceStatus);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getExpireTime() const;
	void setExpireTime(const std::string &expireTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getConnectionDomain() const;
	void setConnectionDomain(const std::string &connectionDomain);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceType() const;
	void setDBInstanceType(const std::string &dBInstanceType);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string engineVersion_;
	std::string networkType_;
	int pageNumber_;
	std::string replicationFactor_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string expired_;
	std::string regionId_;
	std::string engine_;
	int pageSize_;
	std::string dBNodeType_;
	std::string dBInstanceId_;
	std::string dBInstanceDescription_;
	std::string dBInstanceStatus_;
	std::vector<Tag> tag_;
	std::string expireTime_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string connectionDomain_;
	long ownerId_;
	std::string dBInstanceType_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string vpcId_;
	std::string zoneId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
