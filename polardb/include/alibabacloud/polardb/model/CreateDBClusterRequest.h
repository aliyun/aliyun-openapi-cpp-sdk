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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateDBClusterRequest : public RpcServiceRequest {
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
	std::string getProxyClass() const;
	void setProxyClass(const std::string &proxyClass);
	std::string getProxyType() const;
	void setProxyType(const std::string &proxyType);
	std::string getScaleMax() const;
	void setScaleMax(const std::string &scaleMax);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getCreationCategory() const;
	void setCreationCategory(const std::string &creationCategory);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBNodeClass() const;
	void setDBNodeClass(const std::string &dBNodeClass);
	std::string getCreationOption() const;
	void setCreationOption(const std::string &creationOption);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getSourceResourceId() const;
	void setSourceResourceId(const std::string &sourceResourceId);
	std::string getScaleMin() const;
	void setScaleMin(const std::string &scaleMin);
	std::string getBackupRetentionPolicyOnClusterDeletion() const;
	void setBackupRetentionPolicyOnClusterDeletion(const std::string &backupRetentionPolicyOnClusterDeletion);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getDBMinorVersion() const;
	void setDBMinorVersion(const std::string &dBMinorVersion);
	long getProvisionedIops() const;
	void setProvisionedIops(long provisionedIops);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getHotStandbyCluster() const;
	void setHotStandbyCluster(const std::string &hotStandbyCluster);
	std::string getStoragePayType() const;
	void setStoragePayType(const std::string &storagePayType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getStorageAutoScale() const;
	void setStorageAutoScale(const std::string &storageAutoScale);
	bool getTDEStatus() const;
	void setTDEStatus(bool tDEStatus);
	std::string getAllowShutDown() const;
	void setAllowShutDown(const std::string &allowShutDown);
	std::string getLowerCaseTableNames() const;
	void setLowerCaseTableNames(const std::string &lowerCaseTableNames);
	bool getStorageEncryption() const;
	void setStorageEncryption(bool storageEncryption);
	std::string getScaleRoNumMax() const;
	void setScaleRoNumMax(const std::string &scaleRoNumMax);
	std::string getStandbyAZ() const;
	void setStandbyAZ(const std::string &standbyAZ);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDefaultTimeZone() const;
	void setDefaultTimeZone(const std::string &defaultTimeZone);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getClusterNetworkType() const;
	void setClusterNetworkType(const std::string &clusterNetworkType);
	std::string getStorageEncryptionKey() const;
	void setStorageEncryptionKey(const std::string &storageEncryptionKey);
	std::string getParameterGroupId() const;
	void setParameterGroupId(const std::string &parameterGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getGDNId() const;
	void setGDNId(const std::string &gDNId);
	std::string getLooseXEngine() const;
	void setLooseXEngine(const std::string &looseXEngine);
	std::string getLoosePolarLogBin() const;
	void setLoosePolarLogBin(const std::string &loosePolarLogBin);
	std::string getArchitecture() const;
	void setArchitecture(const std::string &architecture);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getLooseXEngineUseMemoryPct() const;
	void setLooseXEngineUseMemoryPct(const std::string &looseXEngineUseMemoryPct);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getBurstingEnabled() const;
	void setBurstingEnabled(const std::string &burstingEnabled);
	std::string getTargetMinorVersion() const;
	void setTargetMinorVersion(const std::string &targetMinorVersion);
	int getDBNodeNum() const;
	void setDBNodeNum(int dBNodeNum);
	long getStorageUpperBound() const;
	void setStorageUpperBound(long storageUpperBound);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getScaleRoNumMin() const;
	void setScaleRoNumMin(const std::string &scaleRoNumMin);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);
	std::string getDBVersion() const;
	void setDBVersion(const std::string &dBVersion);
	std::string getStrictConsistency() const;
	void setStrictConsistency(const std::string &strictConsistency);
	std::string getCloneDataPoint() const;
	void setCloneDataPoint(const std::string &cloneDataPoint);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	long getStorageSpace() const;
	void setStorageSpace(long storageSpace);
	std::string getServerlessType() const;
	void setServerlessType(const std::string &serverlessType);

private:
	long resourceOwnerId_;
	std::string dBClusterDescription_;
	std::string proxyClass_;
	std::string proxyType_;
	std::string scaleMax_;
	std::string storageType_;
	std::string creationCategory_;
	std::string resourceGroupId_;
	std::string dBNodeClass_;
	std::string creationOption_;
	std::vector<Tag> tag_;
	std::string sourceResourceId_;
	std::string scaleMin_;
	std::string backupRetentionPolicyOnClusterDeletion_;
	std::string period_;
	long ownerId_;
	std::string vSwitchId_;
	std::string securityIPList_;
	std::string dBMinorVersion_;
	long provisionedIops_;
	bool autoRenew_;
	std::string hotStandbyCluster_;
	std::string storagePayType_;
	std::string zoneId_;
	std::string storageAutoScale_;
	bool tDEStatus_;
	std::string allowShutDown_;
	std::string lowerCaseTableNames_;
	bool storageEncryption_;
	std::string scaleRoNumMax_;
	std::string standbyAZ_;
	std::string clientToken_;
	std::string defaultTimeZone_;
	std::string accessKeyId_;
	std::string clusterNetworkType_;
	std::string storageEncryptionKey_;
	std::string parameterGroupId_;
	std::string regionId_;
	std::string engine_;
	std::string gDNId_;
	std::string looseXEngine_;
	std::string loosePolarLogBin_;
	std::string architecture_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string looseXEngineUseMemoryPct_;
	std::string usedTime_;
	std::string burstingEnabled_;
	std::string targetMinorVersion_;
	int dBNodeNum_;
	long storageUpperBound_;
	std::string vPCId_;
	std::string scaleRoNumMin_;
	std::string dBType_;
	std::string dBVersion_;
	std::string strictConsistency_;
	std::string cloneDataPoint_;
	std::string payType_;
	long storageSpace_;
	std::string serverlessType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERREQUEST_H_
