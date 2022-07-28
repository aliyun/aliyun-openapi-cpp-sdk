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

#ifndef ALIBABACLOUD_DBS_MODEL_CREATEANDSTARTBACKUPPLANREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CREATEANDSTARTBACKUPPLANREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT CreateAndStartBackupPlanRequest : public RpcServiceRequest {
public:
	CreateAndStartBackupPlanRequest();
	~CreateAndStartBackupPlanRequest();
	std::string getDatabaseType() const;
	void setDatabaseType(const std::string &databaseType);
	long getBackupGatewayId() const;
	void setBackupGatewayId(long backupGatewayId);
	std::string getSourceEndpointUserName() const;
	void setSourceEndpointUserName(const std::string &sourceEndpointUserName);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getDatabaseRegion() const;
	void setDatabaseRegion(const std::string &databaseRegion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getBackupStartTime() const;
	void setBackupStartTime(const std::string &backupStartTime);
	std::string getSourceEndpointIP() const;
	void setSourceEndpointIP(const std::string &sourceEndpointIP);
	std::string getCrossRoleName() const;
	void setCrossRoleName(const std::string &crossRoleName);
	std::string getBackupStorageType() const;
	void setBackupStorageType(const std::string &backupStorageType);
	int getDuplicationArchivePeriod() const;
	void setDuplicationArchivePeriod(int duplicationArchivePeriod);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	int getBackupLogIntervalSeconds() const;
	void setBackupLogIntervalSeconds(int backupLogIntervalSeconds);
	std::string getFromApp() const;
	void setFromApp(const std::string &fromApp);
	std::string getSourceEndpointPassword() const;
	void setSourceEndpointPassword(const std::string &sourceEndpointPassword);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getBackupMethod() const;
	void setBackupMethod(const std::string &backupMethod);
	int getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(int backupRetentionPeriod);
	std::string getBackupPeriod() const;
	void setBackupPeriod(const std::string &backupPeriod);
	long getBackupSpeedLimit() const;
	void setBackupSpeedLimit(long backupSpeedLimit);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	std::string getBackupPlanName() const;
	void setBackupPlanName(const std::string &backupPlanName);
	std::string getOSSBucketName() const;
	void setOSSBucketName(const std::string &oSSBucketName);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getSourceEndpointRegion() const;
	void setSourceEndpointRegion(const std::string &sourceEndpointRegion);
	std::string getSourceEndpointInstanceID() const;
	void setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBackupPlanId() const;
	void setBackupPlanId(const std::string &backupPlanId);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getSourceEndpointDatabaseName() const;
	void setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName);
	int getDuplicationInfrequentAccessPeriod() const;
	void setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	bool getEnableBackupLog() const;
	void setEnableBackupLog(bool enableBackupLog);
	std::string getCrossAliyunId() const;
	void setCrossAliyunId(const std::string &crossAliyunId);
	std::string getBackupObjects() const;
	void setBackupObjects(const std::string &backupObjects);
	long getBackupRateLimit() const;
	void setBackupRateLimit(long backupRateLimit);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	int getSourceEndpointPort() const;
	void setSourceEndpointPort(int sourceEndpointPort);
	std::string getStorageRegion() const;
	void setStorageRegion(const std::string &storageRegion);
	std::string getSourceEndpointOracleSID() const;
	void setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID);
	std::string getBackupStrategyType() const;
	void setBackupStrategyType(const std::string &backupStrategyType);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string databaseType_;
	long backupGatewayId_;
	std::string sourceEndpointUserName_;
	std::string storageType_;
	std::string databaseRegion_;
	std::string resourceGroupId_;
	std::string backupStartTime_;
	std::string sourceEndpointIP_;
	std::string crossRoleName_;
	std::string backupStorageType_;
	int duplicationArchivePeriod_;
	std::string period_;
	int backupLogIntervalSeconds_;
	std::string fromApp_;
	std::string sourceEndpointPassword_;
	std::string ownerId_;
	std::string backupMethod_;
	int backupRetentionPeriod_;
	std::string backupPeriod_;
	long backupSpeedLimit_;
	std::string sourceEndpointInstanceType_;
	std::string backupPlanName_;
	std::string oSSBucketName_;
	std::string region_;
	std::string sourceEndpointRegion_;
	std::string sourceEndpointInstanceID_;
	std::string clientToken_;
	std::string backupPlanId_;
	std::string instanceClass_;
	std::string sourceEndpointDatabaseName_;
	int duplicationInfrequentAccessPeriod_;
	std::string instanceType_;
	bool enableBackupLog_;
	std::string crossAliyunId_;
	std::string backupObjects_;
	long backupRateLimit_;
	int usedTime_;
	int sourceEndpointPort_;
	std::string storageRegion_;
	std::string sourceEndpointOracleSID_;
	std::string backupStrategyType_;
	std::string payType_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_CREATEANDSTARTBACKUPPLANREQUEST_H_
