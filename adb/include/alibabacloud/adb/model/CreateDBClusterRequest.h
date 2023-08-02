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

#ifndef ALIBABACLOUD_ADB_MODEL_CREATEDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_CREATEDBCLUSTERREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT CreateDBClusterRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateDBClusterRequest();
	~CreateDBClusterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBClusterDescription() const;
	void setDBClusterDescription(const std::string &dBClusterDescription);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getBackupSetID() const;
	void setBackupSetID(const std::string &backupSetID);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBNodeGroupCount() const;
	void setDBNodeGroupCount(const std::string &dBNodeGroupCount);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getComputeResource() const;
	void setComputeResource(const std::string &computeResource);
	std::string getElasticIOResource() const;
	void setElasticIOResource(const std::string &elasticIOResource);
	std::string getSourceDBInstanceName() const;
	void setSourceDBInstanceName(const std::string &sourceDBInstanceName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStorageResource() const;
	void setStorageResource(const std::string &storageResource);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBClusterCategory() const;
	void setDBClusterCategory(const std::string &dBClusterCategory);
	std::string getDBClusterNetworkType() const;
	void setDBClusterNetworkType(const std::string &dBClusterNetworkType);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDBClusterVersion() const;
	void setDBClusterVersion(const std::string &dBClusterVersion);
	std::string getDBClusterClass() const;
	void setDBClusterClass(const std::string &dBClusterClass);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getRestoreType() const;
	void setRestoreType(const std::string &restoreType);
	std::string getDBNodeStorage() const;
	void setDBNodeStorage(const std::string &dBNodeStorage);
	std::string getExecutorCount() const;
	void setExecutorCount(const std::string &executorCount);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	long resourceOwnerId_;
	std::string dBClusterDescription_;
	std::string storageType_;
	std::string mode_;
	std::string resourceGroupId_;
	std::vector<Tag> tag_;
	std::string period_;
	std::string backupSetID_;
	long ownerId_;
	std::string dBNodeGroupCount_;
	std::string vSwitchId_;
	std::string zoneId_;
	std::string computeResource_;
	std::string elasticIOResource_;
	std::string sourceDBInstanceName_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string storageResource_;
	std::string regionId_;
	std::string dBClusterCategory_;
	std::string dBClusterNetworkType_;
	std::string restoreTime_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string dBClusterVersion_;
	std::string dBClusterClass_;
	std::string usedTime_;
	std::string restoreType_;
	std::string dBNodeStorage_;
	std::string executorCount_;
	std::string vPCId_;
	std::string payType_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_CREATEDBCLUSTERREQUEST_H_
