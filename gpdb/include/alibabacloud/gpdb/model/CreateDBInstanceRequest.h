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

#ifndef ALIBABACLOUD_GPDB_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT CreateDBInstanceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateDBInstanceRequest();
	~CreateDBInstanceRequest();
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getDBInstanceCategory() const;
	void setDBInstanceCategory(const std::string &dBInstanceCategory);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getEncryptionType() const;
	void setEncryptionType(const std::string &encryptionType);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getServerlessMode() const;
	void setServerlessMode(const std::string &serverlessMode);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getVectorConfigurationStatus() const;
	void setVectorConfigurationStatus(const std::string &vectorConfigurationStatus);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSegDiskPerformanceLevel() const;
	void setSegDiskPerformanceLevel(const std::string &segDiskPerformanceLevel);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	long getStorageSize() const;
	void setStorageSize(long storageSize);
	std::string getSegStorageType() const;
	void setSegStorageType(const std::string &segStorageType);
	std::string getMasterNodeNum() const;
	void setMasterNodeNum(const std::string &masterNodeNum);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSegNodeNum() const;
	void setSegNodeNum(const std::string &segNodeNum);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	bool getCreateSampleData() const;
	void setCreateSampleData(bool createSampleData);
	std::string getDBInstanceGroupCount() const;
	void setDBInstanceGroupCount(const std::string &dBInstanceGroupCount);
	std::string getDBInstanceMode() const;
	void setDBInstanceMode(const std::string &dBInstanceMode);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	int getServerlessResource() const;
	void setServerlessResource(int serverlessResource);
	int getIdleTime() const;
	void setIdleTime(int idleTime);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string engineVersion_;
	std::string dBInstanceCategory_;
	std::string storageType_;
	std::string resourceGroupId_;
	std::string encryptionType_;
	std::string dBInstanceDescription_;
	std::string serverlessMode_;
	std::vector<Tag> tag_;
	std::string period_;
	std::string vectorConfigurationStatus_;
	std::string encryptionKey_;
	long ownerId_;
	std::string segDiskPerformanceLevel_;
	std::string dBInstanceClass_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	std::string clientToken_;
	std::string instanceSpec_;
	long storageSize_;
	std::string segStorageType_;
	std::string masterNodeNum_;
	std::string accessKeyId_;
	std::string segNodeNum_;
	std::string regionId_;
	std::string engine_;
	bool createSampleData_;
	std::string dBInstanceGroupCount_;
	std::string dBInstanceMode_;
	std::string usedTime_;
	std::string vPCId_;
	int serverlessResource_;
	int idleTime_;
	std::string payType_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_CREATEDBINSTANCEREQUEST_H_
