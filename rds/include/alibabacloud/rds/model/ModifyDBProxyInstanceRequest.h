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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBProxyInstanceRequest : public RpcServiceRequest {
public:
	struct MigrateAZ {
		std::string destVpcId;
		std::string dbProxyEndpointId;
		std::string destVSwitchId;
	};
	struct DBProxyNodes {
		std::string cpuCores;
		std::string zoneId;
		std::string nodeCounts;
	};
	ModifyDBProxyInstanceRequest();
	~ModifyDBProxyInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVSwitchIds() const;
	void setVSwitchIds(const std::string &vSwitchIds);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::vector<MigrateAZ> getMigrateAZ() const;
	void setMigrateAZ(const std::vector<MigrateAZ> &migrateAZ);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::string getEffectiveSpecificTime() const;
	void setEffectiveSpecificTime(const std::string &effectiveSpecificTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<DBProxyNodes> getDBProxyNodes() const;
	void setDBProxyNodes(const std::vector<DBProxyNodes> &dBProxyNodes);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBProxyEngineType() const;
	void setDBProxyEngineType(const std::string &dBProxyEngineType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBProxyInstanceNum() const;
	void setDBProxyInstanceNum(const std::string &dBProxyInstanceNum);
	std::string getDBProxyInstanceType() const;
	void setDBProxyInstanceType(const std::string &dBProxyInstanceType);

private:
	long resourceOwnerId_;
	std::string vSwitchIds_;
	std::string accessKeyId_;
	std::vector<MigrateAZ> migrateAZ_;
	std::string effectiveTime_;
	std::string effectiveSpecificTime_;
	std::string regionId_;
	std::vector<DBProxyNodes> dBProxyNodes_;
	std::string dBInstanceId_;
	std::string resourceOwnerAccount_;
	std::string dBProxyEngineType_;
	long ownerId_;
	std::string dBProxyInstanceNum_;
	std::string dBProxyInstanceType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYINSTANCEREQUEST_H_
