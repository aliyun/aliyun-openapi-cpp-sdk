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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESFORCLONEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESFORCLONEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancesForCloneRequest : public RpcServiceRequest {
public:
	DescribeDBInstancesForCloneRequest();
	~DescribeDBInstancesForCloneRequest();
	std::string getConnectionMode() const;
	void setConnectionMode(const std::string &connectionMode);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNodeType() const;
	void setNodeType(const std::string &nodeType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getExpired() const;
	void setExpired(const std::string &expired);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCurrentInstanceId() const;
	void setCurrentInstanceId(const std::string &currentInstanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceStatus() const;
	void setDBInstanceStatus(const std::string &dBInstanceStatus);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getProxyId() const;
	void setProxyId(const std::string &proxyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
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
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);

private:
	std::string connectionMode_;
	long resourceOwnerId_;
	std::string nodeType_;
	std::string clientToken_;
	std::string searchKey_;
	std::string engineVersion_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string expired_;
	std::string engine_;
	std::string regionId_;
	std::string currentInstanceId_;
	int pageSize_;
	std::string dBInstanceStatus_;
	std::string dBInstanceId_;
	std::string proxyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBInstanceType_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string vpcId_;
	std::string zoneId_;
	std::string payType_;
	std::string instanceNetworkType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESFORCLONEREQUEST_H_
