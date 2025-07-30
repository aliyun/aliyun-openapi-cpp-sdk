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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_MIGRATETOOTHERZONEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_MIGRATETOOTHERZONEREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT MigrateToOtherZoneRequest : public RpcServiceRequest {
public:
	MigrateToOtherZoneRequest();
	~MigrateToOtherZoneRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSecondaryZoneId() const;
	void setSecondaryZoneId(const std::string &secondaryZoneId);
	int getSlaveReadOnlyCount() const;
	void setSlaveReadOnlyCount(int slaveReadOnlyCount);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getReadOnlyCount() const;
	void setReadOnlyCount(int readOnlyCount);
	int getSlaveReplicaCount() const;
	void setSlaveReplicaCount(int slaveReplicaCount);
	int getReplicaCount() const;
	void setReplicaCount(int replicaCount);

private:
	long resourceOwnerId_;
	std::string secondaryZoneId_;
	int slaveReadOnlyCount_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string effectiveTime_;
	std::string dBInstanceId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string vSwitchId_;
	std::string zoneId_;
	int readOnlyCount_;
	int slaveReplicaCount_;
	int replicaCount_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_MIGRATETOOTHERZONEREQUEST_H_
